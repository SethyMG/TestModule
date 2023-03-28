/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-16.7 (Required):
 * A switch-expression shall not have essentially Boolean type
 * 
 * Implemented by message:
 *  735   Using relational or logical operators in a 'switch'
 *        expression is usually a programming error.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2981

#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1607( void )
{
   int16_t x = 0;

   switch ( u16b == 5u )           /* 0735 */
   {
   case true:
      x = 1;
      break;
   default:
      x =s16b;
      break;
   }

   return x;
}
