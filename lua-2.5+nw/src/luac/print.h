/*
** print.h
** opcode names
** $Id$
*/

static char* OpCodeName[]={	/* attention: same order as enum in opcode.h */
 "PUSHNIL",
 "PUSH0",
 "PUSH1",
 "PUSH2",
 "DUP",
 "PUSHBYTE",
 "PUSHWORD",
 "PUSHFLOAT",
 "PUSHSTRING",
 "PUSHFUNCTION",
 "PUSHLOCAL0",
 "PUSHLOCAL1",
 "PUSHLOCAL2",
 "PUSHLOCAL3",
 "PUSHLOCAL4",
 "PUSHLOCAL5",
 "PUSHLOCAL6",
 "PUSHLOCAL7",
 "PUSHLOCAL8",
 "PUSHLOCAL9",
 "PUSHLOCAL",
 "PUSHGLOBAL",
 "PUSHINDEXED",
 "PUSHSELF",
 "STORELOCAL0",
 "STORELOCAL1",
 "STORELOCAL2",
 "STORELOCAL3",
 "STORELOCAL4",
 "STORELOCAL5",
 "STORELOCAL6",
 "STORELOCAL7",
 "STORELOCAL8",
 "STORELOCAL9",
 "STORELOCAL",
 "STOREGLOBAL",
 "STOREINDEXED0",
 "STOREINDEXED",
 "STORELIST0",
 "STORELIST",
 "STORERECORD",
 "ADJUST0",
 "ADJUST",
 "CREATEARRAY",
 "GLOBMATCHOP",
 "EQOP",
 "LTOP",
 "LEOP",
 "GTOP",
 "GEOP",
 "ADDOP",
 "SUBOP",
 "MULTOP",
 "DIVOP",
 "POWOP",
 "CONCOP",
 "MINUSOP",
 "NOTOP",
 "ONTJMP",
 "ONFJMP",
 "JMP",
 "UPJMP",
 "IFFJMP",
 "IFFUPJMP",
 "POP",
 "CALLFUNC",
 "RETCODE0",
 "RETCODE",
 "SETLINE",
 ""
};
