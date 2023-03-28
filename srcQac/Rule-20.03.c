/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.3 (Required):
 * The #include directive shall be followed by either a <filename>
 * or "filename" sequence
 * 
 * Implemented by message:
 *  809   [U] The '#include' preprocessing directive has not been
 *        followed by <h-char-sequence> or "s-char-sequence".
 * 
 * <<<------------------------------------------------------------ */



#define A "misra.h"
#define B "m3cmex.h"

#include A                                      /* OK */
#include B                                      /* OK */
#include "misra.h"                              /* OK */

#if 0
/* QAC will generate Hard Errors (Level 9)
   if this code block is not excluded      */

#include misra.h                                /* MISRA Violation */
#endif


extern int16_t rule_2003( void )
{
   return 1;
}
