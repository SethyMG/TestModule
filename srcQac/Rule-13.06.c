/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-13.6 (Mandatory):
 * The operand of the sizeof operator shall not contain any
 * expression which has potential side-effects
 * 
 * Implemented by message:
 * 3307   The operand of 'sizeof' is an expression with implied
 *        side effects, but they will not be evaluated.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2984

#include "misra.h"
#include "m3cmex.h"

static const char * rule_1203a( void );

extern int16_t rule_1306( void )
{
   volatile uint16_t vui;
   uint16_t x;
   uint16_t u = 1U;
   uint16_t v = 2U;
   int16_t r;

   x = sizeof( int16_t );                               /*                     */
   x = sizeof( u++ );                                   /* 3307                */
   x = x + sizeof( u );                                 /*                     */
   x = x + sizeof( u++ );                               /* 3307                */
   x = x + sizeof( rule_1203a() );                      /* 3307                */
   x = x + sizeof( u + v );                             /*                     */
   x = sizeof(int16_t [10]);                            /*                     */
   x = sizeof(int16_t [u16a]);                          /*      0945 1051      */
   x = sizeof(int16_t [u16a++]);                        /*      0945 1051      */    /* Non-compliant */
   x = sizeof (void (*[u16a]) (int32_t buf[vui]));      /*      0945 1051 1052 */    /* Non-compliant */
   r = (int16_t)x + (int16_t)u + (int16_t)v;            /*                     */

   return r;
}

static const char * rule_1203a( void )
{
   return "ABC";
}
