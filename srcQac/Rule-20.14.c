/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.14.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.14 (Required):
 * All #else, #elif and #endif preprocessor directives shall
 * reside in the same file as the #if, #ifdef or #ifndef directive to
 * which they are related
 * 
 * Implemented by messages:
 * 3317   '#if...' not matched by '#endif' in included file. This
 *        is probably an error.
 * 
 * 3318   '#else'/'#elif'/'#endif' in included file matched
 *        '#if...' in parent file. This is probably an error.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 0883

#include "misra.h"
#include "m3cmex.h"

#if 1
#include "rule-20.14.h"
#endif


extern int16_t rule_2014( void )
{
    return 1;
}
