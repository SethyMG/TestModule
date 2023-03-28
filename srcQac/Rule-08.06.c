/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.6 (Required):
 * An identifier with external linkage shall have exactly one
 * external definition
 * 
 * Implemented by messages:
 *  630   [U] More than one definition of '%s' (with external
 *        linkage).
 * 
 * 1509   '%1s' has external linkage and has multiple definitions.
 * 
 * 3406   Object/function '%s', with external linkage, has been
 *        defined in a header file.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3408

#include "misra.h"
#include "m3cmex.h"

int16_t obj_0806a = 3;
int16_t obj_0806a = 4;               /* 0630 */


extern int16_t rule_0806(void)
{
    return obj_0806c;
}
