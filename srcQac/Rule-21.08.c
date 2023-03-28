/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.8 (Required):
 * The library functions abort, exit, getenv and system of
 * <stdlib.h> shall not be used
 * 
 * Implemented by message:
 * 5126   Use of function: abort, exit, getenv or system.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2108( void )
{
   int16_t     i;
   char       *v;

   i = system( "test" );       /* 5126 */

   if ( i < -99 )
   {
      abort();                 /* 5126 */
   }

   if ( i == 40 )
   {
      exit( 1 );               /* 5126 */
   }

   v = getenv( "test" );       /* 5126 */

   return 0;
}
