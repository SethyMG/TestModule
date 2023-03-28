/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-13.3 (Advisory):
 * A full expression containing an increment (++) or decrement
 * (--) operator should have no other potential side effects other
 * than that caused by the increment or decrement operator
 * 
 * Implemented by message:
 * 3440   Using the value resulting from a ++ or -- operation.
 * 
 * <<<------------------------------------------------------------ */


#pragma PRQA_MESSAGES_OFF 2982,2983,2984

#include "misra.h"
#include "m3cmex.h"

struct XS
{
    int16_t a;
    int16_t b;
};


extern int16_t rule_1303( void )
{
   int16_t x = 0;
   int16_t r;
   int16_t buf[10] = {0};
   int16_t *psi;
   struct XS xsa = {0};
   struct XS *ps;

   ++x;
   x++;
   --x;
   x--;

   r = ++x;                    /* 3440 */
   r = x++;                    /* 3440 */
   r = --x;                    /* 3440 */
   r = x--;                    /* 3440 */

   buf[0]++;
   xsa.a++;
   ps = &xsa;
   ps->a++;
   psi = &buf[5];
   (*psi)++;

   return r;
}
