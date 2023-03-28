/* >>>------------------------------------------------------------
 * 
 * File: Rule-06.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-6.2 (Required):
 * Single-bit named bit fields shall not be of a signed type
 * 
 * Implemented by messages:
 * 3660   Named bit-field consisting of a single bit declared with
 *        a signed type.
 * 
 * 3665   Unnamed bit-field consisting of a single bit declared
 *        with a signed type.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


struct T02 { signed char         bsc: 1; uint16_t x; };             /*      0635 3660 */
struct T03 { unsigned char       buc: 1; uint16_t x; };             /*      0635      */

struct X02 { signed char            : 1; uint16_t x; };             /*      0635 3665 */
struct X03 { unsigned char       buc: 1; uint16_t x; };             /*      0635      */

struct T12 { signed short        bss: 1; uint16_t x; };             /*      0635 3660 */
struct T13 { unsigned short      bus: 1; uint16_t x; };             /*      0635      */

struct X12 { signed short           : 1; uint16_t x; };             /*      0635 3665 */
struct X13 { unsigned short      bus: 1; uint16_t x; };             /*      0635      */

struct T22 { signed int          bsi: 1; uint16_t x; };             /*           3660 */
struct T23 { unsigned int        bui: 1; uint16_t x; };             /*                */

struct X22 { signed int             : 1; uint16_t x; };             /*           3665 */
struct X23 { unsigned int        bui: 1; uint16_t x; };             /*                */

struct T32 { signed long         bsl: 1; uint16_t x; };             /*      0635 3660 */
struct T33 { unsigned long       bul: 1; uint16_t x; };             /*      0635      */

struct X32 { signed long            : 1; uint16_t x; };             /*      0635 3665 */
struct X33 { unsigned long       bul: 1; uint16_t x; };             /*      0635      */


extern int16_t rule_0602( void )
{
   return 0;
}
