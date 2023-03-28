/* >>>------------------------------------------------------------
 * 
 * File: Rule-09.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-9.3 (Required):
 * Arrays shall not be partially initialized
 * 
 * Implemented by message:
 *  686   Array has fewer initializers than its declared size.
 *        Default initialization is applied to the remainder of
 *        the array elements.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1053,1298

#include "misra.h"
#include "m3cmex.h"

#define PI 3.141593f

static int32_t   a0903[4]    = { 1, 2, 3, 4};                  /*      */
static int32_t   b0903[4]    = { 1, 2, 3 };                    /* 0686 */


static int32_t   c0903[3]    = { 0, 1, 2 };                    /*      */
static int32_t   d0903[3]    = { 0, 1 };                       /* 0686 */
static float32_t e0903[4]    = { [1] = 1.0f, 2.0f };           /*      */      /* Non-compliant - t[0] and t[3] are implicitly initialized */
static float32_t f0903[50]   = { [1] = 1.0f, [25] = 2.0f };    /*      */      /* Compliant - designated initializers for sparse matrix */
static float32_t g0903[3][2] = {
                         { 0.0f, 0.0f },
                         { PI / 4.0f, - PI / 4.0f },
                         { 0 },                                /*      */      /* initializes all elements of array subobject arr[2] */
                               };
static char      h0903[10]   = "Hello";                        /*      */      /* Compliant by Exception 3 */

extern int16_t rule_0903( void )
{
   return 0;
}
