/* >>>------------------------------------------------------------
 * 
 * File: Rule-07.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-7.3 (Required):
 * The lowercase character "l" shall not be used in a literal
 * suffix
 * 
 * Implemented by message:
 * 1280   A lowercase letter L (l) has been used in an integer or
 *        floating suffix.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0703( void )
{
   u32a  = 123lu;                 /* 1280 */
   f128a = 12.34l;                /* 1280 */

   return 0;
}
