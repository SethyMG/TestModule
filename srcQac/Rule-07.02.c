/* >>>------------------------------------------------------------
 * 
 * File: Rule-07.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-7.2 (Required):
 * A "u" or "U" suffix shall be applied to all integer constants
 * that are represented in an unsigned type
 * 
 * Implemented by message:
 * 1281   Integer literal constant is of an unsigned type but does
 *        not include a "U" suffix.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 339,3112

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0702( void )
{
/* Decimal - no suffix */

                                                    /**********************/
                                                    /* sizeof(int) = 2    */
                                                    /**********************/

   32767;                       /*        */        /* int                */
   32768;                       /*        */        /* long               */
   2147483647;                  /*        */        /* long               */
   2147483648;                  /*        */        /* long long          */
   4294967295;                  /*        */        /* long long          */

/* Decimal - L suffix */

   32767L;                      /*        */        /* long               */
   32768L;                      /*        */        /* long               */
   2147483647L;                 /*        */        /* long               */
   2147483648L;                 /*        */        /* long long          */
   4294967295L;                 /*        */        /* long long          */

/* Hexadecimal - no suffix */
   0x7FFF;                      /*        */        /* int                */
   0x8000;                      /* 1281   */        /* unsigned int       */
   0xFFFF;                      /* 1281   */        /* unsigned int       */
   0x10000;                     /*        */        /* long               */
   0x7FFFFFFF;                  /*        */        /* long               */
   0x80000000;                  /* 1281   */        /* unsigned long      */
   0xFFFFFFFF;                  /* 1281   */        /* unsigned long      */

/* Hexadecimal - L suffix */
   0x7FFFL;                     /*        */        /* long               */
   0x8000L;                     /*        */        /* long               */
   0xFFFFL;                     /*        */        /* long               */
   0x10000L;                    /*        */        /* long               */
   0x7FFFFFFFL;                 /*        */        /* long               */
   0x80000000L;                 /* 1281   */        /* unsigned long      */
   0xFFFFFFFFL;                 /* 1281   */        /* unsigned long      */


/* Octal - no suffix */
   077777;                      /*        */        /* int                */
   0100000;                     /* 1281   */        /* unsigned int       */
   0177777;                     /* 1281   */        /* unsigned int       */
   0200000;                     /*        */        /* long               */
   017777777777;                /*        */        /* long               */
   020000000000;                /* 1281   */        /* unsigned long      */
   037777777777;                /* 1281   */        /* unsigned long      */

/* Octal - L suffix */
   077777L;                     /*        */        /* long               */
   0100000L;                    /*        */        /* long               */
   0177777L;                    /*        */        /* long               */
   0200000L;                    /*        */        /* long               */
   017777777777L;               /*        */        /* long               */
   020000000000L;               /* 1281   */        /* unsigned long      */
   037777777777L;               /* 1281   */        /* unsugned long      */

   return 0;
}
