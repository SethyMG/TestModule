/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.13.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.13 (Advisory):
 * Functions which are designed to provide operations on a
 * resource should be called in an appropriate sequence
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#include "dir-0410-ok1.h"
#include "dir-0410-ok2.h"
#include "dir-0410-bad.h"

extern int16_t dir_0413( void )
{
   return 1;
}
