/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.3 (Required):
 * An identifier declared in an inner scope shall not hide an
 * identifier declared in an outer scope
 * 
 * Implemented by messages:
 * 2547   This declaration of tag '%s' hides a more global
 *        declaration.
 * 
 * 3334   This declaration of '%s' hides a more global
 *        declaration.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include "misra.h"
#include "m3cmex.h"

struct ST0503
{
   int16_t a;
   int16_t b;
};

enum TE0503 { enx1, enx2, enx3 };
static enum TE0503 enva;

extern int16_t rule_0503( void )
{
   int16_t enx1;                                        /* 3334 */      /* Non-compliant - type hides object */

   struct ST0503                                        /* 2547 */      /* Non-compliant - tag hides tag     */
   {
      uint16_t x;
      uint16_t y;
   } sl;

   return 1;
}
