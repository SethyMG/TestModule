/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.6 (Required):
 * A typedef name shall be a unique identifier
 * 
 * Implemented by messages:
 * 1506   The identifier '%1s' is declared as a typedef and is
 *        used elsewhere for a different kind of declaration.
 * 
 * 1507   '%1s' is used as a typedef for different types.
 * 
 * 1508   The typedef '%1s' is declared in more than one location.
 * 
 * 3448   Declaration of typedef '%s' is not in a header file
 *        although it is used in a definition or declaration with
 *        external linkage.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

typedef int8_t    t0506a;
typedef int16_t   t0506b;
typedef int16_t   t0506c;
typedef int32_t   t0506d;                       /* 3448 */

extern t0506d mheavy;                           /* 3447 */


extern int16_t rule_0506(void)
{
  typedef signed char xs8;

  xs8 scm = 1;

  return scm;
}
