/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.03-from-unsigned.c,  Module:
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



#pragma PRQA_MESSAGES_OFF 635,1031,1056,1257,1317,2889,3408,3447

#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

#define EXP1 23UL
#define EXP2 (23u+46u)
#define EXP3 (u8a+u8b)
#define EXP4 u32a

static BL           fbl(uint8_t m);
static PC           fpc(uint8_t m);
static N1           fn1(uint8_t m);
static int16_t      fs16(uint8_t m);
static float32_t    fft32(uint8_t m);


extern int16_t rule_1003_from_unsigned( void )
{
    bla = fbl(u8a);
    pca = fpc(u8a);
    n1a = fn1(u8a);
    sia = fs16(u8a);
    fta = fft32(u8a);

    return 0;
}


static BL fbl(uint8_t m)
{
    if (m == 0u)
    {
        BL bll = EXP1;                              /* 1295 */
        bla = EXP1;                                 /* 1295 */
        blf(EXP1);                                  /* 1295 */
        return(EXP1);                               /* 1295 */
    }
    else if (m == 1u)
    {
        BL bll = EXP2;                              /* 4440 */
        bla = EXP2;                                 /* 4440 */
        blf(EXP2);                                  /* 4440 */
        return(EXP2);                               /* 4440 */
    }
    else if (m == 2u)
    {
        BL bll = EXP3;                              /* 4440 */
        bla = EXP3;                                 /* 4440 */
        blf(EXP3);                                  /* 4440 */
        return(EXP3);                               /* 4440 */
    }
    else
    {
        BL bll = EXP4;                              /* 4440 */
        bla = EXP4;                                 /* 4440 */
        blf(EXP4);                                  /* 4440 */
        return(EXP4);                               /* 4440 */
    }
}

static PC fpc(uint8_t m)
{
    if (m == 0u)
    {
        PC pcl = EXP1;                              /* 1293 */
        pca = EXP1;                                 /* 1293 */
        pcf(EXP1);                                  /* 1293 */
        return(EXP1);                               /* 1293 */
    }
    else if (m == 1u)
    {
        PC pcl = EXP2;                              /* 4441 */
        pca = EXP2;                                 /* 4441 */
        pcf(EXP2);                                  /* 4441 */
        return(EXP2);                               /* 4441 */
    }
    else if (m == 2u)
    {
        PC pcl = EXP3;                              /* 4441 */
        pca = EXP3;                                 /* 4441 */
        pcf(EXP3);                                  /* 4441 */
        return(EXP3);                               /* 4441 */
    }
    else
    {
        PC pcl = EXP4;                              /* 4441 */
        pca = EXP4;                                 /* 4441 */
        pcf(EXP4);                                  /* 4441 */
        return(EXP4);                               /* 4441 */
    }
}

static N1 fn1(uint8_t m)
{
    if (m == 0u)
    {
        n1a = EXP1;                                 /* 1297 */
        n1f(EXP1);                                  /* 1297 */
        return(EXP1);                               /* 1297 */
    }
    else if (m == 1u)
    {
        n1a = EXP2;                                 /* 4442 */
        n1f(EXP2);                                  /* 4442 */
        return(EXP2);                               /* 4442 */
    }
    else if (m == 2u)
    {
        n1a = EXP3;                                 /* 4442 */
        n1f(EXP3);                                  /* 4442 */
        return(EXP3);                               /* 4442 */
    }
    else
    {
        n1a = EXP4;                                 /* 4442 */
        n1f(EXP4);                                  /* 4442 */
        return(EXP4);                               /* 4442 */
    }
}

static int16_t fs16(uint8_t m)
{
    if (m == 0u)
    {
        s16a = EXP1;                                /* 1291 */
        s16f(EXP1);                                 /* 1291 */
        return(EXP1);                               /* 1291 */
    }
    else if (m == 1u)
    {
        s16a = EXP2;                                /* 4447 */
        s16f(EXP2);                                 /* 4447 */
        return(EXP2);                               /* 4447 */
    }
    else if (m == 2u)
    {
        s16a = EXP3;                                /* 4443 */
        s16f(EXP3);                                 /* 4443 */
        return(EXP3);                               /* 4443 */
    }
    else
    {
        s16a = EXP4;                                /* 4446 */
        s16f(EXP4);                                 /* 4446 */
        return(EXP4);                               /* 4446 */
    }
}

static float32_t fft32(uint8_t m)
{
    if (m == 0u)
    {
        f32a = EXP1;                                /* 1299 */
        ft32f(EXP1);                                /* 1299 */
        return(EXP1);                               /* 1299 */
    }
    else if (m == 1u)
    {
        f32a = EXP2;                                /* 4445 */
        ft32f(EXP2);                                /* 4445 */
        return(EXP2);                               /* 4445 */
    }
    else if (m == 2u)
    {
        f32a = EXP3;                                /* 4445 */
        ft32f(EXP3);                                /* 4445 */
        return(EXP3);                               /* 4445 */
    }
    else
    {
        f32a = EXP4;                                /* 4445 */
        ft32f(EXP4);                                /* 4445 */
        return(EXP4);                               /* 4445 */
    }
}
