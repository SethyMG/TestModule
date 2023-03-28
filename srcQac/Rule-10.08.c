/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.8 (Required):
 * The value of a composite expression shall not be cast to a
 * different essential type category or a wider essential type
 * 
 * Implemented by messages:
 * 4390   A composite expression of 'essentially signed' type
 *        (%1s) is being cast to a wider signed type, '%2s'.
 * 
 * 4391   A composite expression of 'essentially unsigned' type
 *        (%1s) is being cast to a wider unsigned type, '%2s'.
 * 
 * 4392   A composite expression of 'essentially floating' type
 *        (%1s) is being cast to a wider floating type, '%2s'.
 * 
 * 4393   A composite expression of 'essentially signed' type
 *        (%1s) is being cast to a different type category, '%2s'.
 * 
 * 4394   A composite expression of 'essentially unsigned' type
 *        (%1s) is being cast to a different type category, '%2s'.
 * 
 * 4395   A composite expression of 'essentially floating' type
 *        (%1s) is being cast to a different type category, '%2s'.
 * 
 * 4398   An expression which is the result of a ~ or << operation
 *        has been cast to a different essential type category.
 * 
 * 4399   An expression which is the result of a ~ or << operation
 *        has been cast to a wider type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1008( void )
{
    (UI)(sca + scb);                            /* 4393      */
    (DB)(uca + ucb);                            /* 4394      */
    (DB)(~uca);                                 /*      4398 */
    (DB)(uca << 2U);                            /* 4394 4398 */
    (SI)(fta + ftb);                            /* 4395      */

    (SI)(sca + scb);                            /* 4390      */
    (UI)(uca + ucb);                            /* 4391      */
    (UI)(~uca);                                 /*      4399 */
    (UI)(uca << 2U);                            /* 4391 4399 */
    (DB)(fta + ftb);                            /* 4392      */

    return 0;
}
