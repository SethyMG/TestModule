/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.8 (Required):
 * A cast shall not remove any const or volatile qualification
 * from the type pointed to by a pointer
 * 
 * Implemented by messages:
 *  311   Dangerous pointer cast results in loss of const
 *        qualification.
 * 
 *  312   Dangerous pointer cast results in loss of volatile
 *        qualification.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,3210,3408,3447

#include "misra.h"
#include "m3cmex.h"

extern const    uint8_t * pcuc;
extern volatile uint8_t * pvuc;
extern          uint8_t * pucm;

extern int16_t rule_1108( void )
{
    pucm = (uint8_t *)pcuc;                /* 0311 */
    pucm = (uint8_t *)pvuc;                /* 0312 */

    return 0;
}
