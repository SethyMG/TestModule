/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.09.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.9 (Required):
 * The library functions bsearch and qsort of <stdlib.h> shall not
 * be used
 * 
 * Implemented by message:
 * 5135   Use of function: bsearch or qsort.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 0316,1292,2983,3206

#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

static size_t rule_2109a(char (*p)[6]);
static int    rule_2109b(const void * pv1, const void * pv2);           /* 5209 */

extern int16_t rule_2109( void )
{
    char buf[1000][6] = {0};
    char (*p)[6];
    size_t n;

    n = rule_2109a(buf);

    qsort(buf, n, 6, rule_2109b);                                       /* 5135 */

    p = (char (*)[6])bsearch("ABCDE", buf, n, 6, rule_2109b);           /* 5135 */

    return 1;
}

static size_t rule_2109a(char (*p)[6])
{
    /* Duumy function to initialize array */
    return 123;
}

static int    rule_2109b(const void * pv1, const void * pv2)            /* 5209 */
{
    /* Duumy function to compare array elements */
    return 0;
}
