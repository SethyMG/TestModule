/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.6 (Required):
 * A cast shall not be performed between pointer to void and an
 * arithmetic type
 * 
 * Implemented by message:
 *  306   [I] Cast between a pointer to object and an integral
 *        type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1106( void )
{
    void * pv;

    pv = (void *)0x1234u;                       /*  0306 */      /* Not compliant */
    pv = (void *)1024.0f;                       /*  0301 */      /* Not compliant */
    pv = (void *)0;
    u32a = (uint32_t)pv;                        /*  0306 */      /* Not compliant */

    return 0;
}

