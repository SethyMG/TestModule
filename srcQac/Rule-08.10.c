/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.10.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.10 (Required):
 * An inline function shall be declared with the static storage
 * class
 * 
 * Implemented by messages:
 * 3240   inline function '%s' is being defined with external
 *        linkage.
 * 
 * 3243   inline function '%s' is also an 'external definition'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1055,2984,3408

#include "misra.h"
#include "m3cmex.h"

static inline int16_t rule_0810a(int16_t a)
{
    return a * 2;
}

extern inline int16_t rule_0810b(int16_t a)
{                                                       /* 3243 */
    return a * 2;
}

inline int16_t rule_0810c(int16_t a)                    /* 3240 */
{
    return a * 2;
}


extern int16_t rule_0810( void )
{
   int16_t r = 0;

   r = r + rule_0810a(1);
   r = r + rule_0810b(2);
   r = r + rule_0810c(3);

   return r;
}
