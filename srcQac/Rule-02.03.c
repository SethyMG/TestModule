/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-2.3 (Advisory):
 * A project should not contain unused type declarations
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0203( void )
{
    typedef int INT;                    /* Not compliant */
    char cx;

    return 1;
}
