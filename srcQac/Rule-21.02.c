/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-21.2 (Required):
 * A reserved identifier or macro name shall not be declared
 * 
 * Implemented by messages:
 *  602   [U] The identifier '%s' is reserved for use by the
 *        library.
 * 
 * 4602   The identifier '%1s' is declared as a macro in '<%2s>'.
 * 
 * 4603   The object/function '%1s'is being defined with the same
 *        name as an ordinary identifier defined in '<%2s>'.
 * 
 * 4604   The object/function '%1s' is being declared with the
 *        same name as an ordinary identifier defined in '<%2s>'.
 * 
 * 4605   The typedef '%1s' is also defined in '<%2s>'.
 * 
 * 4606   The typedef '%1s' has the same name as another ordinary
 *        identifier in '<%2s>'.
 * 
 * 4607   The enum constant '%1s' has the same name as another
 *        ordinary identifier in '<%2s>'.
 * 
 * 4608   The tag '%1s' is also defined in '<%2s>'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983,2984

#include "misra.h"
#include "m3cmex.h"


static float32_t sqrt( float32_t d );           /* 4604 */
static int16_t   _rule_2102a( void );           /*      */

enum { EOF = -1 };                              /* 4602 */
enum { cos = 55 };                              /* 4607 */
enum tm { t1, t2, t3 };                         /* 4608 */

typedef int FILE;                               /* 4605 */
typedef signed int sin;                         /* 4606 */


extern int16_t rule_2102( void )
{
   float32_t  f;
   FILE       r;
   sin        s = 5;

   f = sqrt( 1.44F );
   r = _rule_2102a();
   r = r + s;


   return r;
}

static float32_t sqrt( float32_t d )            /* 4603 */
{
   return( d );
}

static int16_t _rule_2102a( void )              /* 0602 */
{
   return 1;
}
