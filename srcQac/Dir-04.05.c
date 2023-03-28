/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.5 (Advisory):
 * Identifiers in the same name space with overlapping visibility
 * should be typographically unambiguous
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */




#include "misra.h"
#include "m3cmex.h"

extern int16_t dir_0405( void )
{
    int32_t id1_a_b_c;
    int32_t id1_abc;                            /* Non-compliant */
    int32_t id2_abc;
    int32_t id2_ABC;                            /* Non-compliant */
    int32_t id3_a_bc;
    int32_t id3_ab_c;                           /* Non-compliant */
    int32_t id4_I;
    int32_t id4_1;                              /* Non-compliant */
    int32_t id5_Z;
    int32_t id5_2;                              /* Non-compliant */
    int32_t id6_O;
    int32_t id6_0;                              /* Non-compliant */
    int32_t id7_B;
    int32_t id7_8;                              /* Non-compliant */
    int32_t id8_rn;
    int32_t id8_m;                              /* Non-compliant */
    int32_t id9_rn;
    struct ST {
        int32_t id9_m;                          /* Compliant */
    };

    return 1;
}
