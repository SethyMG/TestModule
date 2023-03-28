/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.4 (Required):
 * The standard header file <setjmp.h> shall not be used
 * 
 * Implemented by message:
 * 5132   Use of standard header file <setjmp.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <setjmp.h>                     /* 5132 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2104( void )
{
   return 1;
}
