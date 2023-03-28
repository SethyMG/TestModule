/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.9 (Required):
 * The macro NULL shall be the only permitted form of integer null
 * pointer constant
 * 
 * Implemented by messages:
 * 3003   This character constant is being interpreted as a NULL
 *        pointer constant.
 * 
 * 3004   This integral constant expression is being interpreted
 *        as a NULL pointer constant.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 0753,2461,2931,2981,2982,2991,2995,3408,3447

#include <stddef.h>
#include "misra.h"
#include "m3cmex.h"

#define NIL '\0'

extern  PC  *ppca;
extern  PC  *ppcb;

extern int16_t rule_xxxx( void )
{
   PC    *gpca = "hello";
   PC    *gca = NULL;                                 /*                */
   PC    *gcb = 0;                                    /*           3004 */
   PC    *gcc = NIL;                                  /* 3003           */


   SC    *lpsc = NIL;                                 /* 3003           */
   SS    *lpss = NIL;                                 /* 3003           */
   SI    *lpsi = NIL;                                 /* 3003           */
   SL    *lpsl = NIL;                                 /* 3003           */
   SX    *lpsx = NIL;                                 /* 3003           */

   UC    *lpuc = NIL;                                 /* 3003           */
   US    *lpus = NIL;                                 /* 3003           */
   UI    *lpui = NIL;                                 /* 3003           */
   UL    *lpul = NIL;                                 /* 3003           */
   UX    *lpux = NIL;                                 /* 3003           */

   gca = gpca;
   gcb = gpca;
   gcc = gpca;

   if (gca != NULL) {                                 /*                */
   }

   if (gcb != 0) {                                    /*           3004 */
   }

   if (gcc != NIL) {                                  /* 3003           */
   }

   ppca = gpca;
   while (ppca != NULL) {                             /*                */
      ppca++;
   }

   ppca = gpca;
   while (ppca != 0) {                                /*           3004 */
      ppca++;
   }

   ppca = gpca;
   while (ppca != NIL) {                              /* 3003           */
      ppca++;
   }

   ppca = gpca;
   while (*ppca != '\0') {                            /*                */
      ppca++;
   }

   ppca = gpca;
   while (*ppca != NIL) {                             /*                */
      ppca++;
   }

   ppcb = NULL;                                       /*                */
   ppcb = 0;                                          /*           3004 */
   ppcb = NIL;                                        /* 3003           */

   return 1;
}
