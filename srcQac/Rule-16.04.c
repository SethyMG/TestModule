/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.4 (Required):
 * Every switch statement shall have a default label
 * 
 * Implemented by message:
 * 2002   No 'default' label found in this 'switch' statement.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1604( void )
{
   int16_t x = 0;

   switch ( s16a )
   {
   case 0:
      x = 2;
      break;
   case 1:
      x = 1;
      break;
   }                            /* 2002 */

   return x;
}
