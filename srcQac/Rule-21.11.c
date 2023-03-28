/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.11.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.11 (Required):
 * The standard header file <tgmath.h> shall not be used
 * 
 * Implemented by message:
 * 5131   Use of standard header file <tgmath.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <tgmath.h>                      /* 5131 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2111( void )
{
   return 1;
}
