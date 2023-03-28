/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.5 (Required):
 * A default label shall appear as either the first or the last
 * switch label of a switch statement
 * 
 * Implemented by message:
 * 2009   This 'default' label is not the final 'case' label
 *        within the 'switch' block.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1605( void )
{
   int16_t x;

   switch ( s16a )
   {
   default:                     /* 2009 */              /* Compliant */
      x = 7;
      break;
   case 2:
      x = 5;
      break;
   case 3:
      x = 2;
      break;
   }

   switch ( s16a )
   {
   case 2:
      x = 5;
      break;
   default:                     /* 2009 */              /* Not Compliant */
      x = 7;
      break;
   case 3:
      x = 2;
      break;
   }

   return x;
}
