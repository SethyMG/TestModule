/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.3 (Required):
 * The relational operators >, >=, < and <= shall not be applied
 * to objects of pointer type except where they point into the same
 * object
 * 
 * Implemented by messages:
 * 2771   Definite: These pointers address different objects.
 * 
 * 2772   Apparent: These pointers address different objects.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1803( void )
{
    int16_t   buf1[10];
    int16_t   buf2[10];
    int16_t * p1;
    int16_t * p2;
    int16_t * p3;

    p1 = buf1;
    p2 = buf2;

    if (p2 > p1)                                                /* 2771      */
    {
    }

    p3 = buf1;
    if (s16a > 0)
    {
        p3 = buf2;
    }

    if (p3 > p1)                                                /* 2772      */
    {
    }

    return 1;
}

