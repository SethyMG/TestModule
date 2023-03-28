/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.12.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-8.12 (Required):
 * Within an enumerator list, the value of an implicitly-specified
 * enumeration constant shall be unique
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1056

#include "misra.h"
#include "m3cmex.h"

enum T1 { A1=3, A2, A3, A4=5 };                 /*      */
enum T2 { B1=2, B2=0, B3, B4 };                 /*      */

