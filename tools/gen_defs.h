#ifndef GEN_DEFS_H
#define GEN_DEFS_H
#include "data.h"
int gen_state_struct(char *dirname);
int gen_state_subtypes(char *dirname);
int gen_dummy_decls(char *dn);
int gen_dummy_decls_new(char *dn);
int gen_i1_decls(char *dn);
int gen_decls
(
    FILE *fp, node_t *node, int sw_ranges, int sw_point, int mask, int layer
);
int gen_state_subtypes1
(
    FILE *fp, node_t *node, int sw_ranges, int sw_point, int mask
);
#endif
