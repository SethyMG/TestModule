/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.13.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.13 (Required):
 * A line whose first token is # shall be a valid preprocessing
 * directive
 * 
 * Implemented by message:
 * 3115   Unrecognized preprocessing directive has been ignored
 *        because of conditional inclusion directives.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define N 1

extern int16_t rule_2013( void )
{
   int16_t x = 0;

#ifndef N

   x = 0;

/* Note misspelling below */
#alse                              /* 3115 */

   x = 2;

#endif

   return x;
}
