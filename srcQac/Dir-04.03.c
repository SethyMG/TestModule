/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.3 (Required):
 * Assembly language shall be encapsulated and isolated
 * 
 * Implemented by message:
 * 3006   This function contains a mixture of in-line assembler
 *        statements and C statements.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982

/*********************************************************************
INLINE ASSEMBLER EXTENSIONS

1. The assembler extensions option (-ex asm) is accessed through the compiler
   personality in the GUI. This option enables QAC to parse (and ignore) the
   following constructs:

   a. A function defined with the keywords asm or __asm in its prototype
      will be ignored. (Message 1006)
   b. Assembler code blocks introduced by the keywords asm and
      __asm will be ignored. (Message 1006)
   c. In-line assembler statements of the form asm(...); will be
      ignored.  (Message 1006)
   d. Blocks of statements enclosed between the directives
      #asm and #endasm will be ignored. (Message 1003)

2. Assembler statements can also be ignored by QAC if they are
   located between two #pragma directives which have been declared
   as a #pragma block using the -skippragma option (analyser personality).

*********************************************************************/

#include "misra.h"
#include "m3cmex.h"

static int16_t dir_0403a(void);
static int16_t dir_0403b(void);
static int16_t dir_0403c(void);
static int16_t dir_0403d(void);
static int16_t dir_0403e(void);

extern int16_t dir_0403( void )
{
   int16_t r = 1;

   r = r + dir_0403a();
   r = r + dir_0403b();
   r = r + dir_0403c();
   r = r + dir_0403d();

   return r;
}

static int16_t dir_0403a( void )                /* 3006 */
{
   int16_t r;
   r = s16a;
   asm { .. Assembler ...}                      /* 1006 */
   return r;
}

static int16_t dir_0403b( void )                /* 3006 */
{
   int16_t r;
   r = s16a;
   __asm { ... Assembler ... }                  /* 1006 */
   return r;
}

static int16_t dir_0403c( void )                /* 3006 */
{
   int16_t r;

   r = s16a;
#asm                                            /* 1003 */

   Any assembler statements
   will be ignored in this block

#endasm                                         /* 1003 */

   return r;
}

#define AM1  asm { .. Assembler ...}

static int16_t dir_0403d( void )
{
   int16_t r;
   r = s16a;
   AM1;                                         /* 1006 */
   return r;
}
