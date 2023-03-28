/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.4 (Advisory):
 * A conversion should not be performed between a pointer to
 * object and an integer type
 * 
 * Implemented by messages:
 *  303   [I] Cast between a pointer to volatile object and an
 *        integral type.
 * 
 *  306   [I] Cast between a pointer to object and an integral
 *        type.
 * 
 *  360   An expression of pointer type is being converted to type
 *        _Bool on assignment.
 * 
 *  361   An expression of pointer type is being cast to type
 *        _Bool.
 * 
 *  362   An expression of essentially Boolean type is being cast
 *        to a pointer.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1056,2982,3210,3408,3447

#include "misra.h"
#include "m3cmex.h"


extern volatile uint16_t * pvui;
extern          uint16_t * puim;


extern int16_t rule_1104 ( void )
{
    volatile uint16_t vui = uib;
    pvui = (volatile uint16_t *) 0x1234U;                   /* 0303 */
    pvui = (volatile uint16_t *) vui;                       /* 0303 */

    puim = (uint16_t *) 0x1234U;                            /* 0306 */
    puim = (uint16_t *) uia;                                /* 0306 */
    puim = (uint16_t *) bla;                                /* 0362 */

    bla = puim;                                             /* 0360 */
    bla = (_Bool)puim;                                      /* 0361 */

    ula = (uint32_t)pvui;                                   /* 0303 */
    ula = (uint32_t)puim;                                   /* 0306 */

    return 0;
}
