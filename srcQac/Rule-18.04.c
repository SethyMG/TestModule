/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.4 (Advisory):
 * The +, -, += and -= operators should not be applied to an
 * expression of pointer type
 * 
 * Implemented by message:
 *  488   Performing pointer arithmetic.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1804( void )
{
    uint8_t ax[ 20 ];
    uint8_t * ptr;

    ptr = ax;

    ptr ++;                                                     /*      */      /* Compliant     */
    ptr = ptr + 1;                                              /*      */      /* Non-compliant */

    ptr = ptr + 5;                                              /* 0488 */      /* Non-compliant */
    *( ptr + 5 ) = 0U;                                          /* 0488 */      /* Non-compliant */
    ptr[ 5 ] = 0U;                                              /*      */      /* Compliant     */

    return 1;
}
