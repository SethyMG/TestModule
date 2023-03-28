/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.9 (Advisory):
 * Identifiers that define objects or functions with internal
 * linkage should be unique
 * 
 * Implemented by messages:
 * 1525   Object/function with external linkage has same
 *        identifier as another object/function with internal
 *        linkage.
 * 
 * 1527   Object/function with internal linkage has same
 *        identifier as another object/function with internal
 *        linkage.
 * 
 * 1528   Object with no linkage has same identifier as another
 *        object/function with internal linkage.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int16_t obj_0509a = 0;

extern int16_t rule_0509( void )
{
    int16_t obj_0509b = 0;

    return 1;
}
