/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.3 (Required):
 * All declarations of an object or function shall use the same
 * names and type qualifiers
 * 
 * Implemented by messages:
 *  624   Function '%s' is declared using typedefs which are
 *        different to those in a previous declaration.
 * 
 * 1330   The parameter identifiers in this function declaration
 *        differ from those in a previous declaration.
 * 
 * 3675   Function parameter declared with type qualification
 *        which differs from previous declaration.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2984

#include "misra.h"
#include "m3cmex.h"

static int16_t rule_0803a(int16_t aa);
static int16_t rule_0803b(const int16_t bb);
static int16_t rule_0803c(int16_t cc);

typedef int16_t MOD;

extern int16_t rule_0803( void )
{
    int16_t n;
    n = rule_0803a(1);
    n = n + rule_0803b(2);
    n = n + rule_0803c(3);

    return n;
}

static int16_t rule_0803a(int16_t aaa)                     /* 1330 */
{
    return aaa;
}

static int16_t rule_0803b(int16_t bb)                      /* 3675 */
{
    return bb;
}

static int16_t rule_0803c(MOD cc)                          /* 0624 */
{
    return cc;
}
