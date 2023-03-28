/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.7 (Required):
 * A cast shall not be performed between pointer to object and a
 * non-integer arithmetic type
 * 
 * Implemented by message:
 *  301   [u] Cast between a pointer to object and a floating
 *        type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1056,3112

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1107( void )
{
    int16_t *pi = &sia;

    (_Bool)   pi;                       /* 0361           */
    (char)    pi;                       /*      0306 0309 */
    (N1)      pi;                       /*      0306      */
    (float32_t) pi;                     /* 0301           */

    (int16_t *)bla;                     /* 0362           */
    (int16_t *)pca;                     /*      0306      */
    (int16_t *)n1a;                     /*      0306      */
    (int16_t *)fta;                     /* 0301           */

    return 0;
}
