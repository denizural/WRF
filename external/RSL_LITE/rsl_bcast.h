#ifndef RSL_BCAST_H
#define RSL_BCAST_H
typedef struct bcast_point_desc {
    int ig ;
    int jg ;
} bcast_point_desc_t ;

static void destroy_par_info (char *p);
static int destroy_list
(
    rsl_list_t ** list,  /* pointer to pointer to list */
    int (*dfcn)()        /* pointer to function for destroying the data 
                            field of the list */
);

void RSL_LITE_NESTING_RESET ();

void RSL_LITE_TO_CHILD_INFO
(
    int_p  msize_p,             /* number of tasks in minor dim of nest's mesh */
    int_p cips_p, int_p cipe_p, /* patch dims of SOURCE DOMAIN */
    int_p cjps_p, int_p cjpe_p,
    int_p iids_p, int_p iide_p, /* domain dims of INTERMEDIATE DOMAIN */
    int_p ijds_p, int_p ijde_p,
    int_p nids_p, int_p nide_p, /* domain dims of CHILD DOMAIN */
    int_p njds_p, int_p njde_p, 
    int_p pgr_p,  int_p shw_p , /* nest ratio and stencil half width */
    int_p offset_p,             /* first task of the nest in me_and_mom communicator */
    int_p ntasks_par_x_p, int_p ntasks_par_y_p,   /* proc counts in x and y */
    int_p ntasks_nest_x_p, int_p ntasks_nest_y_p, /* proc counts in x and y */
    int_p min_subdomain,         /* minimum width allowed for a subdomain in a dim ON PARENT */
    int_p icoord_p, int_p jcoord_p,
    int_p idim_cd_p, int_p jdim_cd_p,
    int_p ig_p, int_p jg_p, int_p retval_p
);

void RSL_LITE_TO_PARENT_INFO 
(
    int_p msize_p, 
    int_p nips_p, int_p nipe_p, /* patch dims of SOURCE DOMAIN (CHILD) */
    int_p njps_p, int_p njpe_p,  
    int_p cids_p, int_p cide_p, /* domain dims of TARGET DOMAIN (PARENT) */
    int_p cjds_p, int_p cjde_p,  
    int_p offset_p, 
    int_p ntasks_par_x_p, int_p ntasks_par_y_p, /* proc counts in x and y */
    int_p ntasks_nest_x_p, int_p ntasks_nest_y_p, /* proc counts in x and y */
    int_p min_subdomain,
    int_p icoord_p, int_p jcoord_p,
    int_p idim_cd_p, int_p jdim_cd_p,
    int_p ig_p, int_p jg_p,
    int_p retval_p
);

void RSL_LITE_TO_CHILD_MSG 
(
    int_p  nbuf_p,  /* (I) Number of bytes to be packed. */
    char   *buf     /* (I) Buffer containing the data to be packed. */
);

void RSL_LITE_TO_PARENT_MSG
(
    int_p  nbuf_p,  /* (I) Number of bytes to be packed. */
    char   *buf     /* (I) Buffer containing the data to be packed. */
);

void rsl_lite_to_peerpoint_msg 
(
    int_p  nbuf_p,  /* (I) Number of bytes to be packed. */
    char   *buf     /* (I) Buffer containing the data to be packed. */
);

void RSL_LITE_BCAST_MSGS 
(
    int_p mytask_p, int_p ntasks_par_p, int_p ntasks_nest_p, 
    int_p offset_p,  /* offset is the id of the first task in the nest set */
    int_p Fcomm  
);

void rsl_lite_allgather_msgs 
(
    int_p  mytask_p,
    int_p  ntasks_par_p,
    int_p  ntasks_nest_p,
    int_p  offset_p,
#ifndef STUBMPI
    MPI_Comm  comm,
#else
    int  comm,
#endif
    int  dir
);

void RSL_LITE_FROM_PARENT_INFO
(
    int_p  ig_p,        /* (O) Global index in M dimension of nest. */
    int_p  jg_p,        /* (O) Global index in N dimension of nest. */
    int_p  retval_p     /* (O) Return value; =1 valid point, =0 done. */
);

void RSL_LITE_FROM_CHILD_INFO 
(
    int_p  ig_p,        /* (O) Global index in M dimension of nest. */
    int_p  jg_p,        /* (O) Global index in N dimension of nest. */
    int_p  retval_p     /* (O) Return value; =1 valid point, =0 done. */
);

void rsl_lite_from_peerpoint_info
(
    int_p  ig_p,        /* (O) Global index in M dimension of nest. */
    int_p  jg_p,        /* (O) Global index in N dimension of nest. */
    int_p  retval_p     /* (O) Return value; =1 valid point, =0 done. */
);

void RSL_LITE_FROM_PARENT_MSG 
(
    int_p  len_p,    /* (I) Number of bytes to unpack. */
    int    *buf      /* (O) Destination buffer. */
);

void RSL_LITE_FROM_CHILD_MSG
(
    int_p  len_p,    /* (I) Number of bytes to unpack. */
    int    *buf      /* (O) Destination buffer. */
);

void rsl_lite_from_peerpoint_msg
(
    int_p  len_p,    /* (I) Number of bytes to unpack. */
    int    *buf      /* (O) Destination buffer. */
);
#endif
