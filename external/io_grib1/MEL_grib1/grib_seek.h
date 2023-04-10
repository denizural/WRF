#ifndef GRIB_SEEK_H
#define GRIB_SEEK_H
int grib_seek(char *InFile, long *offset, int Read_Index, GRIB_HDR *gh, char *errmsg);
int grib_fseek(FILE *fp, long *offset, int Read_Index, GRIB_HDR *gh, char *errmsg);
#endif
