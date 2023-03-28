/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.6 (Required):
 * Tokens that look like a preprocessing directive shall not occur
 * within a macro argument
 * 
 * Implemented by message:
 *  853   [U] Macro arguments contain a sequence of tokens that
 *        has the form of a preprocessing directive.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define SUM(A,B,C,D) ((A) + (B) + (C) + (D))                   /* 3453 */

extern int16_t rule_2006( void )
{
#if 0

   /* QAC will not parse the following code.
      A syntax error will be generated if the
      code is not in an excluded block */

   s16a =  SUM(    5,
#ifdef SW                                               /* Non-compliant * 0853 */
                   s16b,
#else                                                   /* Non-compliant * 0853 */
                   s16c,
#endif                                                  /* Non-compliant * 0853 */
                   0   );

#endif
    return 1;
}
