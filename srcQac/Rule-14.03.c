/* >>>------------------------------------------------------------
 * 
 * File: Rule-14.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-14.3 (Required):
 * Controlling expressions shall not be invariant
 * 
 * Implemented by messages:
 * 2990   The value of this loop controlling expression is always
 *        'true'.
 * 
 * 2991   The value of this 'if' controlling expression is always
 *        'true'.
 * 
 * 2992   The value of this 'if' controlling expression is always
 *        'false'.
 * 
 * 2993   The value of this 'do - while' loop controlling
 *        expression is always 'false'. The loop will only be
 *        executed once.
 * 
 * 2994   The value of this 'while' or 'for' loop controlling
 *        expression is always 'false'. The loop will not be
 *        entered.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1403( void )
{
    int16_t loop = 1;

    while (loop != 0)                                           /* 2990           */
    {
        if (s16a > 10)
        {
            break;
        }
    }                                                           /* 2467           */

    if ((s16a < 10) || (s16a > 0))                              /* 2991 2995 2996 */
    {
    }

    if ((s16a < 10) && (s16a > 20))                             /* 2992      2996 */
    {
    }

    do
    {
        ++u16a;
    } while (u16a < 0u);                                        /* 2993      2996 */

    return 1;
}
