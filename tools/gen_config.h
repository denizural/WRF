#ifndef GEN_CONFIG_H
#define GEN_CONFIG_H
int gen_namelist_defines(char *dirname, int sw_dimension);
int gen_namelist_defaults(char *dirname);
int gen_namelist_statements(char *dirname);
int gen_namelist_script(char *dirname);
int gen_get_nl_config(char *dirname);
int gen_config_assigns(char *dirname);
int gen_config_reads(char *dirname);
#endif
