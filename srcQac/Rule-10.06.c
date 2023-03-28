/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.06.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.6 (Required):
 * The value of a composite expression shall not be assigned to an
 * object with wider essential type
 * 
 * Implemented by messages:
 * 4490   A composite expression of 'essentially signed' type
 *        (%1s) is being converted to wider signed type, '%2s' on
 *        assignment.
 * 
 * 4491   A composite expression of 'essentially unsigned' type
 *        (%1s) is being converted to wider unsigned type, '%2s'
 *        on assignment.
 * 
 * 4492   A composite expression of 'essentially floating' type
 *        (%1s) is being converted to wider floating type, '%2s'
 *        on assignment.
 * 
 * 4499   An expression which is the result of a ~ or << operation
 *        has been converted to a wider essential type on
 *        assignment.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

static int32_t   rule_1006a( void );
static uint32_t  rule_1006b( void );
static uint32_t  rule_1006c( void );
static uint32_t  rule_1006d( void );
static float64_t rule_1006e( void );

extern int16_t rule_1006( void )
{
    s32a = rule_1006a();
    u32a = rule_1006b();
    u32a = rule_1006c();
    u32a = rule_1006d();
    f64a = rule_1006e();

    return 1;
}

static int32_t rule_1006a( void )
{
    int32_t s16x = s8a + s8b;            /* 4490      */
    s16a = s8a + s8b;                    /* 4490      */
    s16f(s8a + s8b);                     /* 4490      */
    return(s8a + s8b);                   /* 4490      */
}

static uint32_t rule_1006b( void )
{
    uint32_t u16x = u8a + u8b;           /* 4491      */
    u16a = u8a + u8b;                    /* 4491      */
    u16f(u8a + u8b);                     /* 4491      */
    return(u8a + u8b);                   /* 4491      */
}

static uint32_t rule_1006c( void )
{
    uint32_t u16x = ~u8a;                /*      4499 */
    u16a = ~u8a;                         /*      4499 */
    u16f(~u8a);                          /*      4499 */
    return(~u8a);                        /*      4499 */
}

static uint32_t rule_1006d( void )
{
    uint32_t u16x = u8a << 2U;           /* 4491 4499 */
    u16a = u8a << 2U;                    /* 4491 4499 */
    u16f(u8a << 2U);                     /* 4491 4499 */
    return(u8a << 2U);                   /* 4491 4499 */
}

static float64_t rule_1006e( void )
{
    float64_t f64x = f32a + f32b;        /* 4492      */
    f64a = f32a + f32b;                  /* 4492      */
    ft64f(f32a + f32b);                  /* 4492      */
    return(f32a + f32b);                 /* 4492      */
}
