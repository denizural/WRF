#ifndef GEN_INTERP_H
#define GEN_INTERP_H
#include "data.h"
int as_finite_double(char *str,double *d);
int contains_str(char *s1, char *s2);
int contains_tok(char *s1, char *s2, char *delims);
int gen_nest_v_interp(char *dirname);
int gen_nest_interp(char *dirname);
int gen_nest_interp1
(
    FILE *fp, node_t *node, char *fourdname, int down_path,
    int use_nest_time_level
);
int gen_nest_interp2
(
    FILE *fp, node_t *node, char *fourdname, int down_path,
    int use_nest_time_level
);
#endif
