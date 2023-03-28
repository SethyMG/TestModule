#pragma PRQA_MESSAGES_OFF 3108
/* >>>------------------------------------------------------------
 * 
 * File: Rule-01.03.c,  Module: M3CM-1.0.3-QAC-8.2.2
 * 
 * RULE Rule-1.3 (Required):
 * There shall be no occurrence of undefined or critical
 * unspecified behaviour
 * 
 * Implemented by messages:
 *  160   [U] Using unsupported conversion specifier number %s.
 * 
 *  161   [U] Unknown length modifier used with 'i' or 'd'
 *        conversion specifier, number %s.
 * 
 *  162   [U] Unknown length modifier used with 'o' conversion
 *        specifier, number %s.
 * 
 *  163   [U] Unknown length modifier used with 'u' conversion
 *        specifier, number %s.
 * 
 *  164   [U] Unknown length modifier used with 'x' conversion
 *        specifier, number %s.
 * 
 *  165   [U] Unknown length modifier used with 'X' conversion
 *        specifier, number %s.
 * 
 *  166   [U] Unknown length modifier used with 'f' conversion
 *        specifier, number %s.
 * 
 *  167   [U] Unknown length modifier used with 'e' conversion
 *        specifier, number %s.
 * 
 *  168   [U] Unknown length modifier used with 'E' conversion
 *        specifier, number %s.
 * 
 *  169   [U] Unknown length modifier used with 'g' conversion
 *        specifier, number %s.
 * 
 *  170   [U] Unknown length modifier used with 'G' conversion
 *        specifier, number %s.
 * 
 *  171   [U] Unknown length modifier used with 'c' conversion
 *        specifier, number %s.
 * 
 *  172   [U] Unknown length modifier used with '%%' conversion
 *        specifier, number %s.
 * 
 *  173   [U] Unknown length modifier used with 's' conversion
 *        specifier, number %s.
 * 
 *  174   [U] Unknown length modifier used with 'n' conversion
 *        specifier, number %s.
 * 
 *  175   [U] Unknown length modifier used with 'p' conversion
 *        specifier, number %s.
 * 
 *  176   [U] Incomplete conversion specifier, number %s.
 * 
 *  177   [U] Field width of format conversion specifier exceeds
 *        509 characters.
 * 
 *  178   [U] Precision of format conversion specifier exceeds 509
 *        characters.
 * 
 *  179   [U] Argument type does not match conversion specifier
 *        number %s.
 * 
 *  184   [U] Insufficient arguments to satisfy conversion
 *        specifier, number %s.
 * 
 *  185   [U] Call contains more arguments than conversion
 *        specifiers.
 * 
 *  186   [U] A call to this function must include at least one
 *        argument.
 * 
 *  190   [U] Using unsupported conversion specifier number %s.
 * 
 *  191   [U] Unknown length modifier used with 'd/i/n' conversion
 *        specifier, number %s.
 * 
 *  192   [U] Unknown length modifier used with 'o' conversion
 *        specifier, number %s.
 * 
 *  193   [U] Unknown length modifier used with 'u' conversion
 *        specifier, number %s.
 * 
 *  194   [U] Unknown length modifier used with 'x/X' conversion
 *        specifier, number %s.
 * 
 *  195   [U] Unknown length modifier used with 'e/E/f/F/g/G'
 *        conversion specifier, number %s.
 * 
 *  196   [U] Unknown length modifier used with 's' conversion
 *        specifier, number %s.
 * 
 *  197   [U] Unknown length modifier used with 'p' conversion
 *        specifier, number %s.
 * 
 *  198   [U] Unknown length modifier used with '%%' conversion
 *        specifier, number %s.
 * 
 *  199   [U] Unknown length modifier used with '[' conversion
 *        specifier, number %s.
 * 
 *  200   [U] Unknown length modifier used with 'c' conversion
 *        specifier, number %s.
 * 
 *  201   [U] Incomplete conversion specifier, number %s.
 * 
 *  203   [U] Value of character prior to '-' in '[]' is greater
 *        than following character.
 * 
 *  204   [U] Field width of format conversion specifier exceeds
 *        509 characters.
 * 
 *  206   [U] Argument type does not match conversion specifier
 *        number %s.
 * 
 *  207   [U] 'scanf' expects address of objects being stored
 *        into.
 * 
 *  208   [U] Same character occurs in scanset more than once.
 * 
 *  235   [U] Unknown escape sequence.
 * 
 *  275   [U] Floating value is out of range for conversion to
 *        destination type.
 * 
 *  301   [u] Cast between a pointer to object and a floating
 *        type.
 * 
 *  302   [u] Cast between a pointer to function and a floating
 *        type.
 * 
 *  304   [U] The address of an array declared 'register' may not
 *        be computed.
 * 
 *  307   [u] Cast between a pointer to object and a pointer to
 *        function.
 * 
 *  309   [U] Integral type is not large enough to hold a pointer
 *        value.
 * 
 *  337   [U] String literal has undefined value. This may be a
 *        result of using '#' on \\.
 * 
 *  400   [U] '%s' is modified more than once between sequence
 *        points - evaluation order unspecified.
 * 
 *  401   [U] '%s' may be modified more than once between sequence
 *        points - evaluation order unspecified.
 * 
 *  402   [U] '%s' is modified and accessed between sequence
 *        points - evaluation order unspecified.
 * 
 *  403   [U] '%s' may be modified and accessed between sequence
 *        points - evaluation order unspecified.
 * 
 *  475   [u] Operand of 'sizeof' is an expression designating a
 *        bit-field.
 * 
 *  543   [U] 'void' expressions have no value and may not be used
 *        in expressions.
 * 
 *  544   [U] The value of an incomplete 'union' may not be used.
 * 
 *  545   [U] The value of an incomplete 'struct' may not be used.
 * 
 *  602   [U] The identifier '%s' is reserved for use by the
 *        library.
 * 
 *  623   [U] '%s' has incomplete type and no linkage - this is
 *        undefined.
 * 
 *  625   [U] '%s' has been declared with both internal and
 *        external linkage - the behaviour is undefined.
 * 
 *  626   [U] '%s' has different type to previous declaration
 *        (which is no longer in scope).
 * 
 *  630   [U] More than one definition of '%s' (with external
 *        linkage).
 * 
 *  632   [U] Tentative definition of '%s' with internal linkage
 *        cannot have unknown size.
 * 
 *  636   [U] There are no named members in this 'struct' or
 *        'union'.
 * 
 *  654   [U] Using 'const' or 'volatile' in a function return
 *        type is undefined.
 * 
 *  658   [U] Parameter cannot have 'void' type.
 * 
 *  661   [U] '%s()' may not have a storage class specifier of
 *        'static' when declared at block scope.
 * 
 *  667   [U] '%s' is declared as a typedef and may not be
 *        redeclared as an object at an inner scope without an
 *        explicit type specifier.
 * 
 *  668   [U] '%s' is declared as a typedef and may not be
 *        redeclared as a member of a 'struct' or 'union' without
 *        an explicit type specifier.
 * 
 *  672   [U] The initializer for a 'struct', 'union' or array is
 *        not enclosed in braces.
 * 
 *  676   [u] Array element is of function type. Arrays cannot be
 *        constructed from function types.
 * 
 *  678   [u] Array element is array of unknown size. Arrays
 *        cannot be constructed from incomplete types.
 * 
 *  680   [u] Array element is 'void' or an incomplete 'struct' or
 *        'union'. Arrays cannot be constructed from incomplete
 *        types.
 * 
 *  706   [U] Label '%s' is not unique within this function.
 * 
 *  745   [U] 'return;' found in '%s()', which has been defined
 *        with a non-'void' return type.
 * 
 *  777   [U] External identifier does not differ from other
 *        identifier(s) (e.g. '%s') within the specified number of
 *        significant characters.
 * 
 *  779   [U] Identifier does not differ from other identifier(s)
 *        (e.g. '%s') within the specified number of significant
 *        characters.
 * 
 *  809   [U] The '#include' preprocessing directive has not been
 *        followed by <h-char-sequence> or "s-char-sequence".
 * 
 *  813   [U] Using any of the characters ' " or /* in '#include
 *        <%s>' gives undefined behaviour.
 * 
 *  814   [U] Using the characters ' or /* in '#include "%s"'
 *        gives undefined behaviour.
 * 
 *  836   [U] Definition of macro named 'defined'.
 * 
 *  837   [U] Use of '#undef' to remove the operator 'defined'.
 * 
 *  848   [U] Attempting to #undef '%s', which is a predefined
 *        macro name.
 * 
 *  853   [U] Macro arguments contain a sequence of tokens that
 *        has the form of a preprocessing directive.
 * 
 *  854   [U] Attempting to #define '%s', which is a predefined
 *        macro name.
 * 
 *  864   [U] '#line' directive specifies line number which is not
 *        in the range 1 to 32767.
 * 
 *  865   [U] '#line' directive is badly formed.
 * 
 *  867   [U] '#line' has not been followed by a line number.
 * 
 *  872   [U] Result of '##' operator is not a legal preprocessing
 *        token.
 * 
 *  874   [U] Character string literal and wide character string
 *        literal are adjacent.
 * 
 *  885   [U] The token 'defined' is generated in the expansion of
 *        this macro.
 * 
 *  887   [U] Use of 'defined' must match either
 *        'defined(identifier)' or 'defined identifier'.
 * 
 *  888   [U] 'defined' requires an identifier as an argument.
 * 
 *  914   [U] Source file does not end with a newline character.
 * 
 *  915   [U] Source file ends with a backslash character followed
 *        by a newline.
 * 
 *  942   [U] A * can only be used to specify array size within
 *        function prototype scope.
 * 
 * 1331   Type or number of arguments doesn't match previous use
 *        of the function.
 * 
 * 1332   Type or number of arguments doesn't match prototype
 *        found later.
 * 
 * 1333   Type or number of arguments doesn't match function
 *        definition found later.
 * 
 * 1509   '%1s' has external linkage and has multiple definitions.
 * 
 * 1510   '%1s' has external linkage and has incompatible
 *        declarations.
 * 
 * 2800   Constant: Overflow in signed arithmetic operation.
 * 
 * 2810   Constant: Dereference of NULL pointer.
 * 
 * 2820   Constant: Arithmetic operation on NULL pointer.
 * 
 * 2830   Constant: Division by zero.
 * 
 * 2840   Constant: Dereference of an invalid pointer value.
 * 
 * 3113   [U] 'return' statement includes no expression but
 *        function '%s()' is implicitly of type 'int'.
 * 
 * 3114   [U] Function '%s()' is implicitly of type 'int' but ends
 *        without returning a value.
 * 
 * 3239   [U] inline function '%1s' has external linkage, but is
 *        not defined within this translation unit.
 * 
 * 3311   [u] An earlier jump to this statement will bypass the
 *        initialization of local variables.
 * 
 * 3312   [u] This goto statement will jump into a previous block
 *        and bypass the initialization of local variables.
 * 
 * 3319   [U] Function called with number of arguments which
 *        differs from number of parameters in definition.
 * 
 * 3320   Type of argument no. %s differs from its type in
 *        definition of function.
 * 
 * 3437   [u] The assert macro has been suppressed to call a
 *        function of that name.
 * 
 * 3438   [U] #undef'ing the assert macro to call a function of
 *        that name causes undefined behaviour.
 * 
 * <<<------------------------------------------------------------ */


#include "m3cmex.h"

extern int16_t obj0103;                         /* 3447 */

extern int16_t rule_0103( void )
{
   return 0;
}
