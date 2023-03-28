/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.01-character.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.1 (Required):
 * Operands shall not be of an inappropriate essential type.
 * 
 * Implemented by messages:
 * 3101   Unary '-' applied to an operand of type unsigned int or
 *        unsigned long gives an unsigned result.
 * 
 * 3102   Unary '-' applied to an operand whose underlying type is
 *        unsigned.
 * 
 * 4500   An expression of 'essentially Boolean' type (%1s) is
 *        being used as an array subscript.
 * 
 * 4501   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the %2s operand of this arithmetic
 *        operator (%3s).
 * 
 * 4502   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the %2s operand of this bitwise operator
 *        (%3s).
 * 
 * 4503   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the left-hand operand of this shift
 *        operator (%2s).
 * 
 * 4504   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the right-hand operand of this shift
 *        operator (%2s).
 * 
 * 4505   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the %2s operand of this relational
 *        operator (%3s).
 * 
 * 4507   An expression of 'essentially Boolean' type (%1s) is
 *        being used as the operand of this increment/decrement
 *        operator (%2s).
 * 
 * 4510   An expression of 'essentially character' type (%1s) is
 *        being used as an array subscript.
 * 
 * 4511   An expression of 'essentially character' type (%1s) is
 *        being used as the %2s operand of this arithmetic
 *        operator (%3s).
 * 
 * 4512   An expression of 'essentially character' type (%1s) is
 *        being used as the %2s operand of this bitwise operator
 *        (%3s).
 * 
 * 4513   An expression of 'essentially character' type (%1s) is
 *        being used as the left-hand operand of this shift
 *        operator (%2s).
 * 
 * 4514   An expression of 'essentially character' type (%1s) is
 *        being used as the right-hand operand of this shift
 *        operator (%2s).
 * 
 * 4518   An expression of 'essentially character' type (%1s) is
 *        being used as the %2s operand of this logical operator
 *        (%3s).
 * 
 * 4519   An expression of 'essentially character' type (%1s) is
 *        being used as the first operand of this conditional
 *        operator (%2s).
 * 
 * 4521   An expression of 'essentially enum' type (%1s) is being
 *        used as the %2s operand of this arithmetic operator
 *        (%3s).
 * 
 * 4522   An expression of 'essentially enum' type (%1s) is being
 *        used as the %2s operand of this bitwise operator (%3s).
 * 
 * 4523   An expression of 'essentially enum' type (%1s) is being
 *        used as the left-hand operand of this shift operator
 *        (%2s).
 * 
 * 4524   An expression of 'essentially enum' type (%1s) is being
 *        used as the right-hand operand of this shift operator
 *        (%2s).
 * 
 * 4527   An expression of 'essentially enum' type is being used
 *        as the operand of this increment/decrement operator.
 * 
 * 4528   An expression of 'essentially enum' type (%1s) is being
 *        used as the %2s operand of this logical operator (%3s).
 * 
 * 4529   An expression of 'essentially enum' type (%1s) is being
 *        used as the first operand of this conditional operator
 *        (%2s).
 * 
 * 4532   An expression of 'essentially signed' type (%1s) is
 *        being used as the %2s operand of this bitwise operator
 *        (%3s).
 * 
 * 4533   An expression of 'essentially signed' type (%1s) is
 *        being used as the left-hand operand of this shift
 *        operator (%2s).
 * 
 * 4534   An expression of 'essentially signed' type (%1s) is
 *        being used as the right-hand operand of this shift
 *        operator (%2s).
 * 
 * 4538   An expression of 'essentially signed' type (%1s) is
 *        being used as the %2s operand of this logical operator
 *        (%3s).
 * 
 * 4539   An expression of 'essentially signed' type (%1s) is
 *        being used as the first operand of this conditional
 *        operator (%2s).
 * 
 * 4542   A non-negative constant expression of 'essentially
 *        signed' type (%1s) is being used as the %2s operand of
 *        this bitwise operator (%3s).
 * 
 * 4543   A non-negative constant expression of 'essentially
 *        signed' type (%1s) is being used as the left-hand
 *        operand of this shift operator (%2s).
 * 
 * 4544   A non-negative constant expression of 'essentially
 *        signed' type (%1s) is being used as the right-hand
 *        operand of this shift operator (%2s).
 * 
 * 4548   A non-negative constant expression of 'essentially
 *        signed' type (%1s) is being used as the %2s operand of
 *        this logical operator (%3s).
 * 
 * 4549   A non-negative constant expression of 'essentially
 *        signed' type (%1s) is being used as the first operand of
 *        this conditional operator (%2s).
 * 
 * 4558   An expression of 'essentially unsigned' type (%1s) is
 *        being used as the %2s operand of this logical operator
 *        (%3s).
 * 
 * 4559   An expression of 'essentially unsigned' type (%1s) is
 *        being used as the first operand of this conditional
 *        operator (%2s).
 * 
 * 4568   An expression of 'essentially floating' type (%1s) is
 *        being used as the %2s operand of this logical operator
 *        (%3s).
 * 
 * 4569   An expression of 'essentially floating' type (%1s) is
 *        being used as the first operand of this conditional
 *        operator (%2s).
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1812,2790,2791,2830,2921,2984,2985,2995,2996,3112,3344

/************************************************************************************
 * MISRA-C3 Rule 10.1 Requirement
 * ==============================
 *
 *                                    Bool    char    enum    sgnd    unsd    fltg
 *                                    -----   -----   -----   -----   -----   -----
 *      [ ]                             X       X       -       -       -       X
 *      + unary                         X       X       X       -       -       -
 *      - unary                         X       X       X       -       X       -
 *      + -             either          X       -       X       -       -       -
 *      * /             either          X       X       X       -       -       -
 *      %               either          X       X       X       -       -       X
 *      < <= >= >       either          X       -       -       -       -       -
 *      == !=           either          -       -       -       -       -       -
 *      ! && ||         any             -       X       X       X       X       X
 *      << >>           left            X       X       X       X       -       X
 *      << >>           right           X       X       X       X       -       X
 *      ~ & | ^         any             X       X       X       X       -       X
 *      ? :             1               -       X       X       X       X       X
 *      ? :             2 and 3         -       -       -       -       -       -
 *
 ************************************************************************************/

#include "misra.h"
#include "m3cmex.h"

#ifndef CEXP
#define CEXP pca
#endif

extern int16_t rule_1001_character( void )
{
    uint16_t buf[300] = {0};

    buf[CEXP];                      /* 4510 */

    CEXP + u16a;                    /*      */
    CEXP - u16a;                    /*      */
    CEXP * u16a;                    /* 4511 */
    CEXP / u16a;                    /* 4511 */
    CEXP % u16a;                    /* 4511 */

    u16a  + CEXP;                   /*      */
    u16a  - CEXP;                   /*      */
    u16a  * CEXP;                   /* 4511 */
    u16a  / CEXP;                   /* 4511 */
    u16a  % CEXP;                   /* 4511 */

    ~CEXP;                          /* 4512 */
    CEXP & u16a;                    /* 4512 */
    CEXP | u16a;                    /* 4512 */
    CEXP ^ u16a;                    /* 4512 */

    u16a & CEXP;                    /* 4512 */
    u16a | CEXP;                    /* 4512 */
    u16a ^ CEXP;                    /* 4512 */

    CEXP << 0u;                     /* 4513 */
    CEXP << 1u;                     /* 4513 */
    CEXP << 3u;                     /* 4513 */
    CEXP >> 0u;                     /* 4513 */
    CEXP >> 1u;                     /* 4513 */
    CEXP >> 3u;                     /* 4513 */

    u16a << CEXP;                   /* 4514 */
    u16a >> CEXP;                   /* 4514 */

    CEXP <  'z';                    /*      */
    CEXP <= 'z';                    /*      */
    CEXP >= 'z';                    /*      */
    CEXP >  'z';                    /*      */

    'z' <  CEXP;                    /*      */
    'z' <= CEXP;                    /*      */
    'z' >= CEXP;                    /*      */
    'z' >  CEXP;                    /*      */

    CEXP == 'z';                    /*      */
    CEXP != 'z';                    /*      */
    'z'  == CEXP;                   /*      */
    'z'  != CEXP;                   /*      */

    ++pca;                          /*      */
    --pca;                          /*      */
    pca++;                          /*      */
    pca--;                          /*      */

    !CEXP;                          /* 4518 */
    CEXP && bla;                    /* 4518 */
    CEXP || bla;                    /* 4518 */
    bla  && CEXP;                   /* 4518 */
    bla  || CEXP;                   /* 4518 */

    CEXP ? u16a : u16b;             /* 4519 */
    (u16a > u16b) ? CEXP : 'p';     /*      */

    return 1;
}
