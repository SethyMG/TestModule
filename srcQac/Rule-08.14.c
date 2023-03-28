/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.14.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.14 (Required):
 * The restrict type qualifier shall not be used
 * 
 * Implemented by message:
 * 5137   Use of 'restrict' type qualifier.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3406,3440

#include "misra.h"
#include "m3cmex.h"

static void rule_0814a(int16_t n, int16_t * restrict p, const int16_t * restrict q)    /* 5137 5137 */
{
    while (n > 0)
    {
        *p++ = *q++ + n;
        --n;
    }
}

extern int16_t rule_0814(void)
{
  static int16_t ia[1000] = {0};

  rule_0814a(10, &ia[u16a], &ia[u16b]);
  return 1;
}
