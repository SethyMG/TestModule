/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.7 (Required):
 * The atof, atoi, atol and atoll functions of <stdlib.h> shall
 * not be used
 * 
 * Implemented by message:
 * 5125   Use of function: atof, atoi, atol or atoll.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2107( void )
{
   float64_t dx;
   int16_t   ix;
   int32_t   lx;

   dx = atof( "12.34" );                        /* 5125 */
   ix = atoi( "3456" );                         /* 5125 */
   lx = atol( "12345678" );                     /* 5125 */

   return 1;
}
