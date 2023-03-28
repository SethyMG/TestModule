/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.2 (Required):
 * The ', " or \ characters and the /* or // character sequences
 * shall not occur in a header file name
 * 
 * Implemented by messages:
 *  813   [U] Using any of the characters ' " or /* in '#include
 *        <%s>' gives undefined behaviour.
 * 
 *  814   [U] Using the characters ' or /* in '#include "%s"'
 *        gives undefined behaviour.
 * 
 *  831   [E] Use of '\\' in this '#include' line is a PC
 *        extension - this usage is non-portable.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

#if 0
/* No header files exist which correspond to
   the following #include directives.
   QAC will generate Hard Errors (Level 9)
   if this code block is not excluded      */

#include <John's.h>                     /* Non-compliant * 0813 0818 */
#include <Fred.h/*temporary*/>          /* Non-compliant * 0813 0818 */

#include "John's.h"                     /* Non-compliant * 0814 0818 */
#include "Fred.h/*temporary*/"          /* Non-compliant * 0814 0818 */

#include ".\abc.h"                      /* Non-compliant * 0831 0818 */

#endif


extern int16_t rule_2002( void )
{
   return 1;
}
