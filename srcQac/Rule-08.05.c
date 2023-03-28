/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.5 (Required):
 * An external object or function shall be declared once in one
 * and only one file
 * 
 * Implemented by messages:
 * 1513   Identifier '%1s' with external linkage has separate
 *        non-defining declarations in more than one location.
 * 
 * 3221   Function with external linkage declared at block scope.
 * 
 * 3222   Object with external linkage declared at block scope.
 * 
 * 3447   '%s' is being declared with external linkage but this
 *        declaration is not in a header file.
 * 
 * 3451   The global identifier '%s' has been declared in more
 *        than one file.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t obj_0805a;                           /* 3447      */
extern int16_t obj_0805b;                           /* 3447      */
extern int16_t obj_0805c;                           /* 3447      */

extern int16_t rule_0805( void );                   /* 3447 3451 */

extern int16_t rule_0805( void )
{
   extern int16_t obj_0805d;                        /* 3447 3222 */
   extern void test0805a(void);                     /* 3447 3221 */

   obj_0805a = 0;
   obj_0805b = 0;

   return 0;
}
