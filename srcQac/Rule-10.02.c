/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.2 (Required):
 * Expressions of essentially character type shall not be used
 * inappropriately in addition and subtraction operations
 * 
 * Implemented by messages:
 * 1810   An operand of 'essentially character' type is being
 *        added to another operand of 'essentially character'
 *        type.
 * 
 * 1811   An operand of 'essentially character' type is being
 *        subtracted from an operand of 'essentially signed' type.
 * 
 * 1812   An operand of 'essentially character' type is being
 *        subtracted from an operand of 'essentially unsigned'
 *        type.
 * 
 * 1813   An operand of 'essentially character' type is being
 *        balanced with an operand of 'essentially floating' type
 *        in this arithmetic operation.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112

#include "misra.h"
#include "m3cmex.h"

#ifndef PEXP
#define PEXP pca
#endif

extern int16_t rule_1002( void )
{
/************/
/* ADDITION */
/************/

   PEXP + bla;                   /*      4501 */

   PEXP + 'a';                   /* 1810      */

   PEXP + n1a;                   /*      4521 */

   PEXP + sca;                   /*           */
   PEXP + ssa;                   /*           */
   PEXP + sia;                   /*           */
   PEXP + sla;                   /*           */
   PEXP + sxa;                   /*           */

   PEXP + uca;                   /*           */
   PEXP + usa;                   /*           */
   PEXP + uia;                   /*           */
   PEXP + ula;                   /*           */
   PEXP + uxa;                   /*           */

   PEXP + fta;                   /* 1813      */
   PEXP + dba;                   /* 1813      */
   PEXP + lda;                   /* 1813      */



   bla + PEXP;                   /*      4501 */

   'a' + PEXP;                   /* 1810      */

   n1a + PEXP;                   /*      4521 */

   sca + PEXP;                   /*           */
   ssa + PEXP;                   /*           */
   sia + PEXP;                   /*           */
   sla + PEXP;                   /*           */
   sxa + PEXP;                   /*           */

   uca + PEXP;                   /*           */
   usa + PEXP;                   /*           */
   uia + PEXP;                   /*           */
   ula + PEXP;                   /*           */
   uxa + PEXP;                   /*           */

   fta + PEXP;                   /* 1813      */
   dba + PEXP;                   /* 1813      */
   lda + PEXP;                   /* 1813      */

/***************/
/* SUBTRACTION */
/***************/

   PEXP - bla;                   /*      4501 */

   PEXP - 'a';                   /*           */

   PEXP - n1a;                   /*      4521 */

   PEXP - sca;                   /*           */
   PEXP - ssa;                   /*           */
   PEXP - sia;                   /*           */
   PEXP - sla;                   /*           */
   PEXP - sxa;                   /*           */

   PEXP - uca;                   /*           */
   PEXP - usa;                   /*           */
   PEXP - uia;                   /*           */
   PEXP - ula;                   /*           */
   PEXP - uxa;                   /*           */

   PEXP - fta;                   /* 1813      */
   PEXP - dba;                   /* 1813      */
   PEXP - lda;                   /* 1813      */



   bla - PEXP;                   /*      4501 */

   'a' - PEXP;                   /*           */

   n1a - PEXP;                   /*      4521 */

   sca - PEXP;                   /* 1811      */
   ssa - PEXP;                   /* 1811      */
   sia - PEXP;                   /* 1811      */
   sla - PEXP;                   /* 1811      */
   sxa - PEXP;                   /* 1811      */

   uca - PEXP;                   /* 1812      */
   usa - PEXP;                   /* 1812      */
   uia - PEXP;                   /* 1812      */
   ula - PEXP;                   /* 1812      */
   uxa - PEXP;                   /* 1812      */

   fta - PEXP;                   /* 1813      */
   dba - PEXP;                   /* 1813      */
   lda - PEXP;                   /* 1813      */

   return 0;
}
