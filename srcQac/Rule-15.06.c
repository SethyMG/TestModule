/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.6 (Required):
 * The body of an iteration-statement or a selection-statement
 * shall be a compound-statement
 * 
 * Implemented by messages:
 * 2212   Body of control statement is not enclosed within braces.
 * 
 * 2214   Body of control statement is on the same line and is not
 *        enclosed within braces.
 * 
 * 3402   Braces are needed to clarify the structure of this
 *        'if'-'if'-'else' statement.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1506( void )
{
   int16_t n = 0;

   if ( s16a == 0 )
   {
      s16c += 4;
   }
   else if ( s16a == 1 )
   {
      if ( s16b > 1 )
      {
         ++s16b;
      }
   }
   else
   {
      ++s16c;
   }

   if ( s16b == 2 )
      s16c += 3;                        /* 2212 */
   else
      n = 2;                            /* 2212 */

   if ( s16b == 5 ) n = 6;              /* 2214 */
   else n = n - s16a;                   /* 2214 */

   if ( n > 5 )                         /* 3402 */
      if ( s16b > 10 )                  /* 2212 */
      {
         s16a = 1;
      }
      else
      {
         s16a = 2;
      }


   for ( n = 0; n < 5; n++ )
      ++s16a;                           /* 2212 */

   for ( n = 0; n < 5; n++ ) ++s16a;    /* 2214 */

   n = get_s16();
   while ( n < 5 )
      ++n;                              /* 2212 */

   do n++; while ( n < 9 );             /* 2214 */

   return s16a;
}
