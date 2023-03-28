/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-13.4 (Advisory):
 * The result of an assignment operator should not be used
 * 
 * Implemented by messages:
 * 3226   The result of an assignment is being used in an
 *        arithmetic operation or another assigning operation.
 * 
 * 3326   The result of an assignment is being used in a logical
 *        operation.
 * 
 * <<<------------------------------------------------------------ */



#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1304( void )
{
    int16_t buf[10] = {0};

    buf[u16a] = buf[u16b = u16c];               /* 3226           */

    if ( bla = false )                          /* 3326      2992 */
    {
    }

    if ((0u == 0u) || (bla = true))             /* 3326 3415 2991 */
    {
    }

    if ( ( uia = get_u16() ) != 0u)             /* 3326           */
    {
    }

    buf[ u16a += u16b ] = buf [ u16c ];         /* 3226           */

    s16a = s16b = s16c = 0;                     /* 3226 3226      */

    return 1;
}
