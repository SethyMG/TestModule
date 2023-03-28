/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.03-narrow-floating.c,  Module:
 * M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.3 (Required):
 * The value of an expression shall not be assigned to an object
 * with a narrower essential type or of a different essential type
 * category.
 * 
 * Implemented by messages:
 *  570   This switch case label of 'essential type' '%1s', is not
 *        consistent with a controlling expression of essential
 *        type '%2s'.
 * 
 *  572   This switch case label of 'essential type' '%1s' is not
 *        consistent with a controlling expression which has an
 *        essential type of lower rank (%2s).
 * 
 * 1257   An integer constant suffixed with L or LL is being
 *        converted to a type of lower rank on assignment.
 * 
 * 1264   A suffixed floating constant is being converted to a
 *        different floating type on assignment.
 * 
 * 1265   An unsuffixed floating constant is being converted to a
 *        different floating type on assignment.
 * 
 * 1266   A floating constant is being converted to integral type
 *        on assignment.
 * 
 * 1291   An integer constant of 'essentially unsigned' type is
 *        being converted to signed type on assignment.
 * 
 * 1292   An integer constant of 'essentially signed' type is
 *        being converted to type char on assignment.
 * 
 * 1293   An integer constant of 'essentially unsigned' type is
 *        being converted to type char on assignment.
 * 
 * 1294   An integer constant of 'essentially signed' type is
 *        being converted to type _Bool on assignment.
 * 
 * 1295   An integer constant of 'essentially unsigned' type is
 *        being converted to type _Bool on assignment.
 * 
 * 1296   An integer constant of 'essentially signed' type is
 *        being converted to enum type on assignment.
 * 
 * 1297   An integer constant of 'essentially unsigned' type is
 *        being converted to enum type on assignment.
 * 
 * 1298   An integer constant of 'essentially signed' type is
 *        being converted to floating type on assignment.
 * 
 * 1299   An integer constant of 'essentially unsigned' type is
 *        being converted to floating type on assignment.
 * 
 * 2850   Constant: Implicit conversion to a signed integer type
 *        of insufficient size.
 * 
 * 2851   Definite: Implicit conversion to a signed integer type
 *        of insufficient size.
 * 
 * 2852   Apparent: Implicit conversion to a signed integer type
 *        of insufficient size.
 * 
 * 2900   Constant: Positive integer value truncated by implicit
 *        conversion to a smaller unsigned type.
 * 
 * 2901   Definite: Positive integer value truncated by implicit
 *        conversion to a smaller unsigned type.
 * 
 * 2902   Apparent: Positive integer value truncated by implicit
 *        conversion to a smaller unsigned type.
 * 
 * 4401   An expression of 'essentially Boolean' type (%1s) is
 *        being converted to character type, '%2s' on assignment.
 * 
 * 4402   An expression of 'essentially Boolean' type (%1s) is
 *        being converted to enum type, '%2s' on assignment.
 * 
 * 4403   An expression of 'essentially Boolean' type (%1s) is
 *        being converted to signed type, '%2s' on assignment.
 * 
 * 4404   An expression of 'essentially Boolean' type (%1s) is
 *        being converted to unsigned type, '%2s' on assignment.
 * 
 * 4405   An expression of 'essentially Boolean' type (%1s) is
 *        being converted to floating type, '%2s' on assignment.
 * 
 * 4410   An expression of 'essentially character' type (%1s) is
 *        being converted to Boolean type, '%2s' on assignment.
 * 
 * 4412   An expression of 'essentially character' type (%1s) is
 *        being converted to enum type, '%2s' on assignment.
 * 
 * 4413   An expression of 'essentially character' type (%1s) is
 *        being converted to signed type, '%2s' on assignment.
 * 
 * 4414   An expression of 'essentially character' type (%1s) is
 *        being converted to unsigned type, '%2s' on assignment.
 * 
 * 4415   An expression of 'essentially character' type (%1s) is
 *        being converted to floating type, '%2s' on assignment.
 * 
 * 4420   An expression of 'essentially enum' type (%1s) is being
 *        converted to Boolean type, '%2s' on assignment.
 * 
 * 4421   An expression of 'essentially enum' type (%1s) is being
 *        converted to character type, '%2s' on assignment.
 * 
 * 4422   An expression of 'essentially enum' type (%1s) is being
 *        converted to a different enum type, '%2s' on assignment.
 * 
 * 4423   An expression of 'essentially enum' type (%1s) is being
 *        converted to signed type, '%2s' on assignment.
 * 
 * 4424   An expression of 'essentially enum' type (%1s) is being
 *        converted to unsigned type, '%2s' on assignment.
 * 
 * 4425   An expression of 'essentially enum' type (%1s) is being
 *        converted to floating type, '%2s' on assignment.
 * 
 * 4430   An expression of 'essentially signed' type (%1s) is
 *        being converted to Boolean type, '%2s' on assignment.
 * 
 * 4431   An expression of 'essentially signed' type (%1s) is
 *        being converted to character type, '%2s' on assignment.
 * 
 * 4432   An expression of 'essentially signed' type (%1s) is
 *        being converted to enum type, '%2s' on assignment.
 * 
 * 4434   A non-constant expression of 'essentially signed' type
 *        (%1s) is being converted to unsigned type, '%2s' on
 *        assignment.
 * 
 * 4435   A non-constant expression of 'essentially signed' type
 *        (%1s) is being converted to floating type, '%2s' on
 *        assignment.
 * 
 * 4436   A constant expression of 'essentially signed' type (%1s)
 *        is being converted to unsigned type, '%2s' on
 *        assignment.
 * 
 * 4437   A constant expression of 'essentially signed' type (%1s)
 *        is being converted to floating type, '%2s' on
 *        assignment.
 * 
 * 4440   An expression of 'essentially unsigned' type (%1s) is
 *        being converted to Boolean type, '%2s' on assignment.
 * 
 * 4441   An expression of 'essentially unsigned' type (%1s) is
 *        being converted to character type, '%2s' on assignment.
 * 
 * 4442   An expression of 'essentially unsigned' type (%1s) is
 *        being converted to enum type, '%2s' on assignment.
 * 
 * 4443   A non-constant expression of 'essentially unsigned' type
 *        (%1s) is being converted to a wider signed type, '%2s'
 *        on assignment.
 * 
 * 4445   An expression of 'essentially unsigned' type (%1s) is
 *        being converted to floating type, '%2s' on assignment.
 * 
 * 4446   A non-constant expression of 'essentially unsigned' type
 *        (%1s) is being converted to signed type, '%2s' on
 *        assignment.
 * 
 * 4447   A constant expression of 'essentially unsigned' type
 *        (%1s) is being converted to signed type, '%2s' on
 *        assignment.
 * 
 * 4450   An expression of 'essentially floating' type (%1s) is
 *        being converted to Boolean type, '%2s' on assignment.
 * 
 * 4451   An expression of 'essentially floating' type (%1s) is
 *        being converted to character type, '%2s' on assignment.
 * 
 * 4452   An expression of 'essentially floating' type (%1s) is
 *        being converted to enum type, '%2s' on assignment.
 * 
 * 4453   An expression of 'essentially floating' type (%1s) is
 *        being converted to signed type, '%2s' on assignment.
 * 
 * 4454   An expression of 'essentially floating' type (%1s) is
 *        being converted to unsigned type, '%2s' on assignment.
 * 
 * 4460   A non-constant expression of 'essentially signed' type
 *        (%1s) is being converted to narrower signed type, '%2s'
 *        on assignment.
 * 
 * 4461   A non-constant expression of 'essentially unsigned' type
 *        (%1s) is being converted to narrower unsigned type,
 *        '%2s' on assignment.
 * 
 * 4462   A non-constant expression of 'essentially floating' type
 *        (%1s) is being converted to narrower floating type,
 *        '%2s' on assignment.
 * 
 * 4463   A constant expression of 'essentially signed' type (%1s)
 *        is being converted to narrower signed type, '%2s' on
 *        assignment.
 * 
 * 4464   A constant expression of 'essentially unsigned' type
 *        (%1s) is being converted to narrower unsigned type,
 *        '%2s' on assignment.
 * 
 * 4465   A constant expression of 'essentially floating' type
 *        (%1s) is being converted to narrower floating type,
 *        '%2s' on assignment.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 635,1031,1056,1257,1317,2889,3408,3447,4492

#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

#define EXPA (23.45L + 34.56L)
#define EXPB (23.45 + 34.56)
#define EXPC (23.45F + 34.56F)
#define EXPD (f128a+f128b)
#define EXPE (f64a+f64b)
#define EXPF (f32a+f32b)

static float32_t      fft32(uint8_t m);
static float64_t      fft64(uint8_t m);
static float128_t     fft128(uint8_t m);

extern int16_t rule_1003_narrow_floating( void )
{
    f32a  = fft32(u8a);
    f64a  = fft64(u8a);
    f128a = fft128(u8a);

    return 0;
}


static float32_t fft32(uint8_t m)
{
    if (m == 0u)
    {
        f32a = EXPA;                                /* 4465 */
        ft32f(EXPA);                                /* 4465 */
        return(EXPA);                               /* 4465 */
    }
    else if (m == 1u)
    {
        f32a = EXPB;                                /* 4465 */
        ft32f(EXPB);                                /* 4465 */
        return(EXPB);                               /* 4465 */
    }
    else if (m == 2u)
    {
        f32a = EXPC;                                /*      */
        ft32f(EXPC);                                /*      */
        return(EXPC);                               /*      */
    }
    else if (m == 3u)
    {
        f32a = EXPD;                                /* 4462 */
        ft32f(EXPD);                                /* 4462 */
        return(EXPD);                               /* 4462 */
    }
    else if (m == 4u)
    {
        f32a = EXPE;                                /* 4462 */
        ft32f(EXPE);                                /* 4462 */
        return(EXPE);                               /* 4462 */
    }
    else
    {
        f32a = EXPF;                                /*      */
        ft32f(EXPF);                                /*      */
        return(EXPF);                               /*      */
    }
}

static float64_t fft64(uint8_t m)
{
    if (m == 0u)
    {
        f64a = EXPA;                                /* 4465 */
        ft64f(EXPA);                                /* 4465 */
        return(EXPA);                               /* 4465 */
    }
    else if (m == 1u)
    {
        f64a = EXPB;                                /*      */
        ft64f(EXPB);                                /*      */
        return(EXPB);                               /*      */
    }
    else if (m == 2u)
    {
        f64a = EXPC;                                /*      */
        ft64f(EXPC);                                /*      */
        return(EXPC);                               /*      */
    }
    else if (m == 3u)
    {
        f64a = EXPD;                                /* 4462 */
        ft64f(EXPD);                                /* 4462 */
        return(EXPD);                               /* 4462 */
    }
    else if (m == 4u)
    {
        f64a = EXPE;                                /*      */
        ft64f(EXPE);                                /*      */
        return(EXPE);                               /*      */
    }
    else
    {
        f64a = EXPF;                                /*      */
        ft64f(EXPF);                                /*      */
        return(EXPF);                               /*      */
    }
}

static float128_t fft128(uint8_t m)
{
    if (m == 0u)
    {
        f128a = EXPA;                               /*      */
        ft128f(EXPA);                               /*      */
        return(EXPA);                               /*      */
    }
    else if (m == 1u)
    {
        f128a = EXPB;                               /*      */
        ft128f(EXPB);                               /*      */
        return(EXPB);                               /*      */
    }
    else if (m == 2u)
    {
        f128a = EXPC;                               /*      */
        ft128f(EXPC);                               /*      */
        return(EXPC);                               /*      */
    }
    else if (m == 3u)
    {
        f128a = EXPD;                               /*      */
        ft128f(EXPD);                               /*      */
        return(EXPD);                               /*      */
    }
    else if (m == 4u)
    {
        f128a = EXPE;                               /*      */
        ft128f(EXPE);                               /*      */
        return(EXPE);                               /*      */
    }
    else
    {
        f128a = EXPF;                               /*      */
        ft128f(EXPF);                               /*      */
        return(EXPF);                               /*      */
    }
}
