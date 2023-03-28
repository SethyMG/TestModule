/* >>>------------------------------------------------------------
 * 
 * File: Rule-19.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-19.2 (Advisory):
 * The union keyword should not be used
 * 
 * Implemented by messages:
 *  750   A union type specifier has been defined.
 * 
 *  759   An object of union type has been defined.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

typedef union {char x[2]; uint16_t s;} TU;      /* 0750 */

union test
{                                               /* 0750 */
   char    *c;
   int32_t  i;
};

extern int16_t rule_1902( void )
{
   union test mytest;                           /* 0759 */
   TU         xtr;                              /* 0759 */

   return 0;
}
