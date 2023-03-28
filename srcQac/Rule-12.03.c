/* >>>------------------------------------------------------------
 * 
 * File: Rule-12.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-12.3 (Advisory):
 * The comma operator should not be used
 * 
 * Implemented by messages:
 * 3417   The comma operator has been used outside a 'for'
 *        statement.
 * 
 * 3418   The comma operator has been used in a 'for' statement.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2984

#include "misra.h"
#include "m3cmex.h"

#define A (-5)
#define B 3

extern int16_t rule_1203( void )
{
   int16_t x;
   int16_t y;
   int16_t i;

   y = ( x = A, x + B );              /* 3417 3226 */

   for ( i = 0, ++y; i < B; ++i )     /* 3418      */
   {
      ++y;
   }

   return y;
}
