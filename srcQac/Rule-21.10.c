/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.10.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.10 (Required):
 * The Standard Library time and date functions shall not be used
 * 
 * Implemented by message:
 * 5127   Use of standard header file <time.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <time.h>                      /* 5127 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2110( void )
{
   return 1;
}
