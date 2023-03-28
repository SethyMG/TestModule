/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.8 (Advisory):
 * If a pointer to a structure or union is never dereferenced
 * within a translation unit, then the implementation of the object
 * should be hidden
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */




#include "misra.h"
#include "m3cmex.h"

extern int16_t dir_0408( void )
{
   return 1;
}
