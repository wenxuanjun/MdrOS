#pragma once

#include "isr.h"
#include "pcb.h"

pcb_t *get_current_proc();
void enable_scheduler();
void disable_scheduler();
void default_scheduler(registers_t *reg,pcb_t* next);
void scheduler_process(registers_t *reg);