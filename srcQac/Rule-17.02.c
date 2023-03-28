/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-17.2 (Required):
 * Functions shall not call themselves, either directly or
 * indirectly
 * 
 * Implemented by messages:
 * 1520   Functions are indirectly recursive.
 * 
 * 3670   Recursive call to function containing this call.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static void rule_1702a( int16_t x );
static void rule_1702b( int16_t x );
static void rule_1702c( int16_t x );
static void rule_1702d( int16_t x );
static void rule_1702e( int16_t x );

extern int16_t rule_1702( void )
{
   rule_1702a( 5 );
   rule_1702e( 5 );
   return 1;
}

static void rule_1702a( int16_t x )
{
   if ( x > 0 )
   {
      --x;
      rule_1702b( x );
   }
}

static void rule_1702b( int16_t x )
{
   if ( x > 0 )
   {
      --x;
      rule_1702c( x );
   }
}

static void rule_1702c( int16_t x )
{
   if ( x > 0 )
   {
      --x;
      rule_1702d( x );
   }
}

static void rule_1702d( int16_t x )
{
   if ( x > 0 )
   {
      --x;
      rule_1702a( x );
   }
}

static void rule_1702e( int16_t x )
{
   if ( x > 0 )
   {
      --x;
      rule_1702e( x );                          /* 3670 */
   }
}
