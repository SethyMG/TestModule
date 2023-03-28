/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.13.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.13 (Advisory):
 * A pointer should point to a const-qualified type whenever
 * possible
 * 
 * Implemented by message:
 * 3673   The object addressed by the pointer parameter '%s' is
 *        not modified and so the pointer could be of type
 *        'pointer to const'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983

#include "misra.h"
#include "m3cmex.h"

static int16_t rule_0813a( int16_t pba[],
                       int16_t pbb[],
                       int16_t pbc[],
                       int16_t pbd[],
                       int16_t pbe[],
                       const int16_t * const p );

static void rule_0813b( int16_t *x );
static int16_t  rule_0813c( const int16_t *x );
static void rule_0813d( void );


extern int16_t rule_0813( void )
{
   const int16_t ci = 99;
   int16_t ba[3] = { 1, 2, 3 };
   int16_t bb[3] = { 1, 2, 3 };
   int16_t bc[3] = { 1, 2, 3 };
   int16_t bd[3] = { 1, 2, 3 };
   int16_t be[3] = { 1, 2, 3 };

   int16_t r;

   r = rule_0813a( ba, bb, bc, bd, be, &ci );

   return r;
}

static int16_t rule_0813a(
   int16_t pba[],
   int16_t pbb[],                              /* 3673 */
   int16_t pbc[],                              /* 3673 */
   int16_t pbd[],
   int16_t pbe[],                              /* 3673 */
   const int16_t * const p )
{
   int16_t        r;
   int16_t       *pnc;
   const int16_t *pc;

   r = pba[ 1 ] + pbb[ 1 ] + pbc[ 1 ];

   rule_0813b( pba );                          /*      */       /* Prototype indicates pba is an output parameter */
   r = rule_0813c( pbb );

   pnc = pbd;                                  /*      */       /* pbd is addressed by a pointer to non-const */
   *pnc = 1;

   pc = pbe;                                   /*      */       /* pbe is addressed by a pointer to const */

   rule_0813d();

   r = *p;

   return r;
}

static void rule_0813d( void )
{
   int16_t buf[300] = {0};

   int16_t * pa = buf;
   int16_t * pb = buf;                         /*      */
   int16_t * pc = buf;                         /*      */
   int16_t * pd = buf;
   int16_t * pe = buf;                         /*      */
   const int16_t * const p = buf;
   int16_t r;
   int16_t *pnc;
   const int16_t *pci;

   r = *pa + *pb + *pc;

   rule_0813b( pa );                           /*      */       /* Prototype indicates pa is an output parameter */
   r = rule_0813c( pb );

   pnc = pd;                                   /*      */       /* pd is addressed by a pointer to non-const */
   *pnc = 1;

   pci = pe;                                   /*      */       /* pe is addressed by a pointer to const */

   r = *p;

   return;
}

static void rule_0813b( int16_t *x )
{
   *x = 0;
   return;
}

static int16_t rule_0813c( const int16_t *x )
{
   return *x;
}
