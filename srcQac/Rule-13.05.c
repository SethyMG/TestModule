/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-13.5 (Required):
 * The right hand operand of a logical && or || operator shall not
 * contain persistent side effects
 * 
 * Implemented by message:
 * 3415   Right hand operand of '&&' or '||' is an expression with
 *        possible side effects.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1305a( int16_t x );

extern int16_t rule_1305( void )
{
   if ( ( s16a > 1 ) && ( s16b++ < 0 ) )                        /* 3415 3440 */
   {
      ++s16r;
   }

   if ( ( s16b > 0 ) || ( rule_1305a( s16a ) != 0 ) )           /* 3415      */
   {
      ++s16r;
   }

   return 1;
}

static int16_t rule_1305a( int16_t x )
{
   return x + x;
}
