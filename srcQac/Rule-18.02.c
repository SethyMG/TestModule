/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.2 (Required):
 * Subtraction between pointers shall only be applied to pointers
 * that address elements of the same array
 * 
 * Implemented by messages:
 * 2771   Definite: These pointers address different objects.
 * 
 * 2772   Apparent: These pointers address different objects.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1802( void )
{
    int16_t   buf1[10];
    int16_t   buf2[10];
    int16_t * p1;
    int16_t * p2;
    int16_t * p3;
    int32_t   dx;

    p1 = buf1;
    p2 = buf2;
    dx = p2 - p1;                                               /* 2771 0488 */

    p3 = buf1;
    if (s16a > 0)
    {
        p3 = buf2;
    }

    dx = p3 - p1;                                               /* 2772 0488 */

    return 1;
}

