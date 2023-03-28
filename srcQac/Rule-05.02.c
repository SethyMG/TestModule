/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.2 (Required):
 * Identifiers declared in the same scope and name space shall be
 * distinct
 * 
 * Implemented by message:
 *  779   [U] Identifier does not differ from other identifier(s)
 *        (e.g. '%s') within the specified number of significant
 *        characters.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

            /* 1234567890123456789012345678901 *****/
static int32_t b23456789012345678901234567;
static int32_t b23456789012345678901234567890;                  /*      */      /* Compliant */

            /* 1234567890123456789012345678901 ******/
static int32_t a234567890123456789012345678901234;
static int32_t a234567890123456789012345678901234x;             /* 0779 */      /* Non-compliant */

extern int16_t rule_0502(void)
{
       /* 1234567890123456789012345678901 ******/
  int32_t a234567890123456789012345678901234y;                  /* 0779 */      /* Not-compliant with Rule 5.3 */

  return 1;
}


