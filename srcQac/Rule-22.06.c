/* >>>------------------------------------------------------------
 * 
 * File: Rule-22.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-22.6 (Mandatory):
 * The value of a pointer to a FILE shall not be used after the
 * associated stream has been closed.
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2206( void )
{
   int dos = 2;
   return 1;
}
