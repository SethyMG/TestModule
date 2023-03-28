/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-2.6 (Advisory):
 * A function should not contain unused label declarations
 * 
 * Implemented by message:
 * 3202   The label '%s:' is not used in this function and could
 *        be removed.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0206( void )
{
    int16_t i;
    int16_t j;

L1: i = s16a;                           /* 3202 */

L2: j = s16b;                           /* 3202 */

    return i + j;
}
