#ifndef GRIBHDR2FILE_H 
#define GRIBHDR2FILE_H 
int gribhdr2file(GRIB_HDR *gh, FILE *stream, char *errmsg);
int gribhdr2filed(GRIB_HDR *gh, int f1, char *errmsg);
#endif
