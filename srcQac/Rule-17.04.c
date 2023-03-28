/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-17.4 (Mandatory):
 * All exit paths from a function with non-void return type shall
 * have an explicit return statement with an expression
 * 
 * Implemented by messages:
 *  745   [U] 'return;' found in '%s()', which has been defined
 *        with a non-'void' return type.
 * 
 * 2887   Function 'main' ends with an implicit 'return'
 *        statement.
 * 
 * 2888   This function has been declared with a non-void 'return'
 *        type but ends with an implicit 'return ;' statement.
 * 
 * 3113   [U] 'return' statement includes no expression but
 *        function '%s()' is implicitly of type 'int'.
 * 
 * 3114   [U] Function '%s()' is implicitly of type 'int' but ends
 *        without returning a value.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3408

#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1704a( void );
static int16_t rule_1704b( void );
static         rule_1704c( void );                      /* 2050 */
static         rule_1704d( void );                      /* 2050 */


extern int16_t rule_1704( void )
{
   int16_t r;

   r = rule_1704a()            +
       rule_1704b()            +
       rule_1704c()            +
       rule_1704d()            +
       rule_1704e()            +                        /* 3335 */
       rule_1704f();                                    /* 3335 */

   return r;
}

static int16_t rule_1704a( void )
{
   return;                                              /* 0745 */
}

static int16_t rule_1704b( void )                       /* 2888 */
{

}

static         rule_1704c( void )
{                                                       /* 2050 */
   return;                                              /* 0745 */
}

static         rule_1704d( void )                       /* 2888 */
{                                                       /* 2050 */
}

extern         rule_1704e( void )
{                                                       /* 2050 */
    return;                                             /* 3113 */
}

extern         rule_1704f( void )                       /* 2888 */
{                                                       /* 2050 */
}                                                       /* 3114 */
