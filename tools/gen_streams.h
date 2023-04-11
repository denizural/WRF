#ifndef GEN_STREAMS_H
#define GEN_STREAMS_H
int gen_streams(char *dirname);
int gen_io_domain_defs(FILE * fp);
int gen_set_timekeeping_defs(FILE *fp);
int gen_set_timekeeping_alarms(FILE * fp);
int gen_io_form_for_dataset(FILE *fp);
int gen_io_form_for_stream(FILE *fp);
int gen_switches_and_alarms(FILE *fp);
int gen_check_auxstream_alarms(FILE *fp);
int gen_fine_stream_input(FILE *fp);
int gen_med_auxinput_in(FILE *fp);
int gen_med_hist_out_opens(FILE *fp);
int gen_med_hist_out_closes(FILE *fp);
int gen_med_auxinput_in_closes(FILE *fp);
int gen_med_last_solve_io(FILE *fp);
int gen_shutdown_closes(FILE *fp);
int gen_med_open_esmf_calls(FILE *fp);
int gen_med_find_esmf_coupling(FILE *fp);
int gen_io_boilerplate();
#endif
