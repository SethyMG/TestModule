/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.05.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-5.5 (Required):
 * Identifiers shall be distinct from macro names
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

            /* 1234567890123456789012345678901********* Characters */
#define        low_pressure_turbine_temperature_1 lp_tb_temp_1
static int32_t low_pressure_turbine_temperature_2;                      /*      */      /* Not compliant */
