/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.2 (Advisory):
 * All usage of assembly language should be documented
 * 
 * Implemented by messages:
 * 1003   [E] '#%s' is a language extension for in-line assembler.
 *        All statements located between #asm and #endasm will be
 *        ignored.
 * 
 * 1006   [E] This in-line assembler construct is a language
 *        extension. The code has been ignored.
 * 
 * <<<------------------------------------------------------------ */




#include "misra.h"
#include "m3cmex.h"


static asm int16_t fn_a( void );                /* 1006 */
static int16_t asm fn_b( void );                /* 1006 */
static int16_t __asm fn_c( void );              /* 1006 */
static int16_t     fn_d( void );


extern int16_t dir_0402( void )
{
   int16_t r = s16a;

   r = r + fn_a();
   r = r + fn_b();
   r = r + fn_c();
   r = r + fn_d();

   return r;
}

static asm int16_t fn_a( void )                 /* 1006 */
{
   All statements will be ignored in
   the body of this function.
}

static int16_t asm fn_b( void )                 /* 1006 */
{
   All statements will be ignored in
   the body of this function.
}

static int16_t __asm fn_c( void )               /* 1006 */
{
   All statements will be ignored in
   the body of this function.
}

static int16_t fn_d( void )                     /* 3006 */
{
   const int16_t r = s16a + 1;

   asm { .. Assembler ...}                      /* 1006 */

   __asm { ... Assembler ... }                  /* 1006 */

   asm( Assembler Statements );                 /* 1006 */

#asm                                            /* 1003 */

   Any assembler statements
   will be ignored in this block

#endasm                                         /* 1003 */

   return r;
}
