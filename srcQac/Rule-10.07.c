/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.07.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.7 (Required):
 * If a composite expression is used as one operand of an operator
 * in which the usual arithmetic conversions are performed then the
 * other operand shall not have wider essential type
 * 
 * Implemented by messages:
 * 1890   A composite expression of 'essentially signed' type
 *        (%1s) is being implicitly converted to a wider signed
 *        type, '%2s'.
 * 
 * 1891   A composite expression of 'essentially unsigned' type
 *        (%1s) is being implicitly converted to a wider unsigned
 *        type, '%2s'.
 * 
 * 1892   A composite expression of 'essentially floating' type
 *        (%1s) is being implicitly converted to a wider floating
 *        type, '%2s'.
 * 
 * 1893   The 2nd and 3rd operands of this conditional operator
 *        are both 'essentially signed' ('%1s' and '%2s') but one
 *        is a composite expression of a narrower type than the
 *        other.
 * 
 * 1894   The 2nd and 3rd operands of this conditional operator
 *        are both 'essentially unsigned' ('%1s' and '%2s') but
 *        one is a composite expression of a narrower type than
 *        the other.
 * 
 * 1895   The 2nd and 3rd operands of this conditional operator
 *        are both 'essentially floating' ('%1s' and '%2s') but
 *        one is a composite expression of a narrower type than
 *        the other.
 * 
 * 4397   An expression which is the result of a ~ or << operation
 *        has not been cast to its essential type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1007( void )
{
    sia + (sca + scb);                               /* 1890      */
    uia + (uca + ucb);                               /* 1891      */
    uia + (~uca);                                    /*      4397 */
    uia + (uca << 2U);                               /* 1891 4397 */
    dba + (fta + ftb);                               /* 1892      */

    bla ? sia : (sca + scb);                         /* 1893      */
    bla ? uia : (uca + ucb);                         /* 1894      */
    bla ? uia : (~uca);                              /*      4397 */
    bla ? uia : (uca << 2U);                         /* 1894 4397 */
    bla ? dba : (fta + ftb);                         /* 1895      */

    return 0;
}
