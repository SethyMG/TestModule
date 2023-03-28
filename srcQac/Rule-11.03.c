/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-11.3 (Required):
 * A cast shall not be performed between a pointer to object type
 * and a pointer to a different object type
 * 
 * Implemented by messages:
 *  310   Casting to different object pointer type.
 * 
 * 3305   Pointer cast to stricter alignment.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,3408,3447

#include "misra.h"
#include "m3cmex.h"

extern    char    * ppc;
extern  int8_t    * psc;
extern uint8_t    * puc;
extern uint16_t   * pui;
extern uint32_t   * pul;
extern float32_t  * pft;

extern int16_t rule_1103( void )
{
    psc = ( int8_t   *)ppc;                 /* 0310      */        /* Compliant */
    puc = (uint8_t   *)ppc;                 /* 0310      */        /* Compliant */
    pui = (uint16_t  *)ppc;                 /* 0310 3305 */
    pul = (uint32_t  *)ppc;                 /* 0310 3305 */
    pft = (float32_t *)ppc;                 /* 0310 3305 */

    ppc = (    char  *)psc;                 /* 0310      */        /* Compliant */
    puc = (uint8_t   *)psc;                 /* 0310      */        /* Compliant */
    pui = (uint16_t  *)psc;                 /* 0310 3305 */
    pul = (uint32_t  *)psc;                 /* 0310 3305 */
    pft = (float32_t *)psc;                 /* 0310 3305 */

    ppc = (    char  *)puc;                 /* 0310      */        /* Compliant */
    psc = (  int8_t  *)puc;                 /* 0310      */        /* Compliant */
    pui = (uint16_t  *)puc;                 /* 0310 3305 */
    pul = (uint32_t  *)puc;                 /* 0310 3305 */
    pft = (float32_t *)puc;                 /* 0310 3305 */

    ppc = (    char  *)pui;                 /* 0310      */        /* Compliant */
    psc = (  int8_t  *)pui;                 /* 0310      */        /* Compliant */
    puc = (uint8_t   *)pui;                 /* 0310      */        /* Compliant */
    pul = (uint32_t  *)pui;                 /* 0310 3305 */
    pft = (float32_t *)pui;                 /* 0310 3305 */

    ppc = (    char  *)pul;                 /* 0310      */        /* Compliant */
    psc = (  int8_t  *)pul;                 /* 0310      */        /* Compliant */
    puc = (uint8_t   *)pul;                 /* 0310      */        /* Compliant */
    pui = (uint16_t  *)pul;                 /* 0310      */
    pft = (float32_t *)pul;                 /* 0310      */

    ppc = (    char  *)pft;                 /* 0310      */        /* Compliant */
    psc = (  int8_t  *)pft;                 /* 0310      */        /* Compliant */
    puc = (uint8_t   *)pft;                 /* 0310      */        /* Compliant */
    pui = (uint16_t  *)pft;                 /* 0310      */
    pul = (uint32_t  *)pft;                 /* 0310      */

    return 0;
}
