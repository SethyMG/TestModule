/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.03-from-signed.c,  Module:
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

static BL           fbl(uint8_t m);
static PC           fpc(uint8_t m);
static N1           fn1(uint8_t m);
static uint16_t     fu16(uint8_t m);
static float32_t    fft32(uint8_t m);

extern int16_t rule_1003_from_signed( void )
{
    bla = fbl(u8a);
    pca = fpc(u8a);
    n1a = fn1(u8a);
    uia = fu16(u8a);
    fta = fft32(u8a);

    return 0;
}
#define EXPA 23L
#define EXPB (23 + 46)
#define EXPC (-1)
#define EXPD (s8a + s8b)

static BL fbl(uint8_t m)
{
    if (m == 0u)
    {
        BL bll = EXPA;                              /* 1294      */
        bla = EXPA;                                 /* 1294      */
        blf(EXPA);                                  /* 1294      */
        return(EXPA);                               /* 1294      */
    }
    else if (m == 1u)
    {
        BL bll = EXPB;                              /* 4430      */
        bla = EXPB;                                 /* 4430      */
        blf(EXPB);                                  /* 4430      */
        return(EXPB);                               /* 4430      */
    }
    else if (m == 2u)
    {
        BL bll = EXPC;                              /* 4430      */
        bla = EXPC;                                 /* 4430      */
        blf(EXPC);                                  /* 4430      */
        return(EXPC);                               /* 4430      */
    }
    else
    {
        BL bll = EXPD;                              /* 4430      */
        bla = EXPD;                                 /* 4430      */
        blf(EXPD);                                  /* 4430      */
        return(EXPD);                               /* 4430      */
    }
}

static PC fpc(uint8_t m)
{
    if (m == 0u)
    {
        PC pcl = EXPA;                              /* 1292      */
        pca = EXPA;                                 /* 1292      */
        pcf(EXPA);                                  /* 1292      */
        return(EXPA);                               /* 1292      */
    }
    else if (m == 1u)
    {
        PC pcl = EXPB;                              /* 4431      */
        pca = EXPB;                                 /* 4431      */
        pcf(EXPB);                                  /* 4431      */
        return(EXPB);                               /* 4431      */
    }
    else if (m == 2u)
    {
        PC pcl = EXPC;                              /* 4431      */
        pca = EXPC;                                 /* 4431      */
        pcf(EXPC);                                  /* 4431      */
        return(EXPC);                               /* 4431      */
    }
    else
    {
        PC pcl = EXPD;                              /* 4431      */
        pca = EXPD;                                 /* 4431      */
        pcf(EXPD);                                  /* 4431      */
        return(EXPD);                               /* 4431      */
    }
}

static N1 fn1(uint8_t m)
{
    if (m == 0u)
    {
        n1a = EXPA;                                 /* 1296      */
        n1f(EXPA);                                  /* 1296      */
        return(EXPA);                               /* 1296      */
    }
    else if (m == 1u)
    {
        n1a = EXPB;                                 /* 4432      */
        n1f(EXPB);                                  /* 4432      */
        return(EXPB);                               /* 4432      */
    }
    else if (m == 2u)
    {
        n1a = EXPC;                                 /* 4432      */
        n1f(EXPC);                                  /* 4432      */
        return(EXPC);                               /* 4432      */
    }
    else
    {
        n1a = EXPD;                                 /* 4432      */
        n1f(EXPD);                                  /* 4432      */
        return(EXPD);                               /* 4432      */
    }
}

static uint16_t fu16(uint8_t m)
{
    if (m == 0u)
    {
        u16a = EXPA;                                /*           */
        u16f(EXPA);                                 /*           */
        return(EXPA);                               /*           */
    }
    else if (m == 1u)
    {
        u16a = EXPB;                                /* 4436      */
        u16f(EXPB);                                 /* 4436      */
        return(EXPB);                               /* 4436      */
    }
    else if (m == 2u)
    {
        u16a = EXPC;                                /* 4436 2890 */
        u16f(EXPC);                                 /* 4436 2890 */
        return(EXPC);                               /* 4436 2890 */
    }
    else
    {
        u16a = EXPD;                                /* 4434      */
        u16f(EXPD);                                 /* 4434      */
        return(EXPD);                               /* 4434      */
    }
}

static float32_t fft32(uint8_t m)
{
    if (m == 0u)
    {
        f32a = EXPA;                                /* 1298      */
        ft32f(EXPA);                                /* 1298      */
        return(EXPA);                               /* 1298      */
    }
    else if (m == 1u)
    {
        f32a = EXPB;                                /* 4437      */
        ft32f(EXPB);                                /* 4437      */
        return(EXPB);                               /* 4437      */
    }
    else if (m == 2u)
    {
        f32a = EXPC;                                /* 4437      */
        ft32f(EXPC);                                /* 4437      */
        return(EXPC);                               /* 4437      */
    }
    else
    {
        f32a = EXPD;                                /* 4435      */
        ft32f(EXPD);                                /* 4435      */
        return(EXPD);                               /* 4435      */
    }
}
