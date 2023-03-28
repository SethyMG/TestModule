/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.8 (Required):
 * Identifiers that define objects or functions with external
 * linkage shall be unique
 * 
 * Implemented by messages:
 * 1525   Object/function with external linkage has same
 *        identifier as another object/function with internal
 *        linkage.
 * 
 * 1526   Object with no linkage has same identifier as another
 *        object/function with external linkage.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int16_t obj_0508a;

extern int16_t rule_0508( void )
{
    int16_t obj_0508b;

    return 1;
}
