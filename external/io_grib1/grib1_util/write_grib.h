#ifndef WRITE_GRIB_H
#define WRITE_GRIB_H
int rg_write_grib(PDS_INPUT *pds, grid_desc_sec *gds, char filename[], float **data);
int rg_fwrite_grib(PDS_INPUT *pds, grid_desc_sec *gds, float **data, FILE *fid);
#endif
