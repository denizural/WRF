#ifndef GEN_ARGS_H
#define GEN_ARGS_H
#include "data.h"
int gen_actual_args(char *dirname);
int gen_actual_args_new(char *dirname);
int gen_actual_args_new(char *dirname);
int gen_dummy_args(char *dirname);
int gen_dummy_args_new(char *dirname);
int gen_args(char *dirname, int sw);
int gen_args1
(
    FILE *fp , char *outstr, char *structname, node_t *node,
    int *linelen, int sw, int deep
);
#endif
