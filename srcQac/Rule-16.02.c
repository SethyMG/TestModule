/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.2 (Required):
 * A switch label shall only be used when the most
 * closely-enclosing compound statement is the body of a switch
 * statement
 * 
 * Implemented by message:
 * 2019   'Switch' label is located within a nested code block.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1602( void )
{
   int16_t n;

   switch ( s16a )
   {
   case 0:

      if ( s16b == 1 )
      {
         case 1:                /* 2019 */
            break;
      }

      n = get_s16();

      while ( n < 10 )
      {
         ++n;                   /* 2983 */
         case 2:
            break;
      }
   default:                     /* 2003 */
      break;
   }

   return 1;
}
