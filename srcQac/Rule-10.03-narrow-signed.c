/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.03-narrow-signed.c,  Module:
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



#pragma PRQA_MESSAGES_OFF 635,1031,1056,1317,2889,3408,3447

#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

#define EXP0 23L
#define EXP1 0LL
#define EXP2 1L + 23LL
#define EXP3 23LL
#define EXP4 sca
#define EXP5 sia
#define EXP6 sla
#define EXP7 sxa

static int8_t     fs8(uint8_t m);
static int16_t    fs16(uint8_t m);
static int32_t    fs32(uint8_t m);

extern int16_t rule_1003_narrow_signed( void )
{
    s8a  = fs8(u8a);
    s16a = fs16(u8a);
    s32a = fs32(u8a);

    return 0;
}


static int8_t fs8(uint8_t m)
{
    if (m == 0u)
    {
        s8a = EXP0;                                 /* 1257 */
        s8f(EXP0);                                  /* 1257 */
        return(EXP0);                               /* 1257 */
    }
    else if (m == 1u)
    {
        s8a = EXP1;                                 /* 1257 */
        s8f(EXP1);                                  /* 1257 */
        return(EXP1);                               /* 1257 */
    }
    else if (m == 2u)
    {
        s8a = EXP2;                                 /* 4463 */
        s8f(EXP2);                                  /* 4463 */
        return(EXP2);                               /* 4463 */
    }
    else if (m == 3u)
    {
        s8a = EXP3;                                 /* 1257 */
        s8f(EXP3);                                  /* 1257 */
        return(EXP3);                               /* 1257 */
    }
    else if (m == 4u)
    {
        s8a = EXP4;                                 /*      */
        s8f(EXP4);                                  /*      */
        return(EXP4);                               /*      */
    }
    else if (m == 5u)
    {
        s8a = EXP5;                                 /* 4460 */
        s8f(EXP5);                                  /* 4460 */
        return(EXP5);                               /* 4460 */
    }
    else if (m == 6u)
    {
        s8a = EXP6;                                 /* 4460 */
        s8f(EXP6);                                  /* 4460 */
        return(EXP6);                               /* 4460 */
    }
    else
    {
        s8a = EXP7;                                 /* 4460 */
        s8f(EXP7);                                  /* 4460 */
        return(EXP7);                               /* 4460 */
    }
}


static int16_t fs16(uint8_t m)
{
    if (m == 0u)
    {
        s16a = EXP0;                                /* 1257 */
        s16f(EXP0);                                 /* 1257 */
        return(EXP0);                               /* 1257 */
    }
    else if (m == 1u)
    {
        s16a = EXP1;                                /* 1257 */
        s16f(EXP1);                                 /* 1257 */
        return(EXP1);                               /* 1257 */
    }
    else if (m == 2u)
    {
        s16a = EXP2;                                /* 4463 */
        s16f(EXP2);                                 /* 4463 */
        return(EXP2);                               /* 4463 */
    }
    else if (m == 3u)
    {
        s16a = EXP3;                                /* 1257 */
        s16f(EXP3);                                 /* 1257 */
        return(EXP3);                               /* 1257 */
    }
    else if (m == 4u)
    {
        s16a = EXP4;                                /*      */
        s16f(EXP4);                                 /*      */
        return(EXP4);                               /*      */
    }
    else if (m == 5u)
    {
        s16a = EXP5;                                /*      */
        s16f(EXP5);                                 /*      */
        return(EXP5);                               /*      */
    }
    else if (m == 6u)
    {
        s16a = EXP6;                                /* 4460 */
        s16f(EXP6);                                 /* 4460 */
        return(EXP6);                               /* 4460 */
    }
    else
    {
        s16a = EXP7;                                /* 4460 */
        s16f(EXP7);                                 /* 4460 */
        return(EXP7);                               /* 4460 */
    }
}

static int32_t fs32(uint8_t m)
{
    if (m == 0u)
    {
        s32a = EXP0;                                /*      */
        s32f(EXP0);                                 /*      */
        return(EXP0);                               /*      */
    }
    else if (m == 1u)
    {
        s32a = EXP1;                                /* 1257 */
        s32f(EXP1);                                 /* 1257 */
        return(EXP1);                               /* 1257 */
    }
    else if (m == 2u)
    {
        s32a = EXP2;                                /* 4463 */
        s32f(EXP2);                                 /* 4463 */
        return(EXP2);                               /* 4463 */
    }
    else if (m == 3u)
    {
        s32a = EXP3;                                /* 1257 */
        s32f(EXP3);                                 /* 1257 */
        return(EXP3);                               /* 1257 */
    }
    else if (m == 4u)
    {
        s32a = EXP4;                                /*      */
        s32f(EXP4);                                 /*      */
        return(EXP4);                               /*      */
    }
    else if (m == 5u)
    {
        s32a = EXP5;                                /*      */
        s32f(EXP5);                                 /*      */
        return(EXP5);                               /*      */
    }
    else if (m == 6u)
    {
        s32a = EXP6;                                /*      */
        s32f(EXP6);                                 /*      */
        return(EXP6);                               /*      */
    }
    else
    {
        s32a = EXP7;                                /* 4460 */
        s32f(EXP7);                                 /* 4460 */
        return(EXP7);                               /* 4460 */
    }
}
