/* >>>------------------------------------------------------------
 * 
 * File: Rule-10.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-10.5 (Advisory):
 * The value of an expression should not be cast to an
 * inappropriate essential type
 * 
 * Implemented by messages:
 * 4301   An expression of 'essentially Boolean' type (%1s) is
 *        being cast to character type '%2s'.
 * 
 * 4302   An expression of 'essentially Boolean' type (%1s) is
 *        being cast to enum type '%2s'.
 * 
 * 4303   An expression of 'essentially Boolean' type (%1s) is
 *        being cast to signed type '%2s'.
 * 
 * 4304   An expression of 'essentially Boolean' type (%1s) is
 *        being cast to unsigned type '%2s'.
 * 
 * 4305   An expression of 'essentially Boolean' type (%1s) is
 *        being cast to floating type '%2s'.
 * 
 * 4310   An expression of 'essentially character' type (%1s) is
 *        being cast to Boolean type, '%2s'.
 * 
 * 4312   An expression of 'essentially character' type (%1s) is
 *        being cast to enum type, '%2s'.
 * 
 * 4315   An expression of 'essentially character' type (%1s) is
 *        being cast to floating type, '%2s'.
 * 
 * 4320   An expression of 'essentially enum' type (%1s) is being
 *        cast to Boolean type, '%2s'.
 * 
 * 4322   An expression of 'essentially enum' type (%1s) is being
 *        cast to a different enum type, '%2s'.
 * 
 * 4330   An expression of 'essentially signed' type (%1s) is
 *        being cast to Boolean type '%2s'.
 * 
 * 4332   An expression of 'essentially signed' type (%1s) is
 *        being cast to enum type, '%2s'.
 * 
 * 4340   An expression of 'essentially unsigned' type (%1s) is
 *        being cast to Boolean type '%2s'.
 * 
 * 4342   An expression of 'essentially unsigned' type (%1s) is
 *        being cast to enum type '%2s'.
 * 
 * 4350   An expression of 'essentially floating' type (%1s) is
 *        being cast to Boolean type '%2s'.
 * 
 * 4351   An expression of 'essentially floating' type (%1s) is
 *        being cast to character type '%2s'.
 * 
 * 4352   An expression of 'essentially floating' type (%1s) is
 *        being cast to enum type, '%2s'.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3112,3408

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1005( void )
{
    (BL)bla;                                    /*      */
    (PC)bla;                                    /* 4301 */
    (N1)bla;                                    /* 4302 */
    (SI)bla;                                    /* 4303 */
    (UI)bla;                                    /* 4304 */
    (FT)bla;                                    /* 4305 */

    (BL)pca;                                    /* 4310 */
    (PC)pca;                                    /*      */
    (N1)pca;                                    /* 4312 */
    (SI)pca;                                    /*      */
    (UI)pca;                                    /*      */
    (FT)pca;                                    /* 4315 */

    (BL)n1a;                                    /* 4320 */
    (PC)n1a;                                    /*      */
    (N2)n1a;                                    /* 4322 */
    (SI)n1a;                                    /*      */
    (UI)n1a;                                    /*      */
    (FT)n1a;                                    /*      */

    (BL)sia;                                    /* 4330 */
    (PC)sia;                                    /*      */
    (N1)sia;                                    /* 4332 */
    (SI)sia;                                    /*      */
    (UI)sia;                                    /*      */
    (FT)sia;                                    /*      */

    (BL)uia;                                    /* 4340 */
    (PC)uia;                                    /*      */
    (N1)uia;                                    /* 4342 */
    (SI)uia;                                    /*      */
    (UI)uia;                                    /*      */
    (FT)uia;                                    /*      */

    (BL)fta;                                    /* 4350 */
    (PC)fta;                                    /* 4351 */
    (N1)fta;                                    /* 4352 */
    (SI)fta;                                    /*      */
    (UI)fta;                                    /*      */
    (FT)fta;                                    /*      */

    return 0;
}
