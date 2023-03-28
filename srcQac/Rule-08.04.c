/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.4 (Required):
 * A compatible declaration shall be visible when an object or
 * function with external linkage is defined
 * 
 * Implemented by message:
 * 3408   '%s' has external linkage and is being defined without
 *        any previous declaration.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2017

#include "misra.h"
#include "m3cmex.h"

int16_t obj0804 = 1;                    /* 3408 */

extern int16_t rule_0804(void)
{
    return 1;
}
