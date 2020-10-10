#include "hal.h"

//generated by tools/create_hal_tbl.py DO NOT EDIT

extern const hal_comp_t io_comp_struct; // found in src/comps/hw/io4.c
extern const hal_comp_t hv_comp_struct; // found in src/comps/hv.c
extern const hal_comp_t enc_cmd_comp_struct; // found in src/comps/enc_cmd.c
extern const hal_comp_t o_fb_comp_struct; // found in src/comps/o_fb.c
extern const hal_comp_t sserial_comp_struct; // found in src/comps/sserial.c
extern const hal_comp_t yaskawa_comp_struct; // found in src/comps/yaskawa.c
extern const hal_comp_t encs_comp_struct; // found in src/comps/encs.c
extern const hal_comp_t encf_comp_struct; // found in src/comps/encf.c
extern const hal_comp_t endat_comp_struct; // found in src/comps/endat.c
extern const hal_comp_t usart_comp_struct; // found in src/comps/usart.c
extern const hal_comp_t encm_comp_struct; // found in src/comps/encm.c
extern const hal_comp_t dmm_comp_struct; // found in src/comps/dmm.c
extern const hal_comp_t smartabs_comp_struct; // found in src/comps/smartabs.c
extern const hal_comp_t adc_comp_struct; // found in src/comps/adc.c
extern const hal_comp_t enc_fb_comp_struct; // found in src/comps/enc_fb.c
extern const hal_comp_t conf_comp_struct; // found in src/comps/conf.c
extern const hal_comp_t res_comp_struct; // found in src/comps/res.c
extern const hal_comp_t hx_comp_struct; // found in src/comps/hx711.c
extern const hal_comp_t sim_comp_struct; // found in shared/comps/sim.c
extern const hal_comp_t term_comp_struct; // found in shared/comps/term.c
extern const hal_comp_t svm_comp_struct; // found in shared/comps/svm.c
extern const hal_comp_t vel_comp_struct; // found in shared/comps/vel.c
extern const hal_comp_t rev_comp_struct; // found in shared/comps/rev.c
extern const hal_comp_t hal_test_comp_struct; // found in shared/comps/hal_test.c
extern const hal_comp_t ypid_comp_struct; // found in shared/comps/ypid.c
extern const hal_comp_t fault_comp_struct; // found in shared/comps/fault.c
extern const hal_comp_t pid_comp_struct; // found in shared/comps/pid.c
extern const hal_comp_t spid_comp_struct; // found in shared/comps/spid.c
extern const hal_comp_t pe_comp_struct; // found in shared/comps/pe.c
extern const hal_comp_t pmsm_limits_comp_struct; // found in shared/comps/pmsm_limits.c
extern const hal_comp_t pmsm_ttc_comp_struct; // found in shared/comps/pmsm_ttc.c
extern const hal_comp_t dc_limits_comp_struct; // found in shared/comps/dc_limits.c
extern const hal_comp_t dc_ttc_comp_struct; // found in shared/comps/dc_ttc.c
extern const hal_comp_t acim_ttc_comp_struct; // found in shared/comps/acim_ttc.c
extern const hal_comp_t uvw_comp_struct; // found in shared/comps/uvw.c
extern const hal_comp_t fanuc_comp_struct; // found in shared/comps/fanuc.c
extern const hal_comp_t fb_switch_comp_struct; // found in shared/comps/fb_switch.c
extern const hal_comp_t reslimit_comp_struct; // found in shared/comps/reslimit.c
extern const hal_comp_t iit_comp_struct; // found in shared/comps/iit.c
extern const hal_comp_t vel_int_comp_struct; // found in shared/comps/vel_int.c
extern const hal_comp_t linrev_comp_struct; // found in shared/comps/linrev.c
extern const hal_comp_t psi_comp_struct; // found in shared/comps/psi.c
extern const hal_comp_t stp_comp_struct; // found in shared/comps/stp.c
extern const hal_comp_t uf_comp_struct; // found in shared/comps/uf2.c
extern const hal_comp_t ramp_comp_struct; // found in shared/comps/ramp.c
extern const hal_comp_t scale_comp_struct; // found in shared/comps/scale.c
extern const hal_comp_t idx_home_comp_struct; // found in shared/comps/idx_home.c
extern const hal_comp_t move_comp_struct; // found in shared/comps/move.c
extern const hal_comp_t not_comp_struct; // found in shared/comps/not.c
extern const hal_comp_t and_comp_struct; // found in shared/comps/and.c
extern const hal_comp_t or_comp_struct; // found in shared/comps/or.c
extern const hal_comp_t jog_comp_struct; // found in shared/comps/jog.c
extern const hal_comp_t velbuf_comp_struct; // found in shared/comps/velbuf.c
extern const hal_comp_t avg_comp_struct; // found in shared/comps/avg.c
extern const hal_comp_t mux_comp_struct; // found in shared/comps/mux.c
extern const hal_comp_t veltopos_comp_struct; // found in shared/comps/veltopos.c
extern const hal_comp_t debounce_comp_struct; // found in shared/comps/debounce.c
extern const hal_comp_t pos_filter_comp_struct; // found in shared/comps/pos_filter.c
extern const hal_comp_t rl_comp_struct; // found in shared/comps/rl.c
extern const hal_comp_t mad_comp_struct; // found in shared/comps/mad.c
extern const hal_comp_t sensorless_comp_struct; // found in shared/comps/sensorless.c
extern const hal_comp_t field_comp_struct; // found in shared/comps/field.c
extern const hal_comp_t gain_comp_struct; // found in shared/comps/gain.c
extern const hal_comp_t rlpsij_comp_struct; // found in shared/comps/rlpsij.c
extern const hal_comp_t veltime_comp_struct; // found in shared/comps/veltime.c
extern const hal_comp_t mpid_comp_struct; // found in shared/comps/mpid.c
extern const hal_comp_t fmove_comp_struct; // found in shared/comps/fmove.c
extern const hal_comp_t home_comp_struct; // found in shared/comps/home.c
extern const hal_comp_t en_comp_struct; // found in shared/comps/en.c
extern const hal_comp_t th_comp_struct; // found in shared/comps/th.c


const hal_comp_t * comps[] = {
   &io_comp_struct, // found in src/comps/hw/io4.c
   &hv_comp_struct, // found in src/comps/hv.c
   &enc_cmd_comp_struct, // found in src/comps/enc_cmd.c
   &o_fb_comp_struct, // found in src/comps/o_fb.c
   &sserial_comp_struct, // found in src/comps/sserial.c
   &yaskawa_comp_struct, // found in src/comps/yaskawa.c
   &encs_comp_struct, // found in src/comps/encs.c
   &encf_comp_struct, // found in src/comps/encf.c
   &endat_comp_struct, // found in src/comps/endat.c
   &usart_comp_struct, // found in src/comps/usart.c
   &encm_comp_struct, // found in src/comps/encm.c
   &dmm_comp_struct, // found in src/comps/dmm.c
   &smartabs_comp_struct, // found in src/comps/smartabs.c
   &adc_comp_struct, // found in src/comps/adc.c
   &enc_fb_comp_struct, // found in src/comps/enc_fb.c
   &conf_comp_struct, // found in src/comps/conf.c
   &res_comp_struct, // found in src/comps/res.c
   &hx_comp_struct, // found in src/comps/hx711.c
   &sim_comp_struct, // found in shared/comps/sim.c
   &term_comp_struct, // found in shared/comps/term.c
   &svm_comp_struct, // found in shared/comps/svm.c
   &vel_comp_struct, // found in shared/comps/vel.c
   &rev_comp_struct, // found in shared/comps/rev.c
   &hal_test_comp_struct, // found in shared/comps/hal_test.c
   &ypid_comp_struct, // found in shared/comps/ypid.c
   &fault_comp_struct, // found in shared/comps/fault.c
   &pid_comp_struct, // found in shared/comps/pid.c
   &spid_comp_struct, // found in shared/comps/spid.c
   &pe_comp_struct, // found in shared/comps/pe.c
   &pmsm_limits_comp_struct, // found in shared/comps/pmsm_limits.c
   &pmsm_ttc_comp_struct, // found in shared/comps/pmsm_ttc.c
   &dc_limits_comp_struct, // found in shared/comps/dc_limits.c
   &dc_ttc_comp_struct, // found in shared/comps/dc_ttc.c
   &acim_ttc_comp_struct, // found in shared/comps/acim_ttc.c
   &uvw_comp_struct, // found in shared/comps/uvw.c
   &fanuc_comp_struct, // found in shared/comps/fanuc.c
   &fb_switch_comp_struct, // found in shared/comps/fb_switch.c
   &reslimit_comp_struct, // found in shared/comps/reslimit.c
   &iit_comp_struct, // found in shared/comps/iit.c
   &vel_int_comp_struct, // found in shared/comps/vel_int.c
   &linrev_comp_struct, // found in shared/comps/linrev.c
   &psi_comp_struct, // found in shared/comps/psi.c
   &stp_comp_struct, // found in shared/comps/stp.c
   &uf_comp_struct, // found in shared/comps/uf2.c
   &ramp_comp_struct, // found in shared/comps/ramp.c
   &scale_comp_struct, // found in shared/comps/scale.c
   &idx_home_comp_struct, // found in shared/comps/idx_home.c
   &move_comp_struct, // found in shared/comps/move.c
   &not_comp_struct, // found in shared/comps/not.c
   &and_comp_struct, // found in shared/comps/and.c
   &or_comp_struct, // found in shared/comps/or.c
   &jog_comp_struct, // found in shared/comps/jog.c
   &velbuf_comp_struct, // found in shared/comps/velbuf.c
   &avg_comp_struct, // found in shared/comps/avg.c
   &mux_comp_struct, // found in shared/comps/mux.c
   &veltopos_comp_struct, // found in shared/comps/veltopos.c
   &debounce_comp_struct, // found in shared/comps/debounce.c
   &pos_filter_comp_struct, // found in shared/comps/pos_filter.c
   &rl_comp_struct, // found in shared/comps/rl.c
   &mad_comp_struct, // found in shared/comps/mad.c
   &sensorless_comp_struct, // found in shared/comps/sensorless.c
   &field_comp_struct, // found in shared/comps/field.c
   &gain_comp_struct, // found in shared/comps/gain.c
   &rlpsij_comp_struct, // found in shared/comps/rlpsij.c
   &veltime_comp_struct, // found in shared/comps/veltime.c
   &mpid_comp_struct, // found in shared/comps/mpid.c
   &fmove_comp_struct, // found in shared/comps/fmove.c
   &home_comp_struct, // found in shared/comps/home.c
   &en_comp_struct, // found in shared/comps/en.c
   &th_comp_struct, // found in shared/comps/th.c
};

const uint32_t comp_count = sizeof(comps) / sizeof(comps[0]);

const pin_t pins[] = {
   // pins for comp io found in src/comps/hw/io4.c
   "rt_prio",
   "frt_prio",
   "fan",
   "state",
   "fault",
   "out0",
   "out1",
   "out2",
   "out_freq",
   "out_arr",
   "out_cnt",
   "out_ccr1",
   "in0",
   "in1",
   "ind0",
   "ind1",
   "ind0n",
   "ind1n",
   "th0",
   "th1",
   "CTX",
   "CRX",
   "C12",
   "C36",
   "C54",
   "C78",
   "cmd_remap",
   "swd_remap",
   "DIO",
   "CK",
   "fb0g",
   "fb0y",
   "fb1g",
   "fb1y",
   "cmdg",
   "cmdy",
   "fb0",
   "fb1",
   "fbd0",
   "fbd1",
   "fbd0n",
   "fbd1n",
   "fbth0",
   "fbth1",
   "fb0a",
   "fb0b",
   "fb0z",
   "fb1a",
   "fb1b",
   "fb1z",
   "fbsd",
   "master_arr",
   "clock_scale",
   // pins for comp hv found in src/comps/hv.c
   "rt_prio",
   "frt_prio",
   "d_cmd",
   "q_cmd",
   "pos",
   "vel",
   "en",
   "phase_mode",
   "cmd_mode",
   "r",
   "l",
   "psi",
   "cur_p",
   "cur_i",
   "cur_ff",
   "cur_ind",
   "max_y",
   "max_cur",
   "dac",
   "dc_volt",
   "id_fb",
   "iq_fb",
   "ud_fb",
   "uq_fb",
   "abs_cur",
   "abs_volt",
   "duty",
   "hv_temp",
   "mot_temp",
   "core_temp",
   "fault",
   "ignore_fault_pin",
   "y",
   "u_fb",
   "v_fb",
   "w_fb",
   "rev",
   "pwm_volt",
   "uart_sr",
   "uart_dr",
   "crc_error",
   "scale",
   "state",
   "value",
   // pins for comp enc_cmd found in src/comps/enc_cmd.c
   "rt_prio",
   "frt_prio",
   "res",
   "pos",
   "a",
   "b",
   "fault",
   "mode",
   "remap",
   "input_filter",
   // pins for comp o_fb found in src/comps/o_fb.c
   "rt_prio",
   "frt_prio",
   "a",
   "b",
   // pins for comp sserial found in src/comps/sserial.c
   "rt_prio",
   "frt_prio",
   "error",
   "crc_error",
   "connected",
   "timeout",
   "pos_cmd",
   "pos_cmd_d",
   "pos_fb",
   "vel_fb",
   "current",
   "scale",
   "clock_scale",
   "available",
   "phase",
   "in0",
   "in1",
   "in2",
   "in3",
   "fault",
   "out0",
   "out1",
   "out2",
   "out3",
   "enable",
   "index_clear",
   "index_out",
   "pos_advance",
   // pins for comp yaskawa found in src/comps/yaskawa.c
   "rt_prio",
   "frt_prio",
   "pos",
   "error",
   "error_sum",
   "dump",
   "len",
   "off",
   "len2",
   "off2",
   "probe2",
   "len3",
   "len4",
   "len5",
   "probe3",
   "probe4",
   "probe5",
   "send",
   "crc_ok",
   "crc_error",
   // pins for comp encs found in src/comps/encs.c
   "rt_prio",
   "frt_prio",
   "pos",
   "error",
   "state",
   // pins for comp encf found in src/comps/encf.c
   "rt_prio",
   "frt_prio",
   "error",
   "dma",
   "pos",
   "abs_pos",
   "state",
   "turns",
   "com_pos",
   "index",
   "req_len",
   "send_step",
   "crc_ok",
   "crc_er",
   "freq",
   "bit_ticks",
   // pins for comp endat found in src/comps/endat.c
   "rt_prio",
   "frt_prio",
   "pos",
   "mpos",
   "f1",
   "crc",
   "shift",
   "timer",
   "swap",
   "skip",
   "bytes",
   "error",
   "state",
   "endat_error",
   "endat_warning",
   "endat_state",
   "pos_len",
   "mpos_len",
   "pos_res",
   "type",
   "max_vel",
   "req",
   "print_time",
   // pins for comp usart found in src/comps/usart.c
   "rt_prio",
   "frt_prio",
   "req",
   "print",
   "freq",
   "dma",
   "pos_offset",
   "pos_len",
   "pos",
   // pins for comp encm found in src/comps/encm.c
   "rt_prio",
   "frt_prio",
   "pos",
   "error",
   "state",
   "dma",
   // pins for comp dmm found in src/comps/dmm.c
   "rt_prio",
   "frt_prio",
   "pos",
   "error",
   "state",
   "dma",
   "dump",
   // pins for comp smartabs found in src/comps/smartabs.c
   "rt_prio",
   "frt_prio",
   "pos",
   "error",
   "state",
   "dma",
   "a0",
   "a1",
   "a2",
   "a3",
   "a4",
   "a5",
   // pins for comp adc found in src/comps/adc.c
   "rt_prio",
   "frt_prio",
   "sin0",
   "cos0",
   "sin0l",
   "cos0l",
   "quad",
   "amp0",
   "sin1",
   "cos1",
   "sin1l",
   "cos1l",
   "amp1",
   "res_mode",
   "sin_gain",
   "cos_gain",
   "sin_offset",
   "cos_offset",
   "send_step",
   "offset0",
   "offset1",
   "offset2",
   "offset3",
   "offset4",
   "offset5",
   "offset6",
   "offset7",
   "gain0",
   "gain1",
   "gain2",
   "gain3",
   "gain4",
   "gain5",
   "gain6",
   "gain7",
   // pins for comp enc_fb found in src/comps/enc_fb.c
   "rt_prio",
   "frt_prio",
   "res",
   "ires",
   "pos",
   "abs_pos",
   "state",
   "index",
   "a",
   "b",
   "ipos",
   "sin",
   "cos",
   "quad",
   "oquad",
   "oquadoff",
   "qdiff",
   "error",
   "amp",
   "vel",
   "ccr3",
   "en_index",
   "indexprint",
   // pins for comp conf found in src/comps/conf.c
   "rt_prio",
   "frt_prio",
   "r",
   "l",
   "j",
   "j_load",
   "j_lpf",
   "psi",
   "polecount",
   "out_rev",
   "high_mot_temp",
   "max_mot_temp",
   "phase_time",
   "phase_cur",
   "max_vel",
   "max_acc",
   "max_force",
   "max_dc_cur",
   "max_ac_cur",
   "mot_fb_polecount",
   "mot_fb_offset",
   "mot_fb_rev",
   "mot_fb_res",
   "joint_fb_polecount",
   "joint_fb_offset",
   "joint_fb_rev",
   "joint_fb_res",
   "com_fb_polecount",
   "com_fb_offset",
   "com_fb_rev",
   "com_fb_res",
   "cmd_rev",
   "cmd_res",
   "max_dc_volt",
   "max_hv_temp",
   "max_pos_error",
   "high_dc_volt",
   "low_dc_volt",
   "high_hv_temp",
   "fan_hv_temp",
   "fan_mot_temp",
   "g",
   "pos_p",
   "vel_p",
   "vel_i",
   "vel_g",
   "cur_p",
   "cur_i",
   "cur_ff",
   "cur_ind",
   "max_sat",
   // pins for comp res found in src/comps/res.c
   "rt_prio",
   "frt_prio",
   "pos",
   "amp",
   "quad",
   "poles",
   "min_amp",
   "vel",
   "sin",
   "cos",
   "enable",
   "error",
   "state",
   "phase",
   "res_mode",
   "freq",
   // pins for comp hx found in src/comps/hx711.c
   "rt_prio",
   "frt_prio",
   "out0",
   "out1",
   "gain",
   "offset",
   "sleep",
   "clk_inv",
   "data_inv",
   "timer",
   "time",
   // pins for comp sim found in shared/comps/sim.c
   "rt_prio",
   "frt_prio",
   "amp",
   "freq",
   "sin",
   "msin",
   "sin2",
   "msin2",
   "sin3",
   "msin3",
   "square",
   "vel",
   "res",
   "offset",
   // pins for comp term found in shared/comps/term.c
   "rt_prio",
   "frt_prio",
   "wave0",
   "wave1",
   "wave2",
   "wave3",
   "wave4",
   "wave5",
   "wave6",
   "wave7",
   "offset0",
   "offset1",
   "offset2",
   "offset3",
   "offset4",
   "offset5",
   "offset6",
   "offset7",
   "gain0",
   "gain1",
   "gain2",
   "gain3",
   "gain4",
   "gain5",
   "gain6",
   "gain7",
   "send_step",
   "con",
   // pins for comp svm found in shared/comps/svm.c
   "rt_prio",
   "frt_prio",
   "u",
   "v",
   "w",
   "udc",
   "su",
   "sv",
   "sw",
   "cmode",
   "mode",
   "enu",
   "env",
   "enw",
   // pins for comp vel found in shared/comps/vel.c
   "rt_prio",
   "frt_prio",
   "pos_in",
   "pos_out",
   "vel",
   "acc",
   "w",
   "d",
   "g",
   "h",
   "j",
   "lp",
   "torque",
   "vel_ff",
   "en",
   "pos_error",
   // pins for comp rev found in shared/comps/rev.c
   "rt_prio",
   "frt_prio",
   "in",
   "out",
   "in_d",
   "out_d",
   "rev",
   // pins for comp hal_test found in shared/comps/hal_test.c
   "rt_prio",
   "frt_prio",
   "rt_wait",
   "frt_wait",
   // pins for comp ypid found in shared/comps/ypid.c
   "rt_prio",
   "frt_prio",
   "pos_ext_cmd",
   "pos_fb",
   "pos_error",
   "vel_ext_cmd",
   "vel_fb",
   "vel_cmd",
   "vel_error",
   "vel_min",
   "enable",
   "out",
   "pos_p",
   "vel_p",
   "vel_i",
   "vel_ff",
   "max_vel",
   "max_acc",
   "max_out",
   "vel_sat",
   "out_sat",
   "saturated",
   // pins for comp fault found in shared/comps/fault.c
   "rt_prio",
   "frt_prio",
   "en",
   "state",
   "fault",
   "last_fault",
   "en_out",
   "en_fb",
   "en_pid",
   "fb_ready",
   "cmd_error",
   "mot_fb_error",
   "com_fb_error",
   "joint_fb_error",
   "hv_error",
   "hv_temp",
   "mot_temp",
   "max_hv_temp",
   "max_mot_temp",
   "high_hv_temp",
   "high_mot_temp",
   "fan_hv_temp",
   "fan_mot_temp",
   "scale",
   "dc_volt",
   "min_dc_volt",
   "high_dc_volt",
   "max_dc_volt",
   "dc_cur",
   "max_dc_cur",
   "ac_cur",
   "max_ac_cur",
   "pos_error",
   "max_pos_error",
   "sat",
   "max_sat",
   "mot_brake",
   "dc_brake",
   "hv_fan",
   "mot_fan",
   "print",
   "brake_release",
   // pins for comp pid found in shared/comps/pid.c
   "rt_prio",
   "frt_prio",
   "pos_ext_cmd",
   "pos_fb",
   "pos_error",
   "vel_ext_cmd",
   "vel_fb",
   "vel_cmd",
   "vel_error",
   "acc_ext_cmd",
   "acc_cmd",
   "torque_ext_cmd",
   "torque_cmd",
   "torque_cor_cmd",
   "torque_sum",
   "friction",
   "damping",
   "load",
   "enable",
   "pos_en",
   "vel_en",
   "acc_en",
   "torque_en",
   "pos_p",
   "vel_p",
   "vel_i",
   "vel_g",
   "scale",
   "pos_p_scale",
   "vel_p_scale",
   "vel_i_scale",
   "j_lpf",
   "acc_g",
   "g",
   "j_mot",
   "j_load",
   "max_vel",
   "max_torque",
   "min_torque",
   "max_usr_vel",
   "max_usr_acc",
   "max_usr_torque",
   "vel_sat",
   "acc_sat",
   "torque_sat",
   "saturated",
   // pins for comp spid found in shared/comps/spid.c
   "rt_prio",
   "frt_prio",
   "cmd",
   "fb",
   "en",
   "kp",
   "ki",
   "kd",
   "ksd",
   "kdi",
   "ksdi",
   "kff0",
   "kff1",
   "offset",
   "min_output",
   "max_output",
   "max_error",
   "output",
   "error",
   "sat",
   // pins for comp pe found in shared/comps/pe.c
   "rt_prio",
   "frt_prio",
   "udc",
   "idc",
   "ud",
   "uq",
   "id",
   "iq",
   "torque",
   "vel",
   "r",
   "j",
   "cap",
   "e_el",
   "e_kin",
   "p_el_dc",
   "p_el_ac",
   "p_m",
   "p_t",
   // pins for comp pmsm_limits found in shared/comps/pmsm_limits.c
   "rt_prio",
   "frt_prio",
   "psi",
   "r",
   "ld",
   "lq",
   "polecount",
   "ac_volt",
   "next_max_cur",
   "next_max_torque",
   "next_min_cur",
   "next_min_torque",
   "max_cur",
   "max_torque",
   "min_cur",
   "min_torque",
   "abs_max_cur",
   "abs_max_torque",
   "abs_max_vel",
   "iq",
   "indq",
   // pins for comp pmsm_ttc found in shared/comps/pmsm_ttc.c
   "rt_prio",
   "frt_prio",
   "psi",
   "polecount",
   "ac",
   "pc",
   "nc",
   "ae",
   "pe",
   "ne",
   "pos_in",
   "pos_out",
   "t",
   "g",
   "block_gain",
   "torque",
   "cur",
   // pins for comp dc_limits found in shared/comps/dc_limits.c
   "rt_prio",
   "frt_prio",
   "psi",
   "r",
   "ld",
   "lq",
   "ac_volt",
   "next_max_cur",
   "next_max_torque",
   "next_min_cur",
   "next_min_torque",
   "max_cur",
   "max_torque",
   "min_cur",
   "min_torque",
   "abs_max_cur",
   "abs_max_torque",
   "abs_max_vel",
   "iq",
   "vel",
   // pins for comp dc_ttc found in shared/comps/dc_ttc.c
   "rt_prio",
   "frt_prio",
   "psi",
   "torque",
   "cur",
   // pins for comp acim_ttc found in shared/comps/acim_ttc.c
   "rt_prio",
   "frt_prio",
   "mode",
   "sensorless",
   "torque_n",
   "cur_n",
   "slip_n",
   "polecount",
   "freq_n",
   "vel_n",
   "u_n",
   "u_boost",
   "t_boost",
   "s_boost",
   "torque",
   "vel_m",
   "d_cmd",
   "q_cmd",
   "cmd_mode",
   "pos",
   "vel_e",
   "slip",
   "t_min",
   "t_max",
   "scale",
   "ki",
   "duty",
   "duty_setpoint",
   // pins for comp uvw found in shared/comps/uvw.c
   "rt_prio",
   "frt_prio",
   "u",
   "v",
   "w",
   "amp",
   "timer",
   "en_time",
   "mode",
   "led",
   "p0",
   "p1",
   "p2",
   "p3",
   "p4",
   "p5",
   "p6",
   "p7",
   "pos",
   "rpos",
   "state",
   "error",
   // pins for comp fanuc found in shared/comps/fanuc.c
   "rt_prio",
   "frt_prio",
   "C1",
   "C2",
   "C4",
   "C8",
   "pos",
   // pins for comp fb_switch found in shared/comps/fb_switch.c
   "rt_prio",
   "frt_prio",
   "polecount",
   "track_fb",
   "offset_first_enable",
   "pos_fb",
   "vel_fb",
   "com_fb",
   "joint_fb",
   "state",
   "cmd_pos",
   "mot_pos",
   "mot_abs_pos",
   "mot_polecount",
   "mot_offset",
   "mot_state",
   "mot_rev",
   "mot_fb_no_offset",
   "mot_abs_fb_no_offset",
   "plot_fb_pos",
   "com_pos",
   "com_abs_pos",
   "com_polecount",
   "com_offset",
   "com_state",
   "com_rev",
   "com_fb_no_offset",
   "joint_pos",
   "joint_abs_pos",
   "joint_offset",
   "joint_state",
   "joint_rev",
   "joint_fb_no_offset",
   "mot_joint_ratio",
   "phase_time",
   "phase_cur",
   "phase_gain",
   "offset",
   "id",
   "current_com_pos",
   "en",
   // pins for comp reslimit found in shared/comps/reslimit.c
   "rt_prio",
   "frt_prio",
   "pos_in",
   "pos_out",
   "res",
   // pins for comp iit found in shared/comps/iit.c
   "rt_prio",
   "frt_prio",
   "amb_temp",
   "high_temp",
   "max_temp",
   "max_cur",
   "cur_boost",
   "max_time",
   "temp",
   "cur",
   // pins for comp vel_int found in shared/comps/vel_int.c
   "rt_prio",
   "frt_prio",
   "pos_in",
   "pos_out",
   "vel_in",
   "vel_out",
   "cmd_freq",
   "real_cmd_freq",
   "wd",
   "error",
   // pins for comp linrev found in shared/comps/linrev.c
   "rt_prio",
   "frt_prio",
   "scale",
   "cmd_in",
   "cmd_out",
   "cmd_d_in",
   "cmd_d_out",
   "fb_in",
   "fb_out",
   "fb_d_in",
   "fb_d_out",
   "rev_clear",
   "rev",
   // pins for comp psi found in shared/comps/psi.c
   "rt_prio",
   "frt_prio",
   "vel",
   "dc_volt",
   "u",
   "v",
   "w",
   "polecount",
   "psi",
   "max_psi",
   // pins for comp stp found in shared/comps/stp.c
   "rt_prio",
   "frt_prio",
   "target",
   "vel_ext_cmd",
   "acc_ext_cmd",
   "jog",
   "pos",
   "mpos",
   "vel_cmd",
   "acc_cmd",
   "max_pos",
   "min_pos",
   "max_vel",
   "max_acc",
   "dtg",
   "ttg",
   "at_target",
   // pins for comp uf found in shared/comps/uf2.c
   "rt_prio",
   "frt_prio",
   "u_n",
   "vel_n",
   "polecount",
   "cur_n",
   "slip_n",
   "scale",
   "vel_cmd",
   "cur",
   "u_cmd",
   "vel_cmd_out",
   "com_pos",
   "load",
   // pins for comp ramp found in shared/comps/ramp.c
   "rt_prio",
   "frt_prio",
   "vel_ext_cmd",
   "en",
   "scale",
   "max_vel",
   "max_acc",
   "at_speed_th",
   "vel_cmd",
   "at_speed",
   "en_out",
   "en_timer",
   "en_delay",
   // pins for comp scale found in shared/comps/scale.c
   "rt_prio",
   "frt_prio",
   "in0",
   "out0",
   "in1",
   "out1",
   "scale",
   // pins for comp idx_home found in shared/comps/idx_home.c
   "rt_prio",
   "frt_prio",
   "mot_state",
   "fb",
   "fb_abs",
   "index_en",
   "index_clear",
   "pos_out",
   // pins for comp move found in shared/comps/move.c
   "rt_prio",
   "frt_prio",
   "fwd",
   "rev",
   "scale",
   "out",
   // pins for comp not found in shared/comps/not.c
   "rt_prio",
   "frt_prio",
   "in",
   "out",
   // pins for comp and found in shared/comps/and.c
   "rt_prio",
   "frt_prio",
   "in0",
   "in1",
   "in2",
   "in3",
   "out",
   // pins for comp or found in shared/comps/or.c
   "rt_prio",
   "frt_prio",
   "in0",
   "in1",
   "in2",
   "in3",
   "out",
   // pins for comp jog found in shared/comps/jog.c
   "rt_prio",
   "frt_prio",
   "jog",
   // pins for comp velbuf found in shared/comps/velbuf.c
   "rt_prio",
   "frt_prio",
   "pos",
   "vel",
   "vel_lp",
   "min_pos_diff",
   "lpf",
   "diff_time",
   "diff_pos",
   // pins for comp avg found in shared/comps/avg.c
   "rt_prio",
   "frt_prio",
   "in",
   "out",
   "lpf",
   "mult",
   "offset",
   // pins for comp mux found in shared/comps/mux.c
   "rt_prio",
   "frt_prio",
   "in0",
   "in1",
   "in2",
   "in3",
   "in4",
   "in5",
   "in6",
   "in7",
   "in8",
   "in9",
   "in10",
   "in11",
   "in12",
   "in13",
   "in14",
   "in15",
   "in16",
   "in17",
   "in18",
   "in19",
   "in20",
   "in21",
   "in22",
   "in23",
   "in24",
   "in25",
   "in26",
   "in27",
   "in28",
   "in29",
   "in30",
   "in31",
   "in32",
   "in33",
   "in34",
   "in35",
   "in36",
   "in37",
   "in38",
   "in39",
   "in40",
   "in41",
   "in42",
   "in43",
   "in44",
   "in45",
   "in46",
   "in47",
   "in48",
   "in49",
   "in50",
   "in51",
   "in52",
   "in53",
   "in54",
   "in55",
   "in56",
   "in57",
   "in58",
   "in59",
   "in60",
   "in61",
   "in62",
   "in63",
   "in64",
   "in65",
   "in66",
   "in67",
   "in68",
   "in69",
   "in70",
   "in71",
   "in72",
   "in73",
   "in74",
   "in75",
   "in76",
   "in77",
   "in78",
   "in79",
   "out0",
   "out1",
   "out2",
   "out3",
   "out4",
   "out5",
   "out6",
   "out7",
   "out8",
   "out9",
   "mux",
   // pins for comp veltopos found in shared/comps/veltopos.c
   "rt_prio",
   "frt_prio",
   "vel",
   "vel_fb",
   "max_acc",
   "max_vel",
   "polecount",
   "pos",
   // pins for comp debounce found in shared/comps/debounce.c
   "rt_prio",
   "frt_prio",
   "in",
   "out",
   "debounce_time",
   "timer",
   // pins for comp pos_filter found in shared/comps/pos_filter.c
   "rt_prio",
   "frt_prio",
   "pos_in",
   "vel_in",
   "pos_out",
   "vel_out",
   "acc_out",
   "bandwidth",
   "en",
   // pins for comp rl found in shared/comps/rl.c
   "rt_prio",
   "frt_prio",
   "r_test_cur",
   "l_test_volt",
   "r_test_time",
   "l_test_time",
   "ud_cmd",
   "ud_fb",
   "id_fb",
   "uq_cmd",
   "uq_fb",
   "iq_fb",
   "ki",
   "en",
   "en_out",
   "state",
   "timer",
   "counter",
   "r",
   "ur",
   "ir",
   "ld",
   "lq",
   "u0",
   "u1",
   "i0",
   "i1",
   "et",
   // pins for comp mad found in shared/comps/mad.c
   "rt_prio",
   "frt_prio",
   "in",
   "mult",
   "add",
   "out",
   // pins for comp sensorless found in shared/comps/sensorless.c
   "rt_prio",
   "frt_prio",
   "r",
   "l",
   "ki",
   "kb",
   "kl",
   "min_vel",
   "vel_boost",
   "max_vel",
   "id",
   "iq",
   "ud",
   "uq",
   "ud1",
   "uq1",
   "ud2",
   "uq2",
   "vel",
   "pos",
   "ed",
   "eq",
   "old_id",
   "old_iq",
   "delta_id",
   "delta_iq",
   // pins for comp field found in shared/comps/field.c
   "rt_prio",
   "frt_prio",
   "vele_n",
   "velm_n",
   "i_n",
   "t_n",
   "vel_boost",
   "t_boost",
   "vel",
   "vel_mode",
   "in_mode",
   "t",
   "iq",
   "id",
   "iq_max",
   "iq_min",
   "t_max",
   "t_min",
   "slip",
   "velm",
   "vele",
   // pins for comp gain found in shared/comps/gain.c
   "rt_prio",
   "frt_prio",
   "vel",
   "max_vel",
   "scale",
   // pins for comp rlpsij found in shared/comps/rlpsij.c
   "rt_prio",
   "frt_prio",
   "r",
   "l",
   "psi",
   "j",
   "load",
   "friction",
   "damping",
   "polecount",
   "fb_offset",
   "cmd_mode",
   "q_cmd",
   "d_cmd",
   "iq_fb",
   "id_fb",
   "uq_fb",
   "ud_fb",
   "abs_pos_fb",
   "com_pos",
   "en_out",
   "en",
   "test_cur",
   "test_vel",
   "rl_ki",
   "vel_ki",
   "vel_kp",
   "rl_time",
   "vel_time",
   "lpf",
   "timer",
   "multi_pos",
   "state",
   "vel",
   "acc",
   "last_pos",
   "error_sum",
   "i0",
   "i1",
   "i2",
   "i3",
   // pins for comp veltime found in shared/comps/veltime.c
   "rt_prio",
   "frt_prio",
   "pos",
   "old_pos",
   "timer",
   "vel",
   "vel_lp",
   "max_time",
   "lpf",
   // pins for comp mpid found in shared/comps/mpid.c
   "rt_prio",
   "frt_prio",
   "pos_ext_cmd",
   "pos_fb",
   "old_pos_ext_cmd",
   "old_pos_fb",
   "pos_error",
   "vel_ext_cmd",
   "vel_fb",
   "vel_error",
   "vel_cmd",
   "acc_cmd",
   "torque_ext_cmd",
   "torque_sum",
   "torque_cmd",
   "min_pos_error",
   "max_vel",
   "max_acc",
   "max_torque",
   "pos_p",
   "vel_i",
   "vel_p",
   "j",
   "scale",
   "en",
   // pins for comp fmove found in shared/comps/fmove.c
   "rt_prio",
   "frt_prio",
   "en",
   "gravity",
   "real_mass",
   "virtual_mass",
   "damping",
   "friction",
   "min_pos",
   "max_pos",
   "max_vel",
   "max_acc",
   "max_usr_vel",
   "max_usr_acc",
   "scale",
   "force_in",
   "force",
   "force_offset",
   "force_offset_lpf",
   "pos",
   "mpos",
   "vel",
   "vel_old",
   "acc",
   "target",
   "force_time",
   "force_timer",
   "force_th",
   "print_freq",
   "print_timer",
   "mode",
   // pins for comp home found in shared/comps/home.c
   "rt_prio",
   "frt_prio",
   "home_vel",
   "home_acc",
   "pos_in",
   "pos_out",
   "vel",
   "home_in",
   "home_polarity",
   "offset",
   "home_offset",
   "home_pos",
   "state",
   "en_in",
   "en_out",
   "re_home",
   // pins for comp en found in shared/comps/en.c
   "rt_prio",
   "frt_prio",
   "en_in",
   "en_out0",
   "en_out1",
   "fault",
   "time",
   "timer",
   // pins for comp th found in shared/comps/th.c
   "rt_prio",
   "frt_prio",
   "in",
   "in_lpf",
   "in_lp",
   "min",
   "max",
   "out",
   "out_not",
};

const uint32_t pin_count = sizeof(pins) / sizeof(pins[0]);

