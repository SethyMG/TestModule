/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.08.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.8 (Required):
 * The static storage class specifier shall be used in all
 * declarations of objects and functions that have internal linkage
 * 
 * Implemented by message:
 * 3224   This identifier has previously been declared with
 *        internal linkage but is not declared here with the
 *        static storage class specifier.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3219,3222,3408,3447

#include "misra.h"
#include "m3cmex.h"

static int16_t obj_0808a;                  /*      */   /* Internal linkage */
extern int16_t obj_0808a;                  /* 3224 */   /* Internal linkage */

extern int16_t obj_0808b;                  /*      */   /* External linkage */
       int16_t obj_0808b;                  /*      */   /* External linkage */

       int16_t obj_0808c;                  /*      */   /* External linkage */
extern int16_t obj_0808c;                  /*      */   /* External linkage */

static int16_t obj_0808d;                  /*      */   /* Internal linkage */
       int16_t obj_0808d;                  /* 0625 */   /* External linkage - MISRA Violation - Rule 1.3 */

       int16_t obj_0808e;                  /*      */   /* External linkage */
static int16_t obj_0808e;                  /* 0625 */   /* Internal linkage - MISRA Violation - Rule 1.3 */

extern int16_t obj_0808f;                  /*      */   /* External linkage */
static int16_t obj_0808f;                  /* 0625 */   /* Internal linkage - MISRA Violation - Rule 1.3 */



static int16_t rule_0808a( void );         /*      */   /* Internal linkage */

int16_t rule_0808a( void )
{                                          /* 3224 */   /* Internal linkage */
    extern int16_t a0808;                  /*      */   /* External linkage */
    static int16_t a0808 = 0;              /* 0622 */   /* No       linkage */

    extern int16_t obj_0808a;              /*      */   /* Internal linkage */

    extern int16_t obj_0808b;              /*      */   /* External linkage */

    return 0;
}
