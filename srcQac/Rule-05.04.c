/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.4 (Required):
 * Macro identifiers shall be distinct
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

     /* 1234567890123456789012345678901********* Characters */
#define engine_exhaust_gas_temperature_raw egt_r
#define engine_exhaust_gas_temperature_scaled egt_s                     /*      */ /* Non-compliant */

     /* 1234567890123456789012345678901********* Characters */
#define engine_exhaust_gas_temp_raw egt_r
#define engine_exhaust_gas_temp_scaled egt_s                            /*      */ /* Compliant */
