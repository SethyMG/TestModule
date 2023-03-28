/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.8 (Required):
 * The controlling expression of a #if or #elif preprocessing
 * directive shall evaluate to 0 or 1
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define FALSE 0
#define TRUE 1
#define A 10
#define B 20

#if FALSE                       /*      */      /* Compliant */
#endif

#if 10                          /*      */      /* Non-compliant */
#endif

#if !defined(X)                 /*      */      /* Compliant */
#endif

#if A > B                       /*      */      /* Compliant */
#endif

extern int16_t rule_2008( void )
{
    return 1;
}
