/* >>>------------------------------------------------------------
 * 
 * File: Dir-04.01.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Dir-4.1 (Required):
 * Run-time failures shall be minimized
 * 
 * Implemented by messages:
 * 2791   Definite: Right hand operand of shift operator is
 *        negative or too large.
 * 
 * 2792   Apparent: Right hand operand of shift operator is
 *        negative or too large.
 * 
 * 2801   Definite: Overflow in signed arithmetic operation.
 * 
 * 2802   Apparent: Overflow in signed arithmetic operation.
 * 
 * 2811   Definite: Dereference of NULL pointer.
 * 
 * 2812   Apparent: Dereference of NULL pointer.
 * 
 * 2821   Definite: Arithmetic operation on NULL pointer.
 * 
 * 2822   Apparent: Arithmetic operation on NULL pointer.
 * 
 * 2831   Definite: Division by zero.
 * 
 * 2832   Apparent: Division by zero.
 * 
 * 2841   Definite: Dereference of an invalid pointer value.
 * 
 * 2842   Apparent: Dereference of an invalid pointer value.
 * 
 * 2845   Constant: Maximum number of characters to be written is
 *        larger than the target buffer size.
 * 
 * 2846   Definite: Maximum number of characters to be written is
 *        larger than the target buffer size.
 * 
 * 2847   Apparent: Maximum number of characters to be written is
 *        larger than the target buffer size.
 * 
 * 2871   Infinite loop identified.
 * 
 * 2872   This loop, if entered, will never terminate.
 * 
 * 2877   This loop will never be executed more than once.
 * 
 * <<<------------------------------------------------------------ */




#include "misra.h"
#include "m3cmex.h"

extern int16_t dir_0401( void )
{
   return 1;
}
