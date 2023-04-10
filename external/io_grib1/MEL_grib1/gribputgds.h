#ifndef GRIBPUTGDS_H
#define GRIBPUTGDS_H
int gribputgds(GEOM_IN  Geom_In, GDS_HEAD_INPUT *pGDS_Head_Input,
               void  **ppvGDS_Proj_Input, GRIB_HDR  **ppgrib_hdr,
               char  *errmsg);
int create_inpLambert (GEOM_IN geom_in, void **ppvGDS_Proj_Input, char *errmsg);
int create_inpPolar(GEOM_IN geom_in, void **ppvGDS_Proj_Input, char *errmsg);
int create_inpLatlon(GEOM_IN geom_in, void **ppvGDS_Proj_Input, char *errmsg);
int create_inpMercator(GEOM_IN geom_in, void **ppvGDS_Proj_Input, char *errmsg);
int inp2grib_Lambert(void **ppvGDS_Proj_Input, LAMBERT  *pLambert,
                     long *lProj_size, char *errmsg);
int inp2grib_PolarSt(void **ppvGDS_Proj_Input, POLAR *Polar, long *lProj_size,
                     char *errmsg);
int inp2grib_Latlon(void **ppvGDS_Proj_Input, LATLON *pLatlon,
                    long *lProj_size, char *errmsg);
int inp2grib_Mercator(void **ppvGDS_Proj_Input, MERCATOR *Mercator,
                      long *lProj_size, char *errmsg);
#endif
