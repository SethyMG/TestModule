/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.04.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-20.4 (Required):
 * A macro shall not be defined with the same name as a keyword
 * 
 * Implemented by message:
 * 3439   Macro redefines a keyword.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2004( void )
{
    return 1;
}

#define auto AUTO                                     /* 3439      */
#define break BREAK                                   /* 3439      */
#define case CASE                                     /* 3439      */
#define char CHAR                                     /* 3439      */
#define const CONST                                   /* 3439      */
#define continue CONTINUE                             /* 3439      */
#define default DEFAULT                               /* 3439      */
#define do DO                                         /* 3439      */
#define double DOUBLE                                 /* 3439 5209 */
#define else ELSE                                     /* 3439      */
#define enum ENUM                                     /* 3439      */
#define extern EXTERN                                 /* 3439      */
#define float FLOAT                                   /* 3439 5209 */
#define for FOR                                       /* 3439      */
#define goto GOTO                                     /* 3439      */
#define if IF                                         /* 3439      */
#define int INT                                       /* 3439 5209 */
#define long LONG                                     /* 3439 5209 */
#define register REGISTER                             /* 3439      */
#define return RETURN                                 /* 3439      */
#define short SHORT                                   /* 3439 5209 */
#define signed SIGNED                                 /* 3439 5209 */
#define sizeof XSIZEOF                                /* 3439      */
#define static STATIC                                 /* 3439      */
#define struct STRUCT                                 /* 3439      */
#define switch SWITCH                                 /* 3439      */
#define typedef TYPEDEF                               /* 3439      */
#define union UNION                                   /* 3439      */
#define unsigned UNSIGNED                             /* 3439 5209 */
#define void VOID                                     /* 3439      */
#define volatile VOLATILE                             /* 3439      */
#define while WHILE                                   /* 3439      */

/* additional keywords required for C99 */
#define inline INLINE                                 /* 3439      */
#define _Bool BOOL                                    /* 3439      */
#define _Complex COMPLEX                              /*      0602 */
#define _Imaginary IMAGINARY                          /*      0602 */

