/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.9 (Advisory):
 * A function should be used in preference to a function-like
 * macro where they are interchangeable
 * 
 * Implemented by message:
 * 3453   A function could probably be used instead of this
 *        function-like macro.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#define  MAX( A, B )   ( ( ( A ) > ( B ) ) ? ( A ) : ( B ) )    /* 3453 */
#define  MMAX          ( 14 + 32 )
#define  HELLO         10


extern int16_t dir_0409( void )
{
   return 1;
}
