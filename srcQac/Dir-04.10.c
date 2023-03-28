/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.10.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.10 (Required):
 * Precautions shall be taken in order to prevent the contents of
 * a header file being included more then once
 * 
 * Implemented by message:
 *  883   Include file code is not protected against repeated
 *        inclusion
 * 
 * <<<------------------------------------------------------------ */




#include "misra.h"
#include "m3cmex.h"

#include "dir-0410-ok1.h"
#include "dir-0410-ok2.h"
#include "dir-0410-bad.h"

extern int16_t dir_0410( void )
{
   return 1;
}
