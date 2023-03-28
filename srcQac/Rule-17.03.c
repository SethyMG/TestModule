/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-17.3 (Mandatory):
 * A function shall not be declared implicitly
 * 
 * Implemented by message:
 * 3335   No function declaration. Implicit declaration inserted:
 *        'extern int %s();'.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1703( void )
{
   int16_t r;

   r = rule_1703a( );                       /* 3335 */

   return r;
}
