/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-15.4 (Advisory):
 * There should be no more than one break or goto statement used
 * to terminate any iteration statement
 * 
 * Implemented by message:
 *  771   More than one 'break' statement has been used to
 *        terminate this iteration statement.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1504( void )
{
   int16_t m;
   int16_t n;

   for ( n = 0; n < 5; n++ )
   {
      if ( n > s16a )
      {
         break;
      }

      switch (s16a)
      {
      case 1:
         ++s16b;
         break;
      case 2:
         if (s16b > s16a)
         {
            break;
         }
         ++s16b;
         break;
      default:
         break;
      }

      if ( n > (s16a - 2) )
      {
         break;                                                 /* 0771 */
      }

   }

   /* Both of the following nested loops are compliant
      as each has a single break used for early
      loop termination. */

   for ( m = 0; m < 10; ++m )
   {
      if ( get_bool() )
      {
         break;
      }

      for ( n = 0; n < m; ++n )
      {
         if ( get_bool() )
         {
            break;
         }
      }
   }

   /* The following loop is non-compliant as there are
      multiple break and goto statements used for
      early loop termination. */

   for ( m = 0; m < 10; ++m )
   {
      if ( get_bool() )
      {
         break;
      }
      else if ( get_bool() )
      {
         goto EXIT;                                             /* 2001 */      /* Non-compliant */
      }
      else
      {
         s16b = get_s16();
      }
   }


   /* In the following example, the inner while loop
      is compliant because there is a single goto
      statement that can cause its early termination.
      However, the outer while loop is non-compliant
      because it can be terminated early either by the
      break statement or by the goto statement in
      the inner while loop. */

   while (m != 0)
   {
      m = get_s16();

      if (m == 1)
      {
         break;
      }

      while (n != 0)
      {
         n = get_s16();
         if (n == 1)
         {
            goto EXIT;                                          /* 2001 */      /* Non-compliant */
         }
      }
   }

   EXIT:
   return s16b;
}
