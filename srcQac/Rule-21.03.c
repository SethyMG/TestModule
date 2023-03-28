/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.3 (Required):
 * The memory allocation and deallocation functions of <stdlib.h>
 * shall not be used
 * 
 * Implemented by message:
 * 5118   Use of memory allocation or deallocation function:
 *        calloc, malloc, realloc or free.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include <stdlib.h>
#include "misra.h"
#include "m3cmex.h"

#define L 4U

extern int16_t rule_2103( void )
{
   int8_t *p;

   p = ( int8_t * )malloc( L );                /* 5118 */
   free( p );                                  /* 5118 */

   p = ( int8_t * )calloc( 10U, L );           /* 5118 */
   p = ( int8_t * )realloc( p, L );            /* 5118 */

   return 1;
}

