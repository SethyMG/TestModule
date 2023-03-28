/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-17.7 (Required):
 * The value returned by a function having non-void return type
 * shall be used
 * 
 * Implemented by message:
 * 3200   '%s' returns a value which is not being used.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1707a( void );

extern int16_t rule_1707( void )
{
   int16_t r;

   rule_1707a();                       /* 3200 */

   s16a = rule_1707a();

   return 1;
}

static int16_t rule_1707a( void )
{
   return 1;
}
