/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.7 (Required):
 * All if ... else if constructs shall be terminated with an else
 * statement
 * 
 * Implemented by message:
 * 2004   No concluding 'else' exists in this 'if'-'else'-'if'
 *        statement.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1507( void )
{
   int16_t r = 0;

   if ( s16a == 2 )
   {
      r = 3;
   }
   else if ( s16a == 3 )                   /* 2004 */
   {
      r = 2;
   }

   return r;
}

