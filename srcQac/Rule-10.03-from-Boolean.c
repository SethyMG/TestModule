/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.03-from-Boolean.c,  Module:
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



#pragma PRQA_MESSAGES_OFF 635,1031,1056,2889,3408,3447

#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

#ifndef BEXP
#define BEXP bla
#endif

static BL           fbl(void);
static PC           fpc(void);
static N1           fn1(void);
static int16_t      fs16(void);
static uint16_t     fu16(void);
static float32_t    fft32(void);


extern int16_t rule_1003_from_Boolean( void )
{
    bla = fbl();
    pca = fpc();
    n1a = fn1();
    sia = fs16();
    uia = fu16();
    fta = fft32();

    return 0;
}

/*****************************************/
static BL fbl(void)
{
    bla = BEXP;                                 /*      */
    blf(BEXP);                                  /*      */
    return (BEXP);                              /*      */
}

/*****************************************/
static PC fpc(void)
{
    pca = BEXP;                                 /* 4401 */
    pcf(BEXP);                                  /* 4401 */
    return (BEXP);                              /* 4401 */
}


/*****************************************/
static N1 fn1(void)
{
    n1a = BEXP;                                 /* 4402 */
    n1f(BEXP);                                  /* 4402 */
    return (BEXP);                              /* 4402 */
}

/*****************************************/
static int16_t fs16(void)
{
    s16a = BEXP;                                /* 4403 */
    s16f(BEXP);                                 /* 4403 */
    return (BEXP);                              /* 4403 */
}


/*****************************************/
static uint16_t fu16(void)
{
    u16a = BEXP;                                /* 4404 */
    u16f(BEXP);                                 /* 4404 */
    return (BEXP);                              /* 4404 */
}


/*****************************************/
static float32_t fft32(void)
{
    f32a = BEXP;                                /* 4405 */
    ft32f(BEXP);                                /* 4405 */
    return (BEXP);                              /* 4405 */
}
