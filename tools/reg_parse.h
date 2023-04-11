#ifndef REG_PARSE_H
#define REG_PARSE_H
#include "data.h"
int pre_parse(char *dir, FILE *infile, FILE * outfile);
int reg_parse(FILE * infile);
node_t *get_dim_entry(char *s);
int set_state_type(char *typename, node_t *state_entry);
int set_dim_len(char *dimspec, node_t *dim_entry);
int set_dim_orient(char *dimorient, node_t *dim_entry);
int check_dimspecs();
int set_dim_order(char *dimorder, node_t *dim_entry);
int init_parser();
#endif
