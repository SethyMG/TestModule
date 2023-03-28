/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.12.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.12 (Advisory):
 * The exception handling features of <fenv.h> should not be used
 * 
 * Implemented by message:
 * 5136   Use of exception handling identifier: feclearexcept,
 *        fegetexceptflag, feraiseexcept, fesetexceptflag or
 *        fetestexcept.
 * 
 * <<<------------------------------------------------------------ */



#include <fenv.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2112( void )
{
   float32_t z;
   s16a = feclearexcept( FE_DIVBYZERO );                /* 5136 */
   z = f32a / f32b;
   if ( fetestexcept( FE_DIVBYZERO ) != 0 )             /* 5136 */
   {
   }
   else
   {
#pragma STDC FENV_ACCESS ON                             /* 3116 */
       z = f32a * f32b;
   }
   if ( z > f32a )
   {
#pragma STDC FENV_ACCESS OFF                            /* 3116 */
       if ( fetestexcept( FE_OVERFLOW ) != 0)           /* 5136 */
       {
       }
   }

   return 1;
}
