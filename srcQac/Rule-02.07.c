/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-2.7 (Advisory):
 * There should be no unused parameters in functions
 * 
 * Implemented by message:
 * 3206   The parameter '%s' is not used in this function.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static void rule_0207a(int16_t a, int16_t b);

extern int16_t rule_0207( void )
{
    rule_0207a(1, 2);

    return 1;
}

static void rule_0207a(int16_t a, int16_t b)                    /* 3206 */
{
    s16a = a;
}
