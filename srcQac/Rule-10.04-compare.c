/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.04-compare.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.4 (Required):
 * Both operands of an operator in which the usual arithmetic
 * conversions are performed shall have the same essential type
 * category
 * 
 * Implemented by messages:
 * 1800   The %1s operand (essential type: '%2s') will be
 *        implicitly converted to a floating type, '%3s', in this
 *        arithmetic operation.
 * 
 * 1802   The %1s operand (essential type: '%2s') will be
 *        implicitly converted to a floating type, '%3s', in this
 *        relational operation.
 * 
 * 1803   The %1s operand (essential type: '%2s') will be
 *        implicitly converted to a floating type, '%3s', in this
 *        equality operation.
 * 
 * 1804   The %1s operand (essential type: '%2s') will be
 *        implicitly converted to a floating type, '%3s', in this
 *        conditional operation.
 * 
 * 1820   The %1s operand is non-constant and 'essentially signed'
 *        (%2s) but will be implicitly converted to an unsigned
 *        type (%3s) in this arithmetic operation.
 * 
 * 1821   The %1s operand is non-constant and 'essentially signed'
 *        (%2s) but will be implicitly converted to an unsigned
 *        type (%3s) in this bitwise operation.
 * 
 * 1822   The %1s operand is non-constant and 'essentially signed'
 *        (%2s) but will be implicitly converted to an unsigned
 *        type (%3s) in this relational operation.
 * 
 * 1823   The %1s operand is non-constant and 'essentially signed'
 *        (%2s) but will be implicitly converted to an unsigned
 *        type (%3s) in this equality operation.
 * 
 * 1824   The %1s operand is non-constant and 'essentially signed'
 *        (%2s) but will be implicitly converted to an unsigned
 *        type (%3s) in this conditional operation.
 * 
 * 1830   The %1s operand is constant, 'essentially signed' (%2s)
 *        and negative but will be implicitly converted to an
 *        unsigned type (%3s) in this arithmetic operation.
 * 
 * 1831   The %1s operand is constant, 'essentially signed' (%2s)
 *        and negative but will be implicitly converted to an
 *        unsigned type (%3s) in this bitwise operation.
 * 
 * 1832   The %1s operand is constant, 'essentially signed' (%2s)
 *        and negative but will be implicitly converted to an
 *        unsigned type (%3s) in this relational operation.
 * 
 * 1833   The %1s operand is constant, 'essentially signed' (%2s)
 *        and negative but will be implicitly converted to an
 *        unsigned type (%3s) in this equality operation.
 * 
 * 1834   The %1s operand is constant, 'essentially signed' (%2s)
 *        and negative but will be implicitly converted to an
 *        unsigned type (%3s) in this conditional operation.
 * 
 * 1840   The %1s operand is constant, 'essentially signed' (%2s)
 *        and non-negative but will be implicitly converted to an
 *        unsigned type (%3s) in this arithmetic operation.
 * 
 * 1841   The %1s operand is constant, 'essentially signed' (%2s)
 *        and non-negative but will be implicitly converted to an
 *        unsigned type (%3s) in this bitwise operation.
 * 
 * 1842   The %1s operand is constant, 'essentially signed' (%2s)
 *        and non-negative but will be implicitly converted to an
 *        unsigned type (%3s) in this relational operation.
 * 
 * 1843   The %1s operand is constant, 'essentially signed' (%2s)
 *        and non-negative but will be implicitly converted to an
 *        unsigned type (%3s) in this equality operation.
 * 
 * 1844   The %1s operand is constant, 'essentially signed' (%2s)
 *        and non-negative but will be implicitly converted to an
 *        unsigned type (%3s) in this conditional operation.
 * 
 * 1850   The %1s operand is 'essentially unsigned' (%2s) but will
 *        be implicitly converted to a signed type (%3s) in this
 *        arithmetic operation.
 * 
 * 1851   The %1s operand is 'essentially unsigned' (%2s) but will
 *        be implicitly converted to a signed type (%3s) in this
 *        bitwise operation.
 * 
 * 1852   The %1s operand is 'essentially unsigned' (%2s) but will
 *        be implicitly converted to a signed type (%3s) in this
 *        relational operation.
 * 
 * 1853   The %1s operand is 'essentially unsigned' (%2s) but will
 *        be implicitly converted to a signed type (%3s) in this
 *        equality operation.
 * 
 * 1854   The %1s operand is 'essentially unsigned' (%2s) but will
 *        be implicitly converted to a signed type (%3s) in this
 *        conditional operation.
 * 
 * 1860   The operands of this arithmetic operator are of
 *        different 'essential signedness' but will generate a
 *        result of type 'signed int'.
 * 
 * 1861   The operands of this bitwise operator are of different
 *        'essential signedness' but will generate a result of
 *        type 'signed int'.
 * 
 * 1862   The operands of this relational operator are of
 *        different 'essential signedness' but will both be
 *        promoted to 'signed int' for comparison.
 * 
 * 1863   The operands of this equality operator are of different
 *        'essential signedness' but will both be promoted to
 *        'signed int' for comparison.
 * 
 * 1864   The 2nd and 3rd operands of this conditional operator
 *        are of different 'essential signedness'. The result will
 *        be in the promoted type 'signed int'.
 * 
 * 1880   The operands of this relational operator are expressions
 *        of different 'essential type' categories (%1s and %2s).
 * 
 * 1881   The operands of this equality operator are expressions
 *        of different 'essential type' categories (%1s and %2s).
 * 
 * 1882   The 2nd and 3rd operands of this conditional operator
 *        are expressions of different 'essential type' categories
 *        (%1s and %2s).
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1004_compare( void )
{

/***************************
RELATIONAL OPERATIONS
***************************/

    pca > n1a;                                   /* 1880 */
    pca > s16a;                                  /* 1880 */
    pca > u16a;                                  /* 1880 */
    pca > f32a;                                  /* 1880 */

    n1a > pca;                                   /* 1880 */
    n1a > n2a;                                   /* 1880 */
    n1a > s16a;                                  /* 1880 */
    n1a > u16a;                                  /* 1880 */
    n1a > f32a;                                  /* 1802 */

    s8a > pca;                                   /* 1880 */
    s8a > n2a;                                   /* 1880 */
    s8a > f32a;                                  /* 1802 */

    u8a > pca;                                   /* 1880 */
    u8a > n2a;                                   /* 1880 */
    u8a > f32a;                                  /* 1802 */

    f32a > pca;                                  /* 1880 */
    f32a > n2a;                                  /* 1802 */
    f32a > s16a;                                 /* 1802 */
    f32a > u16a;                                 /* 1802 */

/***************************
EQUALITY OPERATIONS
***************************/

    pca == n1a;                                  /* 1881 */
    pca == s16a;                                 /* 1881 */
    pca == u16a;                                 /* 1881 */
    pca == f32a;                                 /* 1881 */

    n1a == pca;                                  /* 1881 */
    n1a == n2a;                                  /* 1881 */
    n1a == s16a;                                 /* 1881 */
    n1a == u16a;                                 /* 1881 */
    n1a == f32a;                                 /* 1803 */

    s8a == pca;                                  /* 1881 */
    s8a == n2a;                                  /* 1881 */
    s8a == f32a;                                 /* 1803 */

    u8a == pca;                                  /* 1881 */
    u8a == n2a;                                  /* 1881 */
    u8a == f32a;                                 /* 1803 */

    f32a == pca;                                 /* 1881 */
    f32a == n2a;                                 /* 1803 */
    f32a == s16a;                                /* 1803 */
    f32a == u16a;                                /* 1803 */

/***************************
CONDITIONAL OPERATIONS
***************************/

    (u32a > u32b) ? pca : n1a;                   /* 1882 */
    (u32a > u32b) ? pca : s16a;                  /* 1882 */
    (u32a > u32b) ? pca : u16a;                  /* 1882 */
    (u32a > u32b) ? pca : f32a;                  /* 1882 */

    (u32a > u32b) ? n1a : pca;                   /* 1882 */
    (u32a > u32b) ? n1a : n2a;                   /* 1882 */
    (u32a > u32b) ? n1a : s16a;                  /* 1882 */
    (u32a > u32b) ? n1a : u16a;                  /* 1882 */
    (u32a > u32b) ? n1a : f32a;                  /* 1804 */

    (u32a > u32b) ? s8a : pca;                   /* 1882 */
    (u32a > u32b) ? s8a : n2a;                   /* 1882 */
    (u32a > u32b) ? s8a : f32a;                  /* 1804 */

    (u32a > u32b) ? u8a : pca;                   /* 1882 */
    (u32a > u32b) ? u8a : n2a;                   /* 1882 */
    (u32a > u32b) ? u8a : f32a;                  /* 1804 */

    (u32a > u32b) ? f32a : pca;                  /* 1882 */
    (u32a > u32b) ? f32a : n2a;                  /* 1804 */
    (u32a > u32b) ? f32a : s16a;                 /* 1804 */
    (u32a > u32b) ? f32a : u16a;                 /* 1804 */


    return 0;
}
