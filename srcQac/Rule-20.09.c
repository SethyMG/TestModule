/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.9 (Required):
 * All identifiers used in the controlling expression of #if or
 * #elif preprocessing directives shall be #define'd before
 * evaluation
 * 
 * Implemented by message:
 * 3332   The macro '%s' used in this '#if' or '#elif' expression
 *        is not defined.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#if X < 0                               /* 3332 */
#define M 1
#endif

extern int16_t rule_2009( void )
{
   return 1;
}
