/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.3 (Required):
 * An unconditional break statement shall terminate every
 * switch-clause
 * 
 * Implemented by messages:
 * 2003   The preceding 'switch' clause is not empty and does not
 *        end with a 'jump' statement. Execution will fall
 *        through.
 * 
 * 2020   Final 'switch' clause does not end with an explicit
 *        'jump' statement.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1603( void )
{
   switch ( s16a )
   {
   case 0:

   case 1:
      ++s16b;
      break;

   case 2:
      ++s16c;

   case 3:              /* 2003 */
      ++s16b;

   default:             /* 2003 */
      ++s16c;
   }                    /* 2020 */

   return 1;
}
