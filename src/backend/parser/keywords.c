/*-------------------------------------------------------------------------
 *
 * keywords.c
 *	  lexical token lookup for key words in PostgreSQL
 *
 * Portions Copyright (c) 1996-2009, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/backend/parser/keywords.c,v 1.195 2008/03/27 03:57:33 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include "nodes/nodes.h"
#include "nodes/parsenodes.h"
#include "parser/keywords.h"
#include "parser/gram.h"

#define PG_KEYWORD(a,b,c) {a,b,c},


const ScanKeyword ScanKeywords[] = {
#include "parser/kwlist.h"
};

/* End of ScanKeywords, for use in kwlookup.c and elsewhere */
const ScanKeyword *LastScanKeyword = endof(ScanKeywords);
