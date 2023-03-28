/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.8 (Required):
 * Variable-length array types shall not be used
 * 
 * Implemented by messages:
 *  945   [C99] WARNING. Operand of sizeof is an expression of
 *        variable length array type.
 * 
 * 1051   [C99] A variable length array has been declared.
 * 
 * 1052   [C99] A variable length array of unspecified size has
 *        been declared.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1808( void )
{
    uint16_t n = 5;
    typedef uint16_t Vector[ n ];               /* 1051      */
    int16_t buf[n];                             /* 1051      */
    uint16_t x;

    n = 7;
    Vector a1;                                  /*      0604 */
    uint16_t a2[ n ];                           /* 1051 0604 */
    x = sizeof(buf);                            /* 0945      */

    return 1;
}
