/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.5 (Advisory):
 * #undef should not be used
 * 
 * Implemented by message:
 *  841   Using '#undef'.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2005( void )
{
    return 1;
}

#define  L      0
#undef   L                                      /* 0841 */
