/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.6 (Advisory):
 * typedefs that indicate size and signedness should be used in
 * place of the basic numerical types
 * 
 * Implemented by message:
 * 5209   Use of basic type '%s'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983

#include "misra.h"
#include "m3cmex.h"

typedef unsigned char UCHAR;

extern int16_t dir_0406( void )
{
   int8_t                 ys8a  = 1;
   int16_t                ys16a = 1;
   int32_t                ys32a;

   char                   xpca;                 /*      */

   signed char            xsca;                 /* 5209 */
   short                  xssa;                 /* 5209 */
   signed short           xssb;                 /* 5209 */
   short int              xssc;                 /* 5209 */
   signed short int       xssd;                 /* 5209 */
   int                    xsia;                 /* 5209 */
   signed                 xsib;                 /* 5209 */
   signed int             xsic;                 /* 5209 */
   long                   xsla;                 /* 5209 */
   signed long            xslb;                 /* 5209 */
   long int               xslc;                 /* 5209 */
   signed long int        xsld;                 /* 5209 */
   long long              xsxa;                 /* 5209 */
   long long int          xsxb;                 /* 5209 */
   signed long long       xsxc;                 /* 5209 */
   signed long long int   xsxd;                 /* 5209 */

   unsigned char          xuca;                 /* 5209 */
   unsigned short         xusa;                 /* 5209 */
   unsigned short int     xusb;                 /* 5209 */
   unsigned               xuia;                 /* 5209 */
   unsigned int           xuib;                 /* 5209 */
   unsigned long          xula;                 /* 5209 */
   unsigned long int      xulb;                 /* 5209 */
   unsigned long long     xuxa;                 /* 5209 */
   unsigned long long int xuxb;                 /* 5209 */

   float                  xfta;                 /* 5209 */
   double                 xdba;                 /* 5209 */
   long double            xlda;                 /* 5209 */

   struct bit_field
   {
      signed int   bit2 : 7;
      unsigned int bit3 : 2;
   };

   xfta = ( float )ys8a;                        /* 5209 */

   return 0;
}
