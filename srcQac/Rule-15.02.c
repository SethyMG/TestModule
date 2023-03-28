/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.2 (Required):
 * The goto statement shall jump to a label declared later in the
 * same function
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2752

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1502( void )
{

L: s16a = s16b;
   ++s16b;
   if (s16b == 10)
   {
       goto L;                          /* 2001 */
   }

   return 1;
}
