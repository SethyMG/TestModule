/* >>>------------------------------------------------------------
 * 
 * File: Rule-14.02.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-14.2 (Required):
 * A for loop shall be well-formed
 * 
 * Implemented by messages:
 * 2461   Loop control variable, %s, has file scope.
 * 
 * 2462   The variable initialized in the first expression of this
 *        'for' statement is not the variable identified as the
 *        'loop control variable' (%s).
 * 
 * 2463   The variable incremented in the third expression of this
 *        'for' statement is not the variable identified as the
 *        'loop control variable' (%s).
 * 
 * 2464   Loop control variable, %s, modified twice in for-loop
 *        header.
 * 
 * 2467   Loop control variable, %s, is not modified inside loop.
 * 
 * 2469   Loop control variable in this 'for' statement, %s, is
 *        modified in the body of the loop.
 * 
 * 2471   Unable to identify a loop control variable.
 * 
 * 2472   More than one possible loop control variable.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1402( void )
{
    int16_t i;
    int16_t j;

    for (;;)
    {
        if (bla)
        {
            break;
        }
    }

    bla = get_bool();

    for (i = 0; i < 10; ++i)
    {
    }

    i = 0;
    for (     ; i < 10; ++i)
    {
    }

    for (s16a = 0; s16a < 10; ++s16a)                                           /* 2461           */
    {
    }

    j = get_s16();
    for (i = 0; j < 10; ++j)                                                    /* 2462           */
    {
        ++i;
    }

    j = get_s16();
    for (i = 0; i++ < 10; ++j)                                                  /* 2463 3440      */
    {
    }

    for (i = 0; ++i < 10; ++i)                                                  /* 2464 3440      */
    {
    }

    for (i = 0; (i < 10) || bla; ++i)
    {
    }

    for (i = 0; i < 10; ++i)
    {
        ++i;                                                                    /* 2469           */
    }

    for (i = get_s16(); i < s16a; ++j)                                          /* 2471           */
    {
        ++i;
    }

    for (i = 0, j = 5; (i < get_s16()) && (j < 10); ++i, ++j)                   /* 2472 3418 3418 */
    {
    }

    return 1;
}
