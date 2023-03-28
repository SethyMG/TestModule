/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-2.2 (Required):
 * There shall be no dead code
 * 
 * Implemented by messages:
 * 2980   The value of this function parameter is never used
 *        before being modified.
 * 
 * 2981   This initialization is redundant. The value of this
 *        object is never used before being modified.
 * 
 * 2982   This assignment is redundant. The value of this object
 *        is never used before being modified.
 * 
 * 2983   This assignment is redundant. The value of this object
 *        is never subsequently used.
 * 
 * 2984   This operation is redundant. The value of the result is
 *        always '%1s'.
 * 
 * 2985   This operation is redundant. The value of the result is
 *        always that of the left-hand operand.
 * 
 * 2986   This operation is redundant. The value of the result is
 *        always that of the right-hand operand.
 * 
 * 2995   The result of this logical operation is always 'true'.
 * 
 * 2996   The result of this logical operation is always 'false'.
 * 
 * 3110   The left-hand operand of this ',' has no side effects.
 * 
 * 3112   This statement has no side-effect - it can be removed.
 * 
 * 3425   One branch of this conditional operation is a redundant
 *        expression.
 * 
 * 3426   Right hand side of comma expression has no side effect
 *        and its value is not used.
 * 
 * 3427   Right hand side of logical operator has no side effect
 *        and its value is not used.
 * 
 * <<<------------------------------------------------------------ */



#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

static int16_t rule_0202a(int16_t p, int16_t q);

extern int16_t rule_0202( void )
{
    s16a = rule_0202a(3, 7);

    return 1;
}

static int16_t rule_0202a(int16_t p, int16_t q)                 /* 2980      */
{
    int16_t x = 0;                                              /* 2981      */
    int16_t y;

    p = 5;
    x = 5;
    y = q;                                                      /* 2983      */

    if (u16a > u16b)
    {
        u16c = u16b % u16a;                                     /* 2985      */
    }

    u16b = u16b & 0x01u;

    if (u16a == 1u)
    {
        u16c = u16a & u16b;                                     /* 2986      */
    }

    if (s16a > 20)
    {
        if (s16a > 10)                                          /* 2995 2991 */
        {
        }

        if (s16a < 5)                                           /* 2996 2992 */
        {
        }
    }

    s16a * s16b, s16c = 1;                                      /* 3110 3417 */
    s16b = 3, s16a * s16b;                                      /* 3426 3417 */

    s16a * s16b;                                                /* 3112      */

    (u32a > u32b) ? s16a = s16b : s16b;                         /* 3425 3226 */

    get_bool() && blb;                                          /* 3427      */

    return p + x;                                               /* 2984      */
}
