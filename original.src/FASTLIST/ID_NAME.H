#include "const.h"

char *ID[]=
		{"CARRYFLAG","ELSE","EXTRACT","FROM","IF",
		 "NOTCARRYFLAG","NOTOVERFLOW","OVERFLOW",
		 "ZEROFLAG","NOTZEROFLAG",
		 "__CODEPTR__","__DATAPTR__","__POSTPTR__",
     "GOTO","BREAK","CONTINUE",
		 "WHILE","FOR","MINUSFLAG","PLUSFLAG",
		 "LOOPNZ","loopnz","byte","word","char","int","dword","long",
		 "if","loop","return","do","while","else","interrupt","void",
		 "enum","inline","far","goto","break","continue","for","asm","switch",
		 "case","default","float","struct","sizeof","extern","cdecl","pascal",
		 "fastcall","stdcall","union","_export","short","unsigned",
		 "signed","__FILE__","__LINE__","SWITCH","CASE",
		"RETURN","static","new","delete","qword","double",NULL};

short IDvalue[]=
		{tk_carryflag,tk_ELSE,tk_extract,tk_from,tk_IF,
		 tk_notcarryflag,tk_notoverflowflag,tk_overflowflag,
		 tk_zeroflag,tk_notzeroflag,
		 tk_codeptr,tk_dataptr,tk_postptr,
     tk_GOTO,tk_BREAK,tk_CONTINUE,
		 tk_WHILE,tk_FOR,tk_minusflag,tk_plusflag,
		 tk_LOOPNZ,tk_loopnz,tk_byte,tk_word,tk_char,tk_int,tk_dword,tk_long,
		 tk_if,tk_loop,tk_return,tk_do,tk_while,tk_else,tk_interrupt,tk_void,
		 tk_enum,tk_inline,tk_far,tk_goto,tk_break,tk_continue,tk_for,tk_asm,
		 tk_switch,tk_case,tk_default,tk_float,tk_struct,tk_sizeof,tk_extern,
		 tk_cdecl,tk_pascal,tk_fastcall,tk_stdcall,tk_union,tk_export,
		 tk_short,tk_unsigned,tk_signed,tk_file,tk_line,tk_SWITCH,tk_CASE,
		tk_RETURN,tk_static,tk_new,tk_delete,tk_qword,tk_double};
