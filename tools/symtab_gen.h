#ifndef SYMTAB_GEN_H
#define SYMTAB_GEN_H
#include "sym.h"
sym_nodeptr newnode();
char** nodename(sym_nodeptr p);
sym_nodeptr* nodenext(sym_nodeptr p);

char* symget
(
    char *name,
    sym_nodeptr (*newnode)(),
    char **(*nodename)(sym_nodeptr p),
    sym_nodeptr* (*nodenext)(sym_nodeptr p),
    char *symtab[],
    int flag
);

int hash(char *name);
int create_ht(char ***p);
int sym_traverse(char *ht[], char **(*nodenext)(), void (*f)());
#endif
