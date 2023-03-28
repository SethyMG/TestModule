/* >>>------------------------------------------------------------
 * 
 * File: Rule-12.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-12.2 (Required):
 * The right hand operand of a shift operator shall lie in the
 * range zero to one less than the width in bits of the essential
 * type of the left hand operand
 * 
 * Implemented by messages:
 *  499   Right operand of shift operator is greater than or equal
 *        to the width of the essential type of the left operand.
 * 
 * 2790   Constant: Right hand operand of shift operator is
 *        negative or too large.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2984

#include "misra.h"
#include "m3cmex.h"

#define SHIFT16 16u
#define SHIFT15 15u
#define SHIFT8   8u
#define SHIFT7   7u
#define SHIFT1   1u
#define SHIFTM1 (-1)

extern int16_t rule_1202( void )
{
   u16r = u16a >> SHIFT1;            /*           */
   u16r = u16a >> SHIFT15;           /*           */
   u16r = u16a >> SHIFT16;           /* 2790      */
   u16r = u16a >> SHIFTM1;           /* 2790 4534 */
   u8r = u8a >> SHIFT8;              /* 0499      */
   u8r = u8a >> SHIFT7;              /*           */

   return 1;
}
