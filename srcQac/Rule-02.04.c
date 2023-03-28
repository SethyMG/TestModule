/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-2.4 (Advisory):
 * A project should not contain unused tag declarations
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

struct ST
{
    int16_t a;
    int16_t b;
};

extern int16_t rule_0204( void )
{

    return 1;
}
