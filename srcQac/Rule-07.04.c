/* >>>------------------------------------------------------------
 * 
 * File: Rule-07.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-7.4 (Required):
 * A string literal shall not be assigned to an object unless the
 * object's type is "pointer to const-qualified char"
 * 
 * Implemented by messages:
 *  752   String literal passed as argument to function whose
 *        parameter is not a 'pointer to const'.
 * 
 *  753   String literal assigned to pointer which is not a
 *        'pointer to const'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3206

#include "misra.h"
#include "m3cmex.h"

#define MSG "literal string one"

static void rule_0704a(PC * pa);
static void rule_0704b(const PC * cpa);
static void rule_0704c(const PC * const cpca);
static void rule_0704d(PC * const cpca);

extern int16_t rule_0704( void )
{
   PC    *ls_a = "literal string two";                /* 0753 */
   PC    *ls_b = "literal string three";              /* 0753 */
   const PC *ls_c = "literal string four";
   const PC *const ls_d = "literal string five";

   rule_0704a(MSG);                                   /* 0752 */
   rule_0704a(ls_a);
   rule_0704a(ls_b);

   rule_0704b(MSG);
   rule_0704b(ls_a);
   rule_0704b(ls_b);

   rule_0704c(MSG);
   rule_0704c(ls_a);
   rule_0704c(ls_b);

   rule_0704d(MSG);                                   /* 0752 */
   rule_0704d(ls_a);
   rule_0704d(ls_b);

   return 0;
}


static void rule_0704a(PC * pa)
{
   return;
}

static void rule_0704b(const PC * cpa)
{
   return;
}

static void rule_0704c(const PC * const cpca)
{
   return;
}

static void rule_0704d(PC * const cpca)
{
   return;
}
