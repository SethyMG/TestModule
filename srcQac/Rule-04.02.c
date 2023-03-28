/* >>>------------------------------------------------------------
 * 
 * File: Rule-04.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-4.2 (Advisory):
 * Trigraphs should not be used
 * 
 * Implemented by message:
 * 3601   Trigraphs (??x) are an ISO feature.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_0402( void )
{
   const char *pa =    { "??=" };                                  /* 3601      */
   const char *pb =    { "??(" };                                  /* 3601      */
   const char *pc =    { "??/a" };                                 /* 3601      */
   const char *pd =    { "??/??/a" };                              /* 3601 3601 */
   const char *pe =    { "??)" };                                  /* 3601      */
   const char *pf =    { "??'" };                                  /* 3601      */
   const char *pg =    { "??<" };                                  /* 3601      */
   const char *ph =    { "??!" };                                  /* 3601      */
   const char *pi =    { "??>" };                                  /* 3601      */
   const char *pj =    { "??-" };                                  /* 3601      */
   const char *pk =    { "Date should be in the form ??-??-??" };  /* 3601 3601 */

   return 1;
}
