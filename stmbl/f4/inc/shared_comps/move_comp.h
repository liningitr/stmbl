#pragma once
//generated by tools/create_comp_h.py DO NOT EDIT

#include "hal.h"
struct move_pin_ctx_t{ // found in shared/comps/move.c
   hal_pin_inst_t rt_prio;
   hal_pin_inst_t frt_prio;
   hal_pin_inst_t fwd;
   hal_pin_inst_t rev;
   hal_pin_inst_t scale;
   hal_pin_inst_t out;
};
