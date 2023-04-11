#ifndef MISC_H
#define MISC_H
#include "data.h"
char* dimension_with_colons(char *pre, char *tmp, node_t *p, char *post);

char* dimension_with_ones(char *pre, char *tmp, node_t *p, char *post);

char* dimension_with_ranges
(
    char *refarg, char *pre, int bdy, char *tmp,
    node_t *p, char *post, char *nlstructname
);

int range_of_dimension(char *r, char *tx, int i, node_t *p, char *nlstructname);

char* index_with_firstelem
(
    char *pre, char *dref, int bdy, char *tmp, node_t *p,char *post
);

int get_elem
(
    char *structname, char *nlstructname, char *tx, int i, node_t *p,
    int first_last
);

char* declare_array_as_pointer(char *tmp, node_t *p);

char* field_type(char *tmp, node_t *p);

char* field_name(char *tmp, node_t *p, int tag);

char* field_name_bdy(char *tmp, node_t *p, int tag, int bdy);

char* bdy_indicator(int bdy);

int print_warning(FILE *fp, char *fname);

int close_the_file(FILE *fp);

int make_entries_uniq(char *fname);

int add_warning(char *fname);

char* make_upper_case(char *str);

char* make_lower_case(char *str);

int init_typedef_history();

int get_num_typedefs();

char* get_typename_i(int i);

int add_typedef_name(char *name);

char* get_typedef_name(char *name);

int associated_with_4d_array(node_t *p);

char* array_size_expression
(
    char *refarg, char *pre, int bdy, char *tmp,
    node_t *p, char *post, char *nlstructname
);


int dimension_size_expression
(
    char *r, char *tx, int i, node_t *p, char *nlstructname
);

void reset_mask(unsigned int *mask, int e);

void set_mask(unsigned int *mask, int e);

int get_mask(unsigned int *mask, int e);

int dims_ikj_inner(node_t *field_struct);

int dims_ij_inner(node_t *field_struct);
#endif
