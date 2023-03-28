/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-13.2 (Required):
 * The value of an expression and its persistent side-effects
 * shall be the same under all permitted evaluation orders
 * 
 * Implemented by messages:
 *  400   [U] '%s' is modified more than once between sequence
 *        points - evaluation order unspecified.
 * 
 *  401   [U] '%s' may be modified more than once between sequence
 *        points - evaluation order unspecified.
 * 
 *  402   [U] '%s' is modified and accessed between sequence
 *        points - evaluation order unspecified.
 * 
 *  403   [U] '%s' may be modified and accessed between sequence
 *        points - evaluation order unspecified.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983,2984,2996

#include "misra.h"
#include "m3cmex.h"


static int16_t rule_1302a( int16_t *p );
static int16_t rule_1302b( int16_t *p );
static int16_t rule_1302c( const int16_t *p );


#define MAX 15

extern int16_t rule_1302( void )
{
   const int16_t buf[20] = {0};
   int16_t       x = 5;
   int16_t       y = 10;

   /***********************************************************************/
   /* 0400 '%s' is modified more than once between sequence points        */
   /*      - evaluation order unspecified.                                  */
   /***********************************************************************/

   x = y + ( x++ );                                                                     /* 0400 3440 */

   /* The order of the increment and assignment ARE NOT specified */
   x = ( x > MAX ) ? ( ++x ) : 0;                                                       /* 0400 3440 */

   /* The order of the increment and assignment ARE NOT specified */
   x = ( y > MAX ) ? ( ++x ) : 0;                                                       /* 0400 3440 */


   /***********************************************************************/
   /* 0401 '%s' may be modified more than once between sequence points    */
   /*      - evaluation order unspecified.                                  */
   /*                                                                     */
   /* This message is generated in situations where it is not certain     */
   /* that an object is modified more than once but the passing of a      */
   /* pointer to that object suggests it may be                           */
   /***********************************************************************/


   y = rule_1302a( &x ) + ( x++ );                                                      /* 0401 3440 */
   y = rule_1302a( &x ) + rule_1302b( &x );                                             /* 0401      */

   /* In the following statement, there is a sequence point after the
      evaluation of the first operand of the ternary operator, so "x"
      is known to be incremented before the assignment occurs. The
      code may be silly, but it is not undefined */

   x = ( ( ++x ) > MAX ) ? 0 : 1;                                                       /*      3440 */


   /* In these statements, any modification to the value of x by the
      function rule_1302a is known to occur before the assignment and
      therefore, although "x" may be modified more than once, the order
      of evaluation is not undefined */

   x = rule_1302a( &x );                                                                /*           */

   x = ( y > MAX ) ? rule_1302a( &x ) : 0;                                              /*           */

   /* The prototype of rule_1302c declares a "pointer to const int16_t"
      parameter and so there is no possibility of x being modified more
      than once */

   y = rule_1302c( &x ) + ( x++ );                                                      /*      3440 */



   /***********************************************************************/
   /* 0402 '%s' is modified and accessed between sequence points          */
   /*      - evaluation order unspecified.                                */
   /***********************************************************************/

   y = ( x + 6 ) / ( x++ );                                                             /* 0402 3440 */

   y = buf[ x ] + ( x++ );                                                              /* 0402 3440 */

   y = ( x > MAX ) ? ( x++ ) : 0;                                                       /*      3440 */


   /***********************************************************************/
   /* 0403 '%s' may be modified and accessed between sequence points      */
   /*      - evaluation order unspecified.                                */
   /***********************************************************************/

   y = rule_1302a( &x ) + x;                                                            /* 0403       */
   y = buf[ x ] + rule_1302a( &x );                                                     /* 0403       */

   /* The prototype of rule_1302c declares a "pointer to const int16_t"
      parameter and so there is no possibility of x being modified */

   y = rule_1302c( &x ) + x;                                                            /*            */
   y = buf[ x ] + rule_1302c( &x );                                                     /*            */

   return 1;
}

static int16_t rule_1302a( int16_t *p )
{
   *p = 1;

   return 1;
}

static int16_t rule_1302b( int16_t *p )
{
   *p = 2;

   return 1;
}

static int16_t rule_1302c( const int16_t *p )
{
   int16_t r;

   r = *p * 2;

   return r;
}
