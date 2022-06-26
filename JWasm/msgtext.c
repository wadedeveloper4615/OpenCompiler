/****************************************************************************
*
*  This code is Public Domain.
*
*  ========================================================================
*
* Description:  handle (error) message texts
*
****************************************************************************/

#include "globals.h"
#include "token.h"
#include "tokenize.h"
#include "msgtext.h"

#define USERESOURCES 0 /* 1=use Win string resources, won't work for Linux! */

#if USERESOURCES

/*
 If Win32 resource strings are to be used, the
 makefiles must contain a call of the resource compiler!
 Resource file is H/JWasm.rc.
 */

#include "win32.h"
typedef void *HRSRC;
typedef void *HGLOBAL;
WINBASEAPI HRSRC   WINAPI FindResource( void *, char *, uint_32 );
WINBASEAPI HGLOBAL WINAPI LoadResource( void *, HRSRC );
WINBASEAPI void *  WINAPI LockResource( HGLOBAL );
WINBASEAPI void    WINAPI WideCharToMultiByte( uint_32, uint_32, uint_16 *, uint_32, uint_16 *, uint_32, uint_32, uint_32 );

#else

#ifdef __I86__

#include <i86.h>
#define FPTR( x ) MK_FP( FP_SEG( TX_MSG_USAGE ), x )
#undef pick
#define pick( code, string )  const char __based( __segname("_CODE") ) TX_ ## code[] = string;
#include "msgdef.h"
#undef pick
#define pick( code, string ) TX_ ## code,
static const char __based ( __segname("_CODE") ) * const msgtexts[] = {
#include "msgdef.h"
};

#else

#define FPTR( x ) x
#undef pick
#define pick( code, string )  string,
static const char * const msgtexts[] = {

    /* message texts.
     * since msg numbers shouldn't change, new ids must be added at the end -
     * unless a free entry is reused (search for "_unused"!)
     * This file is included by globals.h.
     * v2.06: Japanese texts removed.
     * v2.07: listing texts moved to ltext.h
     */
    pick(MSG_USAGE,              "usage: JWasm [ options ] filelist [@env_var]\n" "Run \"JWasm -?\" or \"JWasm -h\" for more info\n")
    pick(MSG_ASSEMBLY_RESULTS,   "%s: %lu lines, %u passes, %u ms, %u warnings, %u errors")
    pick(MSG_JWASM,              "JWasm v" _JWASM_VERSION_ ", " __DATE__)
    pick(MSG_JWASM2,             "Masm-compatible assembler.\n" "Portions Copyright (c) 1992-2002 Sybase, Inc. All Rights Reserved.\n" "Source code is available under the Sybase Open Watcom Public License.\n")
    pick(MSG_ERROR_PREFIX,       "Error")
    pick(MSG_WARNING_PREFIX,     "Warning")
    pick(MSG_FATAL_PREFIX,       "Fatal error")

    /* segment attribute text constants for error SEGDEF_CHANGED */
    pick(TXT_READONLY,           "readonly")
    pick(TXT_ALIGNMENT,          "alignment")
    pick(TXT_COMBINE,            "combine")
    pick(TXT_SEG_WORD_SIZE,      "segment word size")
    pick(TXT_CLASS,              "class")
    pick(TXT_CHARACTERISTICS,    "characteristics")
    pick(TXT_ALIASNAME,          "alias") /* v2.10: added */

    /* error/warning message text constants */

    pick(msg_unused2,          "")
    pick(msg_unused3,          "")
    pick(msg_unused4,          "")
    pick(msg_unused5,          "")
    pick(msg_unused6,          "")
    pick(msg_unused7,          "")
    pick(msg_unused8,          "")
    pick(msg_unused9,          "")
    pick(msg_unused10,         "")
    pick(msg_unused11,         "")
    #if COMDATSUPP
    pick(VALUE_NOT_WITHIN_ALLOWED_RANGE,    "Value not within allowed range %s")
    pick(INVALID_ASSOCIATED_SEGMENT,        "Invalid associated segment: %s")
    #else
    pick(msg_filler20,         "")
    pick(msg_filler21,         "")
    #endif
    #if MANGLERSUPP
    pick(UNKNOWN_MANGLER,             "Unknown symbol class '%s'")
    pick(CONFLICTING_MANGLER,         "Symbol class for '%s' already established")
    #else
    pick(msg_filler16,         "")
    pick(msg_filler17,         "")
    #endif

    pick(INSTRUCTION_PREFIX_NOT_ALLOWED,      "Instruction prefix not allowed")
    pick(MULTIPLE_BASE_REGISTERS_NOT_ALLOWED, "Multiple base registers not allowed")
    pick(INSTRUCTION_OR_REGISTER_NOT_ACCEPTED_IN_CURRENT_CPU_MODE, "Instruction or register not accepted in current CPU mode")
    pick(INVALID_ADDRESSING_MODE_WITH_CURRENT_CPU_SETTING,         "invalid addressing mode with current CPU setting")
    pick(CANNOT_USE_TRN_TO_TRM_WITH_CURRENT_CPU_SETTING,           "Cannot use TR%u-TR%u with current CPU setting")
    pick(MUST_BE_INDEX_OR_BASE_REGISTER,       "Must be index or base register")
    pick(MULTIPLE_INDEX_REGISTERS_NOT_ALLOWED, "Multiple index registers not allowed")
    pick(TOO_FEW_BITS_IN_RECORD,               "Too few bits in RECORD: %s")
    pick(SCALE_FACTOR_MUST_BE_1_2_4_OR_8,      "Scale factor must be 1, 2, 4 or 8")
    pick(CANNOT_BE_USED_AS_INDEX_REGISTER,     "Cannot be used as index register: %s")
    #if AMD64_SUPPORT
    pick(CANNOT_MIX_16_AND_32_BIT_REGISTERS,   "Base and index register differ in size")
    #else
    pick(CANNOT_MIX_16_AND_32_BIT_REGISTERS,   "Cannot mix 16 and 32-bit registers")
    #endif
    pick(EXPECTING_COMMA,                      "Expecting comma: %s")
    pick(ORG_NEEDS_A_CONSTANT_OR_LOCAL_OFFSET, "ORG needs a constant or local offset")
    pick(POP_CS_IS_NOT_ALLOWED,                "POP CS is not allowed")
    pick(ONLY_MOV_CAN_USE_SPECIAL_REGISTER,    "Only MOV can use special register")
    pick(CANNOT_USE_SHORT_WITH_CALL,           "Cannot use SHORT with CALL")
    pick(ONLY_SHORT_JUMP_DISTANCE_IS_ALLOWED,  "Only SHORT jump distance is allowed")
    pick(SYNTAX_ERROR,                         "Syntax error")
    pick(PREFIX_MUST_BE_FOLLOWED_BY_AN_INSTRUCTION, "Prefix must be followed by an instruction")
    pick(SYNTAX_ERROR_UNEXPECTED_COLON,        "Syntax error: Unexpected colon")
    pick(OPERANDS_MUST_BE_THE_SAME_SIZE,       "Operands must be the same size: %u - %u")
    pick(INVALID_INSTRUCTION_OPERANDS,         "Invalid instruction operands")
    pick(JUMP_DISTANCE_NOT_POSSIBLE,   "Jump distance not possible in current CPU mode")
    pick(IMMEDIATE_DATA_OUT_OF_RANGE, "Immediate data out of range")
    pick(CANNOT_USE_SHORT_OR_NEAR,    "Can not use short or near modifiers with this instruction")
    pick(JUMP_OUT_OF_RANGE,           "Jump out of range by %d byte(s)")
    pick(DISPLACEMENT_OUT_OF_RANGE,   "Displacement out of range: 0x%" I64_SPEC "X")
    pick(INITIALIZER_OUT_OF_RANGE,    "Initializer value too large")
    pick(SYMBOL_ALREADY_DEFINED,      "Symbol already defined: %s")
    pick(OFFSET_MAGNITUDE_TOO_LARGE,  "Offset magnitude too large for specified size")
    pick(MAGNITUDE_OF_OFFSET_EXCEEDS_16BIT, "Magnitude of offset exceeds 16 bit")
    pick(OP2_TOO_BIG,                 "Operand 2 too big")
    pick(OP1_TOO_SMALL,               "Operand 1 too small")
    pick(LINE_TOO_LONG,               "Line too long")
    pick(TOO_MANY_TOKENS,             "Too many tokens in a line")
    pick(MEMBER_NOT_DEFINED,          "Symbol not defined : %s.%s")
    pick(EXPRESSION_EXPECTED,         "Expression expected: %s")
    pick(CONSTANT_EXPECTED,           "Constant expected")
    pick(CONSTANT_OPERAND_EXPECTED,   "Constant operand is expected")
    pick(DOT_ELSE_CLAUSE_ALREADY_OCCURED_IN_THIS_DOT_IF_BLOCK, ".ELSE clause already occured in this .IF block")
    pick(MULTIPLE_OVERRIDES,          "Multiple overrides")
    pick(SEGMENT_GROUP_OR_SEGREG_EXPECTED, "Segment, group or segment register expected")
    pick(IDENTIFIER_TOO_LONG,         "Identifier too long")
    pick(INVALID_OPERAND_SIZE,        "Invalid operand size for instruction")
    pick(NOT_SUPPORTED,               "Not supported: %s")
    pick(SIZE_NOT_SPECIFIED_ASSUMING, "Size not specified, assuming: %s")
    pick(FP_INITIALIZER_IGNORED,      "Floating-point initializer ignored")
    pick(ONLY_SHORT_AND_NEAR_JUMP_DISTANCE_IS_ALLOWED, "Only SHORT and NEAR jump distance is allowed")
    pick(MAGNITUDE_TOO_LARGE_FOR_SPECIFIED_SIZE, "Initializer magnitude too large for specified size")
    pick(SEGMENT_ATTRIBUTE_DEFINED_ALREADY, "Segment attribute is defined already: %s")
    pick(SEGDEF_CHANGED,              "Segment definition changed: %s, %s")
    pick(CLASS_NAME_TOO_LONG,         "Class name too long")
    pick(BLOCK_NESTING_ERROR,         "Block nesting error: %s")
    pick(UNKNOWN_SEGMENT_ATTRIBUTE,   "Segment attribute is unknown: %s")
    pick(MUST_BE_IN_SEGMENT_BLOCK,    "Must be in segment block")
    pick(SEGMENT_NOT_DEFINED,         "Segment not defined: %s")
    pick(COLON_EXPECTED,              "Colon is expected")
    pick(INVALID_QUALIFIED_TYPE,      "Invalid qualified type: %s")
    pick(QUALIFIED_TYPE_EXPECTED,     "Qualified type is expected")
    pick(MISSING_MACRO_ARGUMENT_2,    "Missing macro argument: iteration %u")
    pick(LIBRARY_NAME_MISSING,        "Library name is missing")
    pick(CANNOT_ACCESS_LABEL_THROUGH_SEGMENT_REGISTERS, "Cannot access label through segment registers: %s")
    pick(EXPANDED_LINE_TOO_LONG,      "Line too long after expansion: %40s")
    pick(LANG_MUST_BE_SPECIFIED,      "Language type must be specified")
    pick(PROC_MACRO_MUST_PRECEDE_LOCAL, "PROC, MACRO or macro loop directive must precede LOCAL")
    pick(CANNOT_NEST_PROCEDURES,      "Cannot nest procedures")
    pick(VARARG_REQUIRES_C_CALLING_CONVENTION, "VARARG requires C calling convention")
    pick(MODEL_DECLARED_ALREADY,      "Multiple .MODEL directives, .MODEL ignored")
    pick(MODEL_IS_NOT_DECLARED,       "Model is not declared")
    pick(BACKQUOTE_MISSING,           "Backquote missing: `%s")
    pick(COMMENT_DELIMITER_EXPECTED,  "COMMENT delimiter expected")
    pick(END_DIRECTIVE_REQUIRED,      "END directive required at end of file")
    pick(NESTING_LEVEL_TOO_DEEP,      "Nesting level too deep")
    pick(MACRO_NESTING_LEVEL_TOO_DEEP,"Macro nesting level too deep")
    pick(SYMBOL_NOT_DEFINED,          "Symbol not defined : %s")
    pick(LANGUAGE_ATTRIBUTE_CONFLICT, "Language attribute conflict: %s")
    pick(NO_FILENAME_SPECIFIED,       "No filename specified.")
    pick(OUT_OF_MEMORY,               "Out of Memory")
    pick(CANNOT_OPEN_FILE,            "Cannot open file: \"%s\" [%s]")
    pick(CANNOT_CLOSE_FILE,           "Cannot close file: %s [%u]")
    pick(FILE_WRITE_ERROR,            "File write error: %s [%u]")
    pick(INVALID_CMDLINE_OPTION,      "Invalid command-line option: %s")
    pick(INTERNAL_ERROR,              "Internal error in %s(%u)\n") /* terminating LF is intended */
    pick(EXPECTED_CL_SQ_BRACKET,      "Expecting closing square bracket")
    pick(EXPECTED_FILE_NAME,          "Expecting file name")
    pick(TOO_MANY_ERRORS,             "Too many errors")
    pick(FORCED_ERR,                  "forced error%s")
    pick(FORCED_NOT_ZERO,             "forced error: Value not equal to 0: %d%s")
    pick(FORCED_EQUAL,                "forced error: Value equal to 0: %d%s")
    pick(FORCED_DEF,                  "forced error: symbol defined: %s")
    pick(FORCED_NOT_DEF,              "forced error: symbol not defined: %s")
    pick(FORCED_BLANK,                "forced error: string blank : <%s>%s")
    pick(FORCED_NOT_BLANK,            "forced error: string not blank : <%s>%s")
    pick(FORCED_DIF,                  "forced error: strings not equal : <%s> : <%s>%s")
    pick(FORCED_IDN,                  "forced error: strings equal : <%s> : <%s>%s")
    pick(NOTE_INCLUDED_BY,            "%*s%s(%" I32_SPEC "u): Included by")
    pick(NOTE_MACRO_CALLED_FROM,      "%*s%s(%" I32_SPEC "u)[%s]: Macro called from")
    pick(NOTE_ITERATION_MACRO_CALLED_FROM, "%*s%s(%" I32_SPEC "u): iteration %" I32_SPEC "u: Macro called from")
    pick(NOTE_MAIN_LINE_CODE,         "%*s%s(%" I32_SPEC "u): Main line code")
    pick(EXTENDING_JUMP,              "Extending jump")
    pick(DIRECTIVE_IGNORED,           "Directive ignored: %s")
    pick(POWER_OF_2,                  "number must be a power of 2: %" I32_SPEC "u")
    pick(ALIGN_TOO_HIGH,              "Incompatible with segment alignment: %s")
    pick(SEGMENT_EXPECTED,            "Segment expected: %s")
    pick(INCOMPATIBLE_CPU_MODE_FOR_XXBIT_SEGMENT, "Incompatible CPU mode for %u-bit segment")
    pick(CALL_FAR_TO_NEAR,            "Far call is converted to near call.")
    pick(CPU_OPTION_INVALID,          "CPU option %s is not valid for selected CPU.")
    pick(SEGMENT_IN_ANOTHER_GROUP,    "Segment '%s' is in another group already")
    pick(SYMBOL_TYPE_CONFLICT,        "Symbol type conflict: %s")
    pick(CONFLICTING_PARAMETER_DEFINITION,     "Conflicting parameter definition: %s")
    pick(PROC_AND_PROTO_CALLING_CONV_CONFLICT, "PROC and PROTO calling convention conflict")
    pick(NON_BENIGN_XXX_REDEFINITION, "Non-benign %s redefinition: %s")
    pick(TOO_MANY_BITS_IN_RECORD,     "Too many bits in RECORD: %s")
    pick(STATEMENT_NOT_ALLOWED_INSIDE_STRUCTURE_DEFINITION, "Statement not allowed inside structure definition")
    pick(UNMATCHED_BLOCK_NESTING,       "Unmatched block nesting: %s")
    pick(SYMBOL_REDEFINITION,           "Symbol redefinition: %s")
    pick(TEXT_ITEM_REQUIRED,            "Text item required")
    pick(INVOKE_ARGUMENT_TYPE_MISMATCH, "INVOKE argument type mismatch: argument %u")
    pick(TOO_FEW_ARGUMENTS_TO_INVOKE,   "Too few arguments to INVOKE: %s")
    pick(VARARG_PARAMETER_MUST_BE_LAST, "VARARG parameter must be last")
    #if MACROLABEL
    pick(LABEL_PARAMETER_MUST_BE_FIRST, "LABEL parameter must be first")
    #else
    pick(msg_filler1, "")
    #endif
    pick(TOO_MANY_ARGUMENTS_IN_MACRO_CALL,  "Too many arguments in macro call: %s: %s")
    pick(MISSING_OPERATOR_IN_EXPRESSION,    "Missing operator in expression")
    pick(UNEXPECTED_LITERAL_FOUND_IN_EXPRESSION,      "Unexpected literal found in expression: %s")
    pick(INITIALIZER_MUST_BE_A_STRING_OR_SINGLE_ITEM, "Initializer must be a string or single item: %s")
    pick(TOO_MANY_INITIAL_VALUES_FOR_STRUCTURE,       "Too many initial values for structure: %s")
    pick(TOO_MANY_INITIAL_VALUES_FOR_ARRAY, "Too many initial values for array: %s")
    pick(STRING_OR_TEXT_LITERAL_TOO_LONG,   "String or text literal too long")
    pick(PROLOGUE_MUST_BE_MACRO_FUNC,       "PROLOGUE must be macro function")
    pick(EPILOGUE_MUST_BE_MACRO_PROC,       "EPILOGUE must be macro procedure: %s")
    pick(RESERVED_WORD_EXPECTED,            "Reserved word expected")
    pick(INVOKE_REQUIRES_PROTOTYPE,         "INVOKE requires prototype for procedure")
    pick(INVALID_TYPE_FOR_DATA_DECLARATION, "Invalid type for data declaration: %s")
    pick(OPERAND_MUST_BE_RECORD,            "Operand must be RECORD type or field")
    pick(UNMATCHED_MACRO_NESTING,           "Unmatched macro nesting")
    pick(EMPTY_STRING,                      "Empty (null) string")
    pick(SEGMENT_MISSING_FOR_FIXUP,         "No segment information to create fixup: %s")
    pick(REGISTER_VALUE_OVERWRITTEN_BY_INVOKE, "Register value overwritten by INVOKE")
    pick(MISSING_QUOTATION_MARK_IN_STRING,  "Missing quotation mark in string")
    pick(DIVIDE_BY_ZERO_IN_EXPR,            "Divide by zero in expression")
    pick(GENERAL_FAILURE,                   "General Failure")
    pick(CANNOT_HAVE_IMPLICIT_FAR_JUMP_OR_CALL_TO_NEAR_LABEL, "Cannot have implicit far jump or call to near label")
    pick(INVALID_USE_OF_REGISTER,           "Invalid use of register")
    pick(DISTANCE_INVALID,                  "Distance invalid for current segment")
    pick(INITIALIZER_MAGNITUDE_TOO_LARGE,   "Initializer magnitude too large: %s")
    pick(CANNOT_ADD_TWO_RELOCATABLE_LABELS, "Cannot add two relocatable labels")
    pick(CANNOT_DEFINE_AS_PUBLIC_OR_EXTERNAL, "Cannot define as public or external: %s")
    pick(POSITIVE_VALUE_EXPECTED,           "Positive value expected")
    pick(FAR_NOT_ALLOWED_IN_FLAT_MODEL_COMM_VARIABLES, "FAR not allowed in FLAT model COMM variables")
    pick(TOO_MANY_ARGUMENTS_TO_INVOKE,      "Too many arguments to INVOKE")
    pick(DIRECTIVE_MUST_APPEAR_INSIDE_A_MACRO, "Directive must appear inside a macro")
    pick(INVALID_TYPE_EXPRESSION,           "Invalid type expression")
    pick(CANNOT_DECLARE_SCOPED_CODE_LABEL_AS_PUBLIC, "Cannot declare scoped code label as PUBLIC: %s")
    pick(INVALID_RADIX_TAG,                 "Invalid radix tag")
    pick(INSTRUCTION_OPERAND_MUST_HAVE_SIZE,"Instruction operand must have size")
    pick(USE_OF_REGISTER_ASSUMED_TO_ERROR,  "Use of register assumed to ERROR")
    pick(INITIALIZED_DATA_NOT_SUPPORTED_IN_SEGMENT, "Instructions and initialized data not supported in %s segments")
    pick(LITERAL_EXPECTED_AFTER_EQ,         "Literal expected after '='")
    #if PAGE4K
    pick(NO_4KPAGE_ALIGNED_SEGMENTS_IN_MS386,"No 4k Page-aligned segments in MS386 OMF")
    #else
    pick(msg_filler25,                      "")
    #endif
    pick(LINNUM_INFO_FOR_SEGMENT_WITHOUT_CLASS_CODE, "Line number information for segment without class 'CODE': %s")
    pick(OPERAND_MUST_BE_RELOCATABLE,       "Operand must be relocatable")
    pick(CONSTANT_OR_RELOCATABLE_LABEL_EXPECTED, "Constant or relocatable label expected")
    pick(IF2_NOT_ALLOWED,                   "[ELSE]IF2/.ERR2 not allowed, single-pass assembler")
    pick(EXPR_TOO_COMPLEX_FOR_UNTILCXZ,     "Expression too complex for UNTILCXZ")
    pick(OPERANDS_MUST_BE_IN_SAME_SEGMENT,  "Operands must be in same segment")
    pick(INVALID_USE_OF_EXTERNAL_SYMBOL,    "Invalid use of external symbol: %s")
    #if COFF_SUPPORT
    pick(LEADING_UNDERSCORE_REQUIRED_FOR_START_LABEL, "For -coff leading underscore required for start label: %s")
    #else
    pick(msg_filler2, "")
    #endif
    pick(INVALID_CMDLINE_VALUE,             "Invalid command-line value, default is used: -%s")
    pick(UNKNOWN_FIXUP_TYPE,                "Unknown fixup type: %u at %s.%lX")
    pick(UNSUPPORTED_FIXUP_TYPE,            "Unsupported fixup type for %s: %s")
    pick(INVALID_FIXUP_TYPE,                "Invalid fixup type for %s: %u at location %s.%lX")
    pick(SYNTAX_ERROR_IN_CONTROL_FLOW_DIRECTIVE, "Syntax error in control-flow directive")
    pick(INVALID_MODEL_PARAM_FOR_FLAT,      "Invalid .model parameter for flat model")
    #if BIN_SUPPORT
    pick(FORMAT_DOESNT_SUPPORT_EXTERNALS,   "Output format doesn't support externals: %s")
    pick(START_LABEL_INVALID,               "Invalid start label for -bin")
    #if MZ_SUPPORT
    pick(NO_START_LABEL,                    "No start label defined")
    pick(NO_STACK,                          "No stack defined")
    pick(INVALID_HEADER_ALIGNMENT,          "Invalid alignment - value must be 2^n (n=4..15)")
    #else
    pick(msg_filler11, "")
    pick(msg_filler12, "")
    pick(msg_filler13, "")
    #endif
    #else
    pick(msg_filler11, "")
    pick(msg_filler12, "")
    pick(msg_filler13, "")
    pick(msg_filler14, "")
    pick(msg_filler15, "")
    #endif
    pick(INDEX_VALUE_PAST_END_OF_STRING,    "Index value past end of string: %d")
    pick(COUNT_VALUE_TOO_LARGE,             "Count value too large")
    pick(COUNT_MUST_BE_POSITIVE_OR_ZERO,    "Count must be positive or zero")
    pick(SYNTAX_ERROR_EX,                   "Syntax error: %s")
    #if AMD64_SUPPORT
    pick(TOO_MANY_UNWIND_CODES_IN_FRAME_PROC,"Too many unwind codes in FRAME procedure")
    #else
    pick(msg_filler26,                      "")
    #endif
    #if PE_SUPPORT
    pick(MODEL_MUST_BE_FLAT,                "Model must be FLAT")
    #else
    pick(msg_filler24, "")
    #endif
    pick(MUST_USE_FLOAT_INITIALIZER,        "Must use floating-point initializer")
    pick(ORG_NOT_ALLOWED_IN_UNIONS,         "ORG directive not allowed in unions")
    pick(STRUCT_ALIGN_TOO_HIGH,             "Struct alignment must be 1, 2, 4, 8, 16 or 32")
    pick(STRUCT_CANNOT_BE_INSTANCED,        "Structure cannot be instanced")
    pick(MISSING_ANGLE_BRACKET_OR_BRACE_IN_LITERAL, "Missing angle bracket or brace in literal")
    pick(NONDIGIT_IN_NUMBER,                "Nondigit in number: %s")
    pick(WORD_FIXUP_FOR_32BIT_LABEL,        "16bit fixup for 32bit label: %s")
    pick(TOO_MANY_MACRO_PLACEHOLDERS,       "Too many macro placeholders")
    pick(MISSING_MACRO_ARGUMENT,            "Missing macro argument: %s, parameter %u")
    pick(DOES_NOT_WORK_WITH_32BIT_SEGMENTS, "Doesn't work with 32-bit segments: %s")
    pick(SEGMENT_EXCEEDS_64K_LIMIT,         "Segment exceeds 64k limit: %s")
    pick(NOT_SUPPORTED_WITH_OMF_FORMAT,     "Not supported with OMF format: %s")
    pick(NOT_SUPPORTED_WITH_CURR_FORMAT,    "Not supported with current output format: %s")
    pick(UNKNOWN_DEFAULT_PROLOGUE_ARGUMENT, "Unknown default prologue argument: %s")
    pick(LOADDS_IGNORED_IN_FLAT_MODEL,      "LOADDS ignored in flat model")
    pick(MISSING_RIGHT_PARENTHESIS_IN_EXPRESSION, "Missing right parenthesis in expression")
    pick(INVALID_OPERAND_FOR_OPERATOR,      "Invalid operand for %s: %s")
    pick(STRUCTURE_IMPROPERLY_INITIALIZED,  "Structure improperly initialized: %s")
    pick(EXPECTED,                          "Expected: %s")
    pick(INVALID_DATA_INITIALIZER,          "Invalid data initializer: %s")
    pick(EXPECTED_DATA_LABEL,               "Expected data label")
    pick(EXPRESSION_MUST_BE_A_CODE_ADDRESS, "Expression must be a code address")
    pick(N_OPTION_NEEDS_A_NAME_PARAMETER,   "-n Option needs a valid name parameter")
    pick(CONSTANT_VALUE_TOO_LARGE,          "Constant value too large: %" I64_SPEC "Xh")
    pick(TEXT_MACRO_USED_PRIOR_TO_DEFINITION, "Text macro used prior to definition: %s")
    pick(OFFSET_SIZE_MISMATCH,              "Offset size incompatible with current segment")
    pick(INSTRUCTION_FORM_REQUIRES_80386,   "Instruction form requires 80386")
    pick(GROUP_SEGMENT_SIZE_CONFLICT,       "Group/Segment offset size conflict: %s - %s")
    pick(ASSEMBLY_PASSES,                   "Assembly passes reached: %u")
    pick(FILENAME_MUST_BE_ENCLOSED_IN_QUOTES_OR_BRACKETS, "Filename parameter must be enclosed in <> or quotes")
    pick(START_ADDRESS_IGNORED,             "Start address on END directive ignored with .STARTUP")
    pick(INVALID_SYMBOL_TYPE_IN_EXPRESSION, "Invalid symbol type in expression: %s")
    pick(MISSING_RIGHT_PARENTHESIS,         "Missing right parenthesis")
    pick(DIRECTIVE_MUST_BE_IN_CONTROL_BLOCK,"Directive must be in control block")
    pick(EXPECTED_MEMORY_MODEL,             "Expected: memory model")
    pick(TYPE_IS_WRONG_SIZE_FOR_REGISTER,   "Type is wrong size for register")
    pick(IFDEF_EXPECTS_SYMBOL_ARGUMENT,     "IF[n]DEF expects a plain symbol as argument: %s")
    pick(JUMP_DESTINATION_MUST_SPECIFY_A_LABEL, "Jump destination must specify a label")
    pick(TOKEN_IGNORED,                     "Ignored: %s")
    pick(MISSING_ARGUMENT_FOR_CMDLINE_OPTION, "Missing argument for cmdline option")
    pick(INVALID_COPROCESSOR_REGISTER,      "Invalid coprocessor register")
    #if AMD64_SUPPORT
    pick(INVALID_USAGE_OF_AHBHCHDH,         "Registers AH-DH may not be used with SPL-DIL or R8-R15")
    pick(ENDPROLOG_FOUND_BEFORE_EH_DIRECTIVES, ".ENDPROLOG found before EH directives")
    pick(MISSING_FRAME_IN_PROC,             "Missing FRAME in PROC, no unwind code will be generated")
    pick(BAD_ALIGNMENT_FOR_OFFSET_IN_UNWIND_CODE, "Bad alignment for offset in unwind code")
    pick(NONZERO_VALUE_EXPECTED,            "Nonzero value expected")
    pick(SIZE_OF_PROLOG_TOO_BIG,            "Size of prolog too big, must be < 256 bytes")
    pick(MISSING_ENDPROLOG,                 "Missing .ENDPROLOG: %s")
    #else
    pick(msg_filler4, "")
    pick(msg_filler5, "")
    pick(msg_filler6, "")
    pick(msg_filler7, "")
    pick(msg_filler8, "")
    pick(msg_filler9, "")
    pick(msg_filler10, "")
    #endif
    #if COFF_SUPPORT
    pick(SAFESEH_ARGUMENT_MUST_BE_A_PROC,   ".SAFESEH argument must be a PROC")
    pick(DIRECTIVE_IGNORED_WITHOUT_X,       "Directive ignored without -%s switch")
    #else
    pick(msg_filler22, "")
    pick(msg_filler23, "")
    #endif
    #if ELF_SUPPORT
    pick(ELF_GNU_EXTENSIONS_USED,           "ELF GNU extensions (8/16-bit relocations) used")
    #else
    pick(msg_filler3, "")
    #endif
    pick(SYNTAX_ERROR_IN_EXPRESSION,        "Syntax error in expression")
    pick(MACRO_LABEL_NOT_DEFINED,           "Macro label not defined: %s")
    pick(PROCEDURE_ARGUMENT_OR_LOCAL_NOT_REFERENCED, "Procedure argument or local not referenced: %s")
    pick(GROUP_DEFINITION_TOO_LARGE,        "Group definition too large, truncated: %s")
    pick(COMM_VAR_EXCEEDS_64K,              "COMM variable exceeds 64K: %s")
    pick(MUST_BE_PUBLIC_OR_EXTERNAL,        "Must be public or external: %s")
    pick(PARAM_IS_RESERVED_WORD,            "parameter/local name is reserved word: %s")
    pick(REAL_OR_BCD_NUMBER_NOT_ALLOWED,    "real or BCD number not allowed")
    pick(STRUCTURE_FIELD_EXPECTED,          "structure field expected")
    pick(CONSTANT_VALUE_TOO_LARGE_EX,       "Constant value too large: %" I64_SPEC "X%016" I64_SPEC "Xh")
    pick(ELSE_CLAUSE_ALREADY_OCCURED_IN_THIS_IF_BLOCK, "ELSE clause already occured in this IF block")
    pick(ILLEGAL_USE_OF_SEGMENT_REGISTER,   "Illegal use of segment register")
    pick(GROUP_EXCEEDS_64K,                 "Group exceeds 64K: %s")
    pick(EXPORT_MUST_BE_FAR,                "EXPORT must be FAR: %s")
};
#endif

#endif

/* the compiler string stored in CodeView symbolic debugging info */
#ifdef DEBUG_OUT
const char szCVCompiler[] = { "Microsoft (R) Macro Assembler Version 6.15.8803" };
//const char szCVCompiler[] = { "Microsoft (R) Macro Assembler Version 8.00.50727" };
#else
const char szCVCompiler[] = { "JWasm v" _JWASM_VERSION_STR_ };
#endif

static const char *MsgGet( int msgid, char *buffer )
/**************************************************/
{
#if USERESOURCES
    HRSRC hRsrc;
    HGLOBAL hRes;
    WORD * pId;
    int i;

    hRsrc = FindResource( NULL, MAKEINTRESOURCE(1 + (msgid >> 4)), RT_STRING );
    if (hRsrc) {
        hRes = LoadResource( NULL, hRsrc );
        if (hRes) {
            pId = LockResource( hRes );
            for (i = msgid % 16;i;i--)
                pId += *pId + 1;
            i = *pId++;
            if ( buffer == NULL )
                buffer = StringBufferEnd;
            WideCharToMultiByte( CP_ACP, 0, pId, i, buffer, -1, 0, 0 );
            buffer[i] = NULLC;
            return( buffer );
        }
    }
#else
    if ( msgid < MSG_LAST ) {
        if ( buffer ) {
            strcpy( buffer, FPTR( msgtexts[msgid] ) );
            return( buffer );
        } else
            return( (char *) FPTR( msgtexts[msgid] ) );
    }
#endif
    DebugMsg(("MsgGet(%u): Msg not found!!!\n", msgid));
    if ( buffer == NULL )
        buffer = StringBufferEnd;
    sprintf( buffer, "Msg %u", msgid );
    return( buffer );
}

const char *MsgGetEx( int msgid )
/*******************************/
{
    return( MsgGet( msgid, NULL ) );
}

