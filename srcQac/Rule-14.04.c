/* >>>------------------------------------------------------------
 * 
 * File: Rule-14.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-14.4 (Required):
 * The controlling expression of an if-statement and the
 * controlling expression of an iteration-statement shall have
 * essentially Boolean type
 * 
 * Implemented by message:
 * 3344   Controlling expression is not an 'essentially Boolean'
 *        expression.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1404( void )
{
   uint16_t ux;
   uint16_t uy;

   ux = get_u16();
   if ( ux )                            /* 3344      */
   {
   }

   ux = get_u16();
   while (ux)                           /* 3344      */
   {
       --ux;
   }

   ux = get_u16();
   do
   {
       --ux;
   } while (ux);                        /* 3344      */


   for (ux = 10; ux; --ux)              /* 3344      */
   {
   }

   ux = get_u16();
   s16c = ux ? s16a : s16b;             /* 3344 4559 */


   return s16r;
}
