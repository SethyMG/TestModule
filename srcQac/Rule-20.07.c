/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.7 (Required):
 * Expressions resulting from the expansion of macro parameters
 * shall be enclosed in parentheses
 * 
 * Implemented by message:
 * 3410   Macro parameter not enclosed in ().
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define  MAXCONST     5                                    /*           */
#define  MAX1( A,B )  ((( A ) > ( B )) ? ( A ) : ( B ))    /*      3453 */
#define  MAX2( A,B )  ((( A > B ) ? A : B ))               /* 3410 3453 */

extern int16_t rule_2007( void )
{
    int16_t i;
    int16_t j;
    int16_t k = MAXCONST;

    i = MAX1( s16a, s16b );
    j = MAX2( s16a, s16b );

    return i + j + k;
}
