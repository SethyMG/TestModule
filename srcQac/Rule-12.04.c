/* >>>------------------------------------------------------------
 * 
 * File: Rule-12.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-12.4 (Advisory):
 * Evaluation of constant expressions should not lead to unsigned
 * integer wrap-around
 * 
 * Implemented by message:
 * 2910   Constant: Wraparound in unsigned arithmetic operation.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2984

#include "misra.h"
#include "m3cmex.h"

#define BASE  65024u
#define DELAY 10000u
#define WIDTH 60000u

extern int16_t rule_1204( void )
{
   static const uint16_t cy = 0xffffu;

   u32a = 0x1U - 0x2U;                    /* 2910 */

   u32a = 0xFFFFFFFFU + 0x2U;             /* 2910 */
   u32a = 0xFFFFU + 0x2U;                 /* 2910 */
   u32a = 0xFFU + 0x2U;

   u32a = 0x0FFFFFFFU * 32U;              /* 2910 */
   u32a = 0x0FFFU * 32U;                  /* 2910 */
   u32a = 0x0FU * 32U;

   switch (u16a)
   {
   case BASE + 0u:   ++u16a; break;
   case BASE + 1u:   ++u16b; break;
   case BASE + 512u: ++u16r; break;       /* 2910 */
   default:                break;
   }

#if 1u + (0u - 10u)                       /* 2910 */
#endif

   u16a = DELAY + WIDTH;                  /* 2910 */

   u16b = cy + 1u;                        /*      */

   u16c = (0u == 0u) ? 0u : (0u - 1u);    /* 2910 */      /* Compliant - but operation is unreachable */

   u16d = bla ? 0u : (0u - 1u);           /* 2910 */

   return 0;
}
