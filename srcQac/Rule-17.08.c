/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-17.8 (Advisory):
 * A function parameter should not be modified
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1708a(int16_t p);

extern int16_t rule_1708( void )
{
    s16a = rule_1708a(5);

    return 1;
}

static int16_t rule_1708a(int16_t p)
{
    ++p;                                        /*      */      /* Not compliant */

    return(p);
}
