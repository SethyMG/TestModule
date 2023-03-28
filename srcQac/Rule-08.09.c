/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.9 (Advisory):
 * An object should be defined at block scope if its identifier
 * only appears in a single function
 * 
 * Implemented by messages:
 * 1514   The object '%1s' is only referenced by function '%2s',
 *        in the translation unit where it is defined
 * 
 * 3218   File scope static, '%s', is only accessed in one
 *        function.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3406

#include "misra.h"
#include "m3cmex.h"

static int16_t s0809a;               /* 3218 */         /* MISRA Violation - Only referenced in function rule_0809    */
static int16_t s0809b;               /* 3218 */         /* MISRA Violation - Only referenced in function rule_0809a   */
extern int16_t obj_0809c = 0;        /* 3408 */         /* MISRA Violation - Only referenced in function rule_0809a   */

static int16_t rule_0809a( void );

extern int16_t rule_0809( void )
{
   s0809a += s16a;

   s16a = rule_0809a();

   return s0809a;
}

static int16_t rule_0809a( void )
{
   s0809b = s16b;
   obj_0809c = s16a;

   return s0809b + obj_0809c;
}
