/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.6 (Required):
 * Every switch statement shall have at least two switch-clauses
 * 
 * Implemented by message:
 * 3315   This 'switch' statement contains only a single path - it
 *        is redundant.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1606( void )
{
   int16_t x;

   switch ( s16a )
   {
   default:
      x = s16a;
      break;
   }                            /* 3315 */

   x = x + s16b;

   return x;
}
