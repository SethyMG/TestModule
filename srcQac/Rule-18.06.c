/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-18.6 (Required):
 * The address of an object with automatic storage shall not be
 * copied to another object that persists after the first object has
 * ceased to exist
 * 
 * Implemented by messages:
 * 3217   Address of automatic object exported to a pointer with
 *        linkage or wider scope.
 * 
 * 3225   Address of automatic object exported using a function
 *        parameter.
 * 
 * 3230   Address of automatic object assigned to local pointer
 *        with static storage duration.
 * 
 * 4140   Address of automatic object exported in function return
 *        value.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include "misra.h"
#include "m3cmex.h"

static int16_t * rule_1806a( int16_t **ppi );

extern int16_t rule_1806( void )
{
   int16_t  *pi1;
   int16_t  *pi2;

   pi1 = rule_1806a( &pi2 );

   *pi1 = 1;                                            /*     */       /* Undefined behaviour */
   *pi2 = 2;                                            /*     */       /* Undefined behaviour */

   return 1;
}

static int16_t * rule_1806a( int16_t **ppi )
{
   static int16_t * pc1806;
   int16_t *p;
   int16_t cx = 0;

   {
      int16_t i = 1;
      p = &i;                                           /* 3217 */
   }

   pc1806 = &cx;                                        /* 3230 */

   *ppi = &cx;                                          /* 3225 */

   return &cx;                                          /* 4140 */
}
