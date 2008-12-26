/* This C file is generated by NIT to compile module math. */
#include "math._sep.h"
val_t math___Int___rand(val_t  self) {
  struct trace_t trace = {NULL, NULL, 19, LOCATE_math___Int___rand};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return TAG_Int(kernel_Int_Int_rand_0(UNTAG_Int( self)));
}
val_t math___Float___sqrt(val_t  self) {
  struct trace_t trace = {NULL, NULL, 23, LOCATE_math___Float___sqrt};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_sqrt_0(UNBOX_Float( self)));
}
val_t math___Float___cos(val_t  self) {
  struct trace_t trace = {NULL, NULL, 24, LOCATE_math___Float___cos};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_cos_0(UNBOX_Float( self)));
}
val_t math___Float___sin(val_t  self) {
  struct trace_t trace = {NULL, NULL, 25, LOCATE_math___Float___sin};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_sin_0(UNBOX_Float( self)));
}
val_t math___Float___tan(val_t  self) {
  struct trace_t trace = {NULL, NULL, 26, LOCATE_math___Float___tan};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_tan_0(UNBOX_Float( self)));
}
val_t math___Float___acos(val_t  self) {
  struct trace_t trace = {NULL, NULL, 27, LOCATE_math___Float___acos};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_acos_0(UNBOX_Float( self)));
}
val_t math___Float___asin(val_t  self) {
  struct trace_t trace = {NULL, NULL, 28, LOCATE_math___Float___asin};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_asin_0(UNBOX_Float( self)));
}
val_t math___Float___atan(val_t  self) {
  struct trace_t trace = {NULL, NULL, 29, LOCATE_math___Float___atan};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_atan_0(UNBOX_Float( self)));
}
val_t math___Float___pow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, NULL, 31, LOCATE_math___Float___pow};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_pow_1(UNBOX_Float( self), UNBOX_Float( param0)));
}
val_t math___Float___log(val_t  self) {
  struct trace_t trace = {NULL, NULL, 32, LOCATE_math___Float___log};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_log_0(UNBOX_Float( self)));
}
val_t math___Float___exp(val_t  self) {
  struct trace_t trace = {NULL, NULL, 33, LOCATE_math___Float___exp};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_exp_0(UNBOX_Float( self)));
}
val_t math___Float___rand(val_t  self) {
  struct trace_t trace = {NULL, NULL, 35, LOCATE_math___Float___rand};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_rand_0(UNBOX_Float( self)));
}
val_t math___Object___atan2(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, NULL, 38, LOCATE_math___Object___atan2};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Any_Any_atan2_2( self, UNBOX_Float( param0), UNBOX_Float( param1)));
}
val_t math___Object___pi(val_t  self) {
  struct trace_t trace = {NULL, NULL, 39, LOCATE_math___Object___pi};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  tracehead = trace.prev;
  return BOX_Float(kernel_Any_Any_pi_0( self));
}
void math___Object___srand_from(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, NULL, 40, LOCATE_math___Object___srand_from};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  kernel_Any_Any_srand_from_1( self, UNTAG_Int( param0));
  tracehead = trace.prev;
  return;
}
void math___Object___srand(val_t  self) {
  struct trace_t trace = {NULL, NULL, 41, LOCATE_math___Object___srand};
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_math;
  kernel_Any_Any_srand_0( self);
  tracehead = trace.prev;
  return;
}
