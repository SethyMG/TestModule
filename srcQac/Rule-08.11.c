/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.11.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.11 (Advisory):
 * When an array with external linkage is declared, its size
 * should be explicitly specified
 * 
 * Implemented by message:
 * 3684   Array declared with unknown size.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3408,3447

#include "misra.h"
#include "m3cmex.h"

       int16_t arr1[12];
       int16_t arr2[  ] = { 1, 2, 3 };

extern int16_t arr3[12];
extern int16_t arr4[  ];                   /* 3684 */

extern int16_t rule_0811( void )
{
   return 0;
}
