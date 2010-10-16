/*************
 * Header file for parse.c
 * 1999 E. Rouat
 * $Id$
 ************/

#ifndef _PARSE_H
#define _PARSE_H

#include <pnode.h>
#include <wordlist.h>

#ifndef free_pnode
#define free_pnode(ptr)  free_pnode_x(ptr); ptr=NULL;
#endif

void free_pnode_o(struct pnode *t);

#endif
