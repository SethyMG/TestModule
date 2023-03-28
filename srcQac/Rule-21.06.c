/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.6 (Required):
 * The Standard Library input/output functions shall not be used
 * 
 * Implemented by message:
 * 5124   Use of standard header file <stdio.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <stdio.h>                      /* 5124 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2106( void )
{
   return 1;
}
