#ifndef SYMTAB_GEN_H
#define SYMTAB_GEN_H
char *symget
(
    char *name, char *(*newnode), char **(*nodename),
    char **(*nodenext), char *symtab[], int flag
);
int hash(char *name);
int create_ht(char ***p);
int sym_traverse(char *ht[], char **(*nodenext)(), void (*f)());
#endif
