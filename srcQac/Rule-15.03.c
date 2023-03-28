/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.3 (Required):
 * Any label referenced by a goto statement shall be declared in
 * the same block, or in any block enclosing the goto statement
 * 
 * Implemented by message:
 * 3311   [u] An earlier jump to this statement will bypass the
 *        initialization of local variables.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2981

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1503( void )
{
   if (s16a > 10) {
      goto LAB1;                                      /* 2001           */
   }

   if (s16a > 5) {
      SI     z = 5;

      LAB1:                                           /*      3311      */
      z = 1;
      s16b = s16b + z;
   }

   return 1;
}
