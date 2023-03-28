/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.2 (Required):
 * Conversions shall not be performed between a pointer to an
 * incomplete type and any other type
 * 
 * Implemented by message:
 *  308   Non-portable cast involving pointer to an incomplete
 *        type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112,3408,3447

#include "misra.h"
#include "m3cmex.h"

extern struct S1102 *ps1102;
extern struct T1102 *pt1102;

extern int16_t rule_1102( void )
{
    int16_t *pi = &s16a;

/****************************************
CASTING FROM A POINTER TO INCOMPLETE TYPE
****************************************/
    (int16_t *)  ps1102;                       /* 0308      0310 */        /* Non-compliant */
    (struct t *) ps1102;                       /* 0308      0310 */        /* Non-compliant */


/****************************************
CASTING TO A POINTER TO INCOMPLETE TYPE
****************************************/
    (struct S1102 *)0x1234u;                   /*      0306      */        /* Non-compliant */
    (struct S1102 *)pi;                        /* 0308      0310 */        /* Non-compliant */
    (struct S1102 *)pt1102;                    /* 0308      0310 */        /* Non-compliant */

    return 0;
}
