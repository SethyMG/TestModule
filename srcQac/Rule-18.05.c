/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.5 (Advisory):
 * Declarations should contain no more than two levels of pointer
 * nesting
 * 
 * Implemented by messages:
 * 3260   Typedef defined with more than 2 levels of indirection.
 * 
 * 3261   Member of struct/union defined with more than 2 levels
 *        of indirection.
 * 
 * 3262   Object defined or declared with more than 2 levels of
 *        indirection.
 * 
 * 3263   Function defined or declared with a return type which
 *        has more than 2 levels of indirection.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include "misra.h"
#include "m3cmex.h"


typedef PC * CHARSTAR;
typedef uint16_t *** PPPU;                          /* 3260 */

static int16_t rule_1805a( PC ** const ptr[] );     /* 3262 */

extern int16_t rule_1805( void )
{
   int16_t     r;
   PC          tab[ 4 ];
   PC         *ptr1;
   PC        **ptr2;
   PC       ***ptr3;                                /* 3262 */
   CHARSTAR  **ptr4;                                /* 3262 */
   CHARSTAR   *const * const ptr5;                  /* 3262 */

   ptr1 = &tab[ 0 ];
   ptr2 = &ptr1;
   ptr3 = &ptr2;

   r = rule_1805a( ptr3 );

   return r;
}

static int16_t rule_1805a( PC ** const ptr[] )      /* 3262 */
{
   PC cx;

   cx = ***ptr;

   return 0;
}
