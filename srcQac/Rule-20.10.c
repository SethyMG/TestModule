/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.10.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.10 (Advisory):
 * The # and ## preprocessor operators should not be used
 * 
 * Implemented by messages:
 *  341   Using the stringify operator '#'.
 * 
 *  342   Using the glue operator '##'.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define STRINGIFY( S ) #S                       /* 0341 */
#define GLUE( S1, S2 ) S1 ## S2                 /* 0342 */

extern int16_t rule_2010( void )
{
   const char buf[] = STRINGIFY( MISRA );
   int16_t GLUE( ru, le ) = 1;

   return 0;
}
