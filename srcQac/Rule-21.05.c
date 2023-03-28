/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.5 (Required):
 * The standard header file <signal.h> shall not be used
 * 
 * Implemented by message:
 * 5123   Use of standard header file <signal.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <signal.h>                     /* 5123 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2105( void )
{
   return 1;
}
