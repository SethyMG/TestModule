/* >>>------------------------------------------------------------
 * 
 * File: Rule-03.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-3.2 (Required):
 * Line-splicing shall not be used in // comments.
 * 
 * Implemented by message:
 * 5134   C++ style comment uses line splicing.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1011

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_0302( void )
{
    int16_t x = 1;      /* 5134 */    // comment \
    if (bla)
    {
        x = x + s16a;                                          /* This is always executed */
    }
    ++x;

    return x;
}
