/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.7 (Advisory):
 * Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit
 * 
 * Implemented by messages:
 * 1504   The object '%1s' is only referenced in the translation
 *        unit where it is defined.
 * 
 * 1505   The function '%1s' is only referenced in the translation
 *        unit where it is defined.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"
extern int16_t rule_0807a(void);                        /* 3447 */
extern int16_t x0807;                                   /* 3447 */

int16_t x0807 = 1;

extern int16_t rule_0807( void )
{
    x0807 = rule_0807a();

    return 1;
}

extern int16_t rule_0807a(void)
{
    return x0807 + s16a;
}

