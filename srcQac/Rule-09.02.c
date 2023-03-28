/* >>>------------------------------------------------------------
 * 
 * File: Rule-09.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-9.2 (Required):
 * The initializer for an aggregate or union shall be enclosed in
 * braces
 * 
 * Implemented by messages:
 *  693   Struct initializer is missing the optional {.
 * 
 *  694   Array initializer is missing the optional {.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 750,759,1053,1292,1298,1265

#include "misra.h"
#include "m3cmex.h"

struct base1
{
   int16_t i;
   int16_t j;
};

struct base2
{
   int16_t x[3];
   int16_t y[2];
};

extern int16_t rule_0902( void )
{
   struct base1 s1      = { 0 };                                                 /*      */
   struct base1 s2[2]   = { {1, 2}, {3, 4} };                                    /*      */
   struct base1 s3[2]   = {  1, 2,   3, 4  };                                    /* 0693 */
   struct base1 s4[2]   = { {1, 2},  3, 4  };                                    /* 0693 */
   struct base1 s5[2]   = {  1, 2 , {3, 4} };                                    /* 0693 */

   int16_t bufa[2][3]       = { {1, 2, 3}, {4, 5, 6} };                          /*      */
   int16_t bufb[2][3]       = {  1, 2, 3 ,  4, 5, 6  };                          /* 0694 */
   int16_t bufc[2][3]       = { {1, 2, 3},  4, 5, 6  };                          /* 0694 */
   int16_t bufd[2][3]       = {  1, 2, 3 , {4, 5, 6} };                          /* 0694 */

   int16_t y1[3][2] = { 1, 2, 0, 0, 5, 6 };                                      /* 0694 */
   int16_t y2[3][2] = { { 1, 2 }, { 0 }, { 5, 6 } };                             /*      */
   int16_t y3[3][2] = { { 1, 2 }, { 0, 0 }, { 5, 6 } };                          /*      */

   int16_t z1[2][2] = { { 0 }, [1][1] = 1 };                                     /*      */
   int16_t z2[2][2] = { { 0 }, [1][1] = 1, [1][0] = 0 };                         /*      */
   int16_t z3[2][2] = { { 0 }, [1][0] = 0, 1 };                                  /*      */           /* Non-compliant */
   int16_t z4[2][2] = { [0][1] = 0, { 0, 1 } };                                  /*      */

   struct base2 st1      = { {1, 2, 3}, {4, 5} };                                /*      */
   struct base2 st2      = {  1, 2, 3 , {4, 5} };                                /* 0694 */
   struct base2 st3      = { {1, 2, 3},  4, 5  };                                /* 0694 */
   struct base2 st4      = {  1, 2, 3 ,  4, 5  };                                /* 0694 */
   struct base2 st5[2]   = {{ {1, 2, 3}, {4, 5} }, { {1, 2, 3}, {4, 5} }};       /*      */
   struct base2 st6[2]   = {{  1, 2, 3 , {4, 5} }, { {1, 2, 3}, {4, 5} }};       /* 0694 */
   struct base2 st7[2]   = {{  1, 2, 3 , {4, 5} }, {  1, 2, 3 , {4, 5} }};       /* 0694 */

   int16_t a1[3][2]         = { 1, 2, 0, 0, 5, 6 };                              /* 0694 */
   int16_t a2[3][2]         = { { 1, 2 }, { 0 }, { 5, 6 } };                     /*      */
   int16_t a3[3][2]         = { { 1, 2 }, { 0, 0 }, { 5, 6 } };                  /*      */

   float32_t fa[3][2] = { 0 };                                                   /*      */
   float32_t fb[3][2] = { { 0 }, { 0 }, { 0 } };                                 /*      */
   float32_t bc[3][2] =
   {
      { 0.0, 0.0 },
      { 0.0, 0.0 },
      { 0.0, 0.0 }
   };                                                                            /*      */
   union u1
   {
      int16_t i;
      float32_t f;
   } u = { 0 };                                                                  /*      */

   struct ST
   {
      uint16_t len;
      char buf[8];
   } s[3] =
   {
      { 5u, { 'a', 'b', 'c', 'd', 'e', ' ', ' ', ' ' } },
      { 2u, { 0 } },
      { .len = 0u }                                                              /*      */
   };                                                                            /*      */

   float32_t f1[3][2] = { 0 };                                                   /*      */
   float32_t f2[3][2] = { { 0 }, { 0 }, { 0 } };                                 /*      */
   float32_t f3[3][2] = { { 0.0f, 0.0f },
                          { 0.0f, 0.0f },
                          { 0.0f, 0.0f }
                        };                                                       /*      */
   union u2 {
      int16_t i;
      float32_t f;
   } ux = { 0 };                                                                 /*      */

   struct s1 {
      uint16_t len;
      char buf[8];
   } sx[3] = {
                { 5u, { 'a', 'b', 'c', 'd', 'e', '\0', '\0', '\0' } },
                { 2u, { 0 } },
                { .len = 0u }                                                    /*      */
             };                                                                  /*      */

   return 0;
}
