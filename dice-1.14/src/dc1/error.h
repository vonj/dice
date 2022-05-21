
/*
 *  DC1/ERROR.H
 *
 *    (c)Copyright 1992-1997 Obvious Implementations Corp.  Redistribution and
 *    use is allowed under the terms of the DICE-LICENSE FILE,
 *    DICE-LICENSE.TXT.
 */

#define EWARN	1
#define EERROR	2
#define EFATAL	3
#define ESOFT	4
#ifndef REGISTERED
#define EUNREG	5
#endif

#define EF_FATAL    (EFATAL << 12)
#define EF_WARN     (EWARN << 12)
#define EF_SOFT     (ESOFT << 12)
#define EF_ERROR    (EERROR << 12)
#define EF_UNREG    (EUNREG << 12)

#define EF_MASK     (0xF000)

#define EUNREG_AUTOINIT 		(EF_UNREG| 1)
#define EUNREG_AUTOEXIT 		(EF_UNREG| 2)
#define EUNREG_GETA4			(EF_UNREG| 3)
#define EUNREG_CHIP			(EF_UNREG| 4)
#define EUNREG_REG_ARGS 		(EF_UNREG| 5)
#define EUNREG_FLOATINGPT		(EF_UNREG| 6)
#define EFATAL_INPUT_TOO_LARGE		(EF_FATAL| 7)
#define EUNREG_RESERVED8		(EF_UNREG| 8)

#define EFATAL_UNEXPECTED_EOF		(EF_FATAL| 9)
#define EWARN_CHAR_CONST_TOO_LONG	(EF_WARN |10)
#define EWARN_NEWLINE_IN_STRING_CONST	(EF_WARN |11)
#define EWARN_ILLEGAL_CHAR		(EF_WARN |12)
#define EERROR_UNEXPECTED_TOKEN 	(EF_ERROR|13)
#define EERROR_GETA4_ILLEGAL		(EF_ERROR|14)
#define EERROR_TOO_MANY_AUTOS		(EF_ERROR|15)
#define EERROR_UNSUPPORTED_RETURN_TYPE	(EF_ERROR|16)
#define EWARN_CONSTANT_OUT_OF_RANGE	(EF_WARN |17)
#define EERROR_SIZE_MISMATCH		(EF_ERROR|18)
#define EERROR_CASE_REPEATED		(EF_ERROR|19)
#define EERROR_BLOCK_OPERATION_SOURCE	(EF_ERROR|20)
#define EERROR_BLOCK_OPERATION_DEST	(EF_ERROR|21)
#define EFATAL_DEST_NOT_LVALUE		(EF_FATAL|22)

#define EERROR_SYNTAX_ERROR_EXP 	(EF_ERROR|23)
#define EFATAL_SYNTAX_ERROR_EXP 	(EF_FATAL|23)

#define EFATAL_EXPECTED_EXP		(EF_FATAL|24)
#define EERROR_EXPECTED_RBRACE		(EF_ERROR|25)
#define EFATAL_EXPECTED_CLOSE_PARENS	(EF_FATAL|26)
#define EERROR_EXPECTED_CLOSE_BRACKET	(EF_ERROR|27)
#define EFATAL_EXPECTED_STRUCT_TAG	(EF_FATAL|28)
#define EFATAL_EXPECTED_COMMACLOSE	(EF_FATAL|29)
#define EERROR_UNDEFINED_SYMBOL 	(EF_ERROR|30)
#define EERROR_EXPECTED_INT_CONST	(EF_ERROR|31)
#define EERROR_NOT_LVALUE		(EF_ERROR|32)
#define EERROR_GOTO_LABEL_NOT_FOUND	(EF_ERROR|33)
#define EERROR_CONST_DIVMOD_0		(EF_ERROR|34)

#define EERROR_PTR_PTR_MISMATCH 	(EF_ERROR|35)
#define EWARN_PTR_PTR_MISMATCH		(EF_WARN |35)

#define EERROR_UNEXPECTED_VOID_TYPE	(EF_ERROR|36)
#define EWARN_RESULT_NOT_USED		(EF_ERROR|37)
#define EWARN_ADDR_ARRAY_REDUNDANT	(EF_WARN |38)
#define EERROR_ADDR_BITFIELD_ILLEGAL	(EF_ERROR|39)
#define EERROR_INDIRECTION_NOT_PTR	(EF_ERROR|40)
#define EERROR_ALLOCA			(EF_ERROR|41)
#define EERROR_LHS_NOT_PROCEDURE	(EF_ERROR|42)
#define EERROR_UNPROTOTYPED_CALL	(EF_ERROR|43)
#define EWARN_TOO_FEW_PARAMETERS	(EF_WARN |44)
#define EWARN_TOO_MANY_PARAMETERS	(EF_WARN |45)
#define EERROR_NOT_STRUCT_UNION 	(EF_ERROR|46)
#define EFATAL_MAX_TMP_EXCEEDED 	(EF_FATAL|47)
#define ESOFT_REG_NOT_ALLOCATED 	(EF_SOFT |48)
#define EERROR_EXPECTED_INT_TYPE	(EF_ERROR|49)
#define EERROR_ILLEGAL_PTR_ARITH	(EF_ERROR|50)
#define EERROR_ILLEGAL_PTR_CONVERSION	(EF_ERROR|51)
#define EERROR_ILLEGAL_STRUCT_CVT	(EF_ERROR|52)
#define EERROR_ILLEGAL_CAST		(EF_ERROR|53)
#define EWARN_PTR_INT_CONVERSION	(EF_WARN |54)
#define EERROR_ILLEGAL_INT_CONVERSION	(EF_ERROR|55)
#define EWARN_INT_PTR_CONVERSION	(EF_WARN |56)
#define EWARN_PTR_INT_MISMATCH		(EF_WARN |57)
#define EERROR_ILLEGAL_STRUCT_OP	(EF_ERROR|58)
#define EERROR_ILLEGAL_ASSIGNMENT	(EF_ERROR|59)
#define EERROR_ILLEGAL_PTR_INT_SIZE	(EF_ERROR|60)
#define EERROR_ILLEGAL_BITFIELD_OP	(EF_ERROR|61)
#define ESOFT_ILLEGAL_COMPARE		(EF_SOFT |62)
#define EERROR_UNDEFINED_TAG		(EF_ERROR|63)
#define EERROR_UNDEFINED_ELEMENT	(EF_ERROR|64)
#define EFATAL_NO_MEMORY		(EF_FATAL|65)
#define EFATAL_FPSTR_TOO_LONG		(EF_FATAL|66)
#define EFATAL_FPINT_TOO_LARGE		(EF_FATAL|67)

#define EERROR_EXPECTED_SEMICOLON	(EF_ERROR|68)
#define EWARN_EXPECTED_SEMICOLON	(EF_WARN |68)

#define EERROR_ILLEGAL_QUALIFIER	(EF_ERROR|69)
#define EERROR_ILLEGAL_TYPEDEF		(EF_ERROR|70)
#define EERROR_MULTIPLY_DEFINED_PROC	(EF_ERROR|71)
#define EFATAL_TYPE_TOO_COMPLEX 	(EF_FATAL|72)
#define EERROR_SYNTAX_ERROR_DECL	(EF_ERROR|73)
#define EWARN_ENUM_OVERIDE		(EF_WARN |74)
#define EERROR_ID_MISSING_PROC		(EF_ERROR|75)
#define EERROR_ID_NOT_IN_LIST		(EF_ERROR|76)
#define EFATAL_STMT_COND_NOT_EXP	(EF_FATAL|77)
#define EERROR_DUPLICATE_DEFAULT	(EF_ERROR|78)
#define EWARN_HEX_CONST_TRUNCATED    	(EF_WARN |79)
#define EERROR_EXPECTED_OCBRACE_PROC	(EF_ERROR|80)
#define EERROR_CASE_DEFAULT_OUTSIDE	(EF_ERROR|81)
#define EERROR_ELSE_NO_IF               (EF_ERROR|82)
#define EERROR_TOO_MANY_INITIALIZERS	(EF_ERROR|83)
#define EERROR_ARRAY_CANNOT_HOLD_STRING (EF_ERROR|84)
#define EERROR_ILLEGAL_REGSPEC		(EF_ERROR|85)

/*#define EWARN_VARIABLE_NOT_USED 	(EF_WARN |86)*/
#define EERROR_ILLEGAL_RETURN_TYPE	(EF_ERROR|87)
#define EWARN_SASC_QUALIFIER_PLACEMENT	(EF_WARN |88)
#define EERROR_BREAK_OUTSIDE_LOOPSW	(EF_ERROR|89)
#define EERROR_CONT_OUTSIDE_LOOP	(EF_ERROR|90)
#define EERROR_ADDRESS_INT_CONST	(EF_ERROR|91)
#define EERROR_PASS_UNALIGNED_STRUCT	(EF_ERROR|92)
#define EERROR_PROTO_REQUIRED_INLINE	(EF_ERROR|93)
#define EFATAL_INPUT_NOT_SEEKABLE	(EF_FATAL|94)
#define EFATAL_CANT_OPEN_FILE		(EF_FATAL|95)
#define EFATAL_READ_FAILED		(EF_FATAL|96)
#define EFATAL_CANT_OPEN_OUTPUT 	(EF_FATAL|97)
#define EERROR_BAD_IND_TYPE		(EF_ERROR|98)
#define EFATAL_PRAGMA_BASE_UNDEF	(EF_FATAL|99)
#define EERROR_SIZEOF_TYPE_0		(EF_ERROR|100)
#define EWARN_DUPLICATE_SYMBOL		(EF_WARN |101)
#define EERROR_DUPLICATE_SYMBOL		(EF_ERROR|101)
#define EWARN_VARIABLE_NOT_USED 	(EF_WARN |102)
#define EWARN_VARIABLE_OVERIDES_ARG	(EF_WARN |103)
#define EFATAL_PRAGMA_CONFLICT_ARGS	(EF_FATAL|104)
#define EFATAL_PRAGMA_RETURN_D0 	(EF_FATAL|105)
#define EERROR_VOID_IND_TYPE	 	(EF_ERROR|106)
#define EERROR_NO_MEMBERS		(EF_ERROR|107)
#define EWARN_MISSING_COMMA             (EF_WARN |108)
#define EWARN_RETURN_MISMATCH           (EF_WARN |109)
#define EERROR_ARGUMENT_COUNT           (EF_ERROR|110)
#define EERROR_NON_PROTOTYPE            (EF_ERROR|111)
#define EWARN_NON_PROTOTYPE             (EF_WARN |111)
#define EERROR_ARGUMENT_MISMATCH        (EF_ERROR|112)
#define EERROR_REGISTER_MISMATCH        (EF_ERROR|113)
#define EERROR_INCOMPATIBLE_STRUCTURE   (EF_ERROR|114)
#define EWARN_DOES_NOT_MATCH            (EF_WARN |115)
#define EFATAL_TOO_MANY_REDOS           (EF_FATAL|116)
#define EFATAL_INTERNAL_ERROR           (EF_FATAL|117)
#define EERROR_BAD_LOCALE               (EF_ERROR|118)
#define EERROR_BADRELOC_IN_CONST        (EF_ERROR|119)
#define EERROR_CANT_OPEN_MATHLIB        (EF_ERROR|120)

#define EMAX_ERRORS 128
