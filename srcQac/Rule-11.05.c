/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.5 (Advisory):
 * A conversion should not be performed from pointer to void into
 * pointer to object
 * 
 * Implemented by messages:
 *  316   [I] Cast from a pointer to void to a pointer to object
 *        type.
 * 
 *  317   [I] Implicit conversion from a pointer to void to a
 *        pointer to object type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983,3408,3447

#include <stdlib.h>
#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1105( void )
{
    void * pv = NULL;
    int16_t  * pi;

    pi = (int16_t *)pv;                         /* 0316 */
    pi =        pv;                             /* 0317 */
    pi = NULL;                                  /*      */
    pi = (void *)0;                             /*      */

    return 0;
}
