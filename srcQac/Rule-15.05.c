/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.5 (Advisory):
 * A function should have a single point of exit at the end
 * 
 * Implemented by message:
 * 2889   This function has more than one 'return' path.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1505( void )                                /* 2889 */
{
   if ( s16a > 0 )
   {
      return 0;
   }
   else
   {
      return 1;
   }
}
