#ifndef GEN_COMMS_H
#define GEN_COMMS_H

#if ( WRFPLUS == 1 )
int print_4d_i1_decls
(
    FILE *fp,
    node_t *p, 
    int ad,  /* 0=argument,1=declaration */
    int du,  /* 0=dummy,1=actual */
    int nta  /* 0=NLM,1=TLM,2=ADM */
);
#else
int print_4d_i1_decls
(
    FILE *fp,
    node_t *p,
    int ad, /* 0=argument,1=declaration */
    int du /* 0=dummy,1=actual */
);
#endif


int print_call_or_def
(
    FILE * fp,
    node_t *p,
    char *callorsub, 
#if ( WRFPLUS == 1 )
    char *commname,
    int nta, /* 0=NLM,1=TLM,2=ADM */
    char *communicator, 
#else
    char *commname,
    char *communicator,
#endif
    int need_config_flags
);


int print_decl
(
    FILE *fp,
    node_t *p,
    char *communicator, 
#if ( WRFPLUS == 1 )
    int need_config_flags,
    int nta
#else
    int need_config_flags
#endif
);


#if ( WRFPLUS == 1 )
int print_body
(
    FILE *fp,
    char *commname,
    int nta /* 0=NLM,1=TLM,2=ADM */
);
#else
int print_body
(
    FILE *fp,
    char *commname
);
#endif


int gen_halos(char *dirname, char *incname, node_t *halos, int split);


#if ( WRFPLUS == 1 )
int gen_halos_nta(char *dirname, char *incname, node_t *halos, int split);
#endif


//#if ( WRFPLUS == 1 )
//void gen_packs_halo ( FILE *fp , node_t *p, char *shw, int xy /* 0=y,1=x */ , int pu /* 0=pack,1=unpack */, int nta /* 0=NLM,1=TLM,2=ADM*/, char * packname, char * commname, int always_interp_mp );
//#else
//void gen_packs_halo ( FILE *fp , node_t *p, char *shw, int xy /* 0=y,1=x */ , int pu /* 0=pack,1=unpack */, char * packname, char * commname, int always_interp_mp );
//#endif


//void gen_packs ( FILE *fp , node_t *p, int shw, int xy /* 0=y,1=x */ , int pu /* 0=pack,1=unpack */, char * packname, char * commname );
int gen_periods(char *dirname, node_t *periods);
int gen_swaps(char *dirname, node_t *swaps);
int gen_cycles(char *dirname, node_t *cycles);
int gen_xposes(char *dirname);
int gen_comm_descrips(char *dirname);
int gen_shift(char *dirname);
int gen_datacalls(char *dirname);
int gen_nest_pack(char *dirname);
int gen_nest_unpack(char *dirname);
int gen_nest_packunpack(FILE *fp, node_t *node, int dir, int down_path);
int count_fields
(
    node_t *node, int *d2, int *d3, char *fourd_names, int down_path,
    int send_mp, int no_mp
);

int gen_debug(char *dirname);
int gen_comms(char *dirname);
#endif
