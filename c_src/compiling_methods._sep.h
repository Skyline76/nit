/* This C header file is generated by NIT to compile modules and programs that requires compiling_methods. */
#ifndef compiling_methods_sep
#define compiling_methods_sep
#include "compiling_base._sep.h"
#include <nit_common.h>
extern const char *LOCATE_compiling_methods;
extern const int SFT_compiling_methods[];
#define COLOR_compiling_methods___CompilerVisitor____variable_index SFT_compiling_methods[0]
#define COLOR_compiling_methods___CompilerVisitor____variable_index_max SFT_compiling_methods[1]
#define COLOR_compiling_methods___CompilerVisitor____varnames SFT_compiling_methods[2]
#define COLOR_compiling_methods___CompilerVisitor____has_return SFT_compiling_methods[3]
#define COLOR_compiling_methods___CompilerVisitor____method_params SFT_compiling_methods[4]
#define COLOR_compiling_methods___CompilerVisitor____method SFT_compiling_methods[5]
#define COLOR_compiling_methods___CompilerVisitor____return_label SFT_compiling_methods[6]
#define COLOR_compiling_methods___CompilerVisitor____break_label SFT_compiling_methods[7]
#define COLOR_compiling_methods___CompilerVisitor____continue_label SFT_compiling_methods[8]
#define COLOR_compiling_methods___CompilerVisitor____return_value SFT_compiling_methods[9]
#define COLOR_compiling_methods___CompilerVisitor___compile_stmt SFT_compiling_methods[10]
#define COLOR_compiling_methods___CompilerVisitor___compile_expr SFT_compiling_methods[11]
#define COLOR_compiling_methods___CompilerVisitor___ensure_var SFT_compiling_methods[12]
#define COLOR_compiling_methods___CompilerVisitor___add_assignment SFT_compiling_methods[13]
#define COLOR_compiling_methods___CompilerVisitor___variable SFT_compiling_methods[14]
#define COLOR_compiling_methods___CompilerVisitor___get_var SFT_compiling_methods[15]
#define COLOR_compiling_methods___CompilerVisitor___free_var SFT_compiling_methods[16]
#define COLOR_compiling_methods___CompilerVisitor___clear SFT_compiling_methods[17]
#define COLOR_compiling_methods___CompilerVisitor___varnames SFT_compiling_methods[18]
#define COLOR_compiling_methods___CompilerVisitor___has_return SFT_compiling_methods[19]
#define COLOR_compiling_methods___CompilerVisitor___has_return__eq SFT_compiling_methods[20]
#define COLOR_compiling_methods___CompilerVisitor___method_params SFT_compiling_methods[21]
#define COLOR_compiling_methods___CompilerVisitor___method_params__eq SFT_compiling_methods[22]
#define COLOR_compiling_methods___CompilerVisitor___method SFT_compiling_methods[23]
#define COLOR_compiling_methods___CompilerVisitor___method__eq SFT_compiling_methods[24]
#define COLOR_compiling_methods___CompilerVisitor___return_label SFT_compiling_methods[25]
#define COLOR_compiling_methods___CompilerVisitor___return_label__eq SFT_compiling_methods[26]
#define COLOR_compiling_methods___CompilerVisitor___break_label SFT_compiling_methods[27]
#define COLOR_compiling_methods___CompilerVisitor___break_label__eq SFT_compiling_methods[28]
#define COLOR_compiling_methods___CompilerVisitor___continue_label SFT_compiling_methods[29]
#define COLOR_compiling_methods___CompilerVisitor___continue_label__eq SFT_compiling_methods[30]
#define COLOR_compiling_methods___CompilerVisitor___return_value SFT_compiling_methods[31]
#define COLOR_compiling_methods___CompilerVisitor___return_value__eq SFT_compiling_methods[32]
#define COLOR_compiling_methods___CompilerVisitor___printf_locate_error SFT_compiling_methods[33]
#define COLOR_SUPER_compiling_methods___CompilerVisitor___init SFT_compiling_methods[34]
#define COLOR_compiling_methods___CompilerVisitor___invoke_super_init_calls_after SFT_compiling_methods[35]
#define COLOR_compiling_methods___MMMethod___compile_call SFT_compiling_methods[36]
#define COLOR_compiling_methods___MMMethod___compile_constructor_call SFT_compiling_methods[37]
#define COLOR_compiling_methods___MMMethod___compile_super_call SFT_compiling_methods[38]
#define COLOR_compiling_methods___MMAttribute___compile_access SFT_compiling_methods[39]
#define COLOR_compiling_methods___MMLocalProperty___compile_property_to_c SFT_compiling_methods[40]
#define COLOR_compiling_methods___MMSrcMethod___decl_csignature SFT_compiling_methods[41]
#define COLOR_compiling_methods___MMSrcMethod___do_compile_inside SFT_compiling_methods[42]
#define COLOR_compiling_methods___MMType___compile_cast SFT_compiling_methods[43]
#define COLOR_compiling_methods___MMType___compile_type_check SFT_compiling_methods[44]
#define COLOR_compiling_methods___AMethPropdef___do_compile_inside SFT_compiling_methods[45]
#define COLOR_compiling_methods___PExpr___compile_expr SFT_compiling_methods[46]
#define COLOR_compiling_methods___PExpr___prepare_compile_stmt SFT_compiling_methods[47]
#define COLOR_compiling_methods___PExpr___compile_stmt SFT_compiling_methods[48]
#define COLOR_compiling_methods___AControlableBlock___compile_inside_block SFT_compiling_methods[49]
#define COLOR_compiling_methods___AStringFormExpr____cstring SFT_compiling_methods[50]
#define COLOR_compiling_methods___AStringFormExpr____cstring_length SFT_compiling_methods[51]
#define COLOR_compiling_methods___AStringFormExpr___string_text SFT_compiling_methods[52]
#define COLOR_compiling_methods___AStringFormExpr___compute_string_info SFT_compiling_methods[53]
#define COLOR_compiling_methods___ARangeExpr___propname SFT_compiling_methods[54]
typedef void (* compiling_methods___CompilerVisitor___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___compile_stmt "compiling_methods::CompilerVisitor::compile_stmt"
typedef val_t (* compiling_methods___CompilerVisitor___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___CompilerVisitor___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___compile_expr "compiling_methods::CompilerVisitor::compile_expr"
typedef val_t (* compiling_methods___CompilerVisitor___ensure_var_t)(val_t  self, val_t  param0);
val_t compiling_methods___CompilerVisitor___ensure_var(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___ensure_var "compiling_methods::CompilerVisitor::ensure_var"
typedef void (* compiling_methods___CompilerVisitor___add_assignment_t)(val_t  self, val_t  param0, val_t  param1);
void compiling_methods___CompilerVisitor___add_assignment(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___CompilerVisitor___add_assignment "compiling_methods::CompilerVisitor::add_assignment"
typedef val_t (* compiling_methods___CompilerVisitor___variable_t)(val_t  self, val_t  param0);
val_t compiling_methods___CompilerVisitor___variable(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___variable "compiling_methods::CompilerVisitor::variable"
#define ATTR_compiling_methods___CompilerVisitor____variable_index(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____variable_index)
#define ATTR_compiling_methods___CompilerVisitor____variable_index_max(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____variable_index_max)
typedef val_t (* compiling_methods___CompilerVisitor___get_var_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___get_var(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___get_var "compiling_methods::CompilerVisitor::get_var"
typedef void (* compiling_methods___CompilerVisitor___free_var_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___free_var(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___free_var "compiling_methods::CompilerVisitor::free_var"
typedef void (* compiling_methods___CompilerVisitor___clear_t)(val_t  self);
void compiling_methods___CompilerVisitor___clear(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___clear "compiling_methods::CompilerVisitor::clear"
#define ATTR_compiling_methods___CompilerVisitor____varnames(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____varnames)
typedef val_t (* compiling_methods___CompilerVisitor___varnames_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___varnames(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___varnames "compiling_methods::CompilerVisitor::varnames"
#define ATTR_compiling_methods___CompilerVisitor____has_return(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____has_return)
typedef val_t (* compiling_methods___CompilerVisitor___has_return_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___has_return(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___has_return "compiling_methods::CompilerVisitor::has_return"
typedef void (* compiling_methods___CompilerVisitor___has_return__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___has_return__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___has_return__eq "compiling_methods::CompilerVisitor::has_return="
#define ATTR_compiling_methods___CompilerVisitor____method_params(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____method_params)
typedef val_t (* compiling_methods___CompilerVisitor___method_params_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___method_params(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___method_params "compiling_methods::CompilerVisitor::method_params"
typedef void (* compiling_methods___CompilerVisitor___method_params__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___method_params__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___method_params__eq "compiling_methods::CompilerVisitor::method_params="
#define ATTR_compiling_methods___CompilerVisitor____method(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____method)
typedef val_t (* compiling_methods___CompilerVisitor___method_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___method(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___method "compiling_methods::CompilerVisitor::method"
typedef void (* compiling_methods___CompilerVisitor___method__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___method__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___method__eq "compiling_methods::CompilerVisitor::method="
#define ATTR_compiling_methods___CompilerVisitor____return_label(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____return_label)
typedef val_t (* compiling_methods___CompilerVisitor___return_label_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___return_label(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___return_label "compiling_methods::CompilerVisitor::return_label"
typedef void (* compiling_methods___CompilerVisitor___return_label__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___return_label__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___return_label__eq "compiling_methods::CompilerVisitor::return_label="
#define ATTR_compiling_methods___CompilerVisitor____break_label(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____break_label)
typedef val_t (* compiling_methods___CompilerVisitor___break_label_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___break_label(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___break_label "compiling_methods::CompilerVisitor::break_label"
typedef void (* compiling_methods___CompilerVisitor___break_label__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___break_label__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___break_label__eq "compiling_methods::CompilerVisitor::break_label="
#define ATTR_compiling_methods___CompilerVisitor____continue_label(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____continue_label)
typedef val_t (* compiling_methods___CompilerVisitor___continue_label_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___continue_label(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___continue_label "compiling_methods::CompilerVisitor::continue_label"
typedef void (* compiling_methods___CompilerVisitor___continue_label__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___continue_label__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___continue_label__eq "compiling_methods::CompilerVisitor::continue_label="
#define ATTR_compiling_methods___CompilerVisitor____return_value(recv) ATTR(recv, COLOR_compiling_methods___CompilerVisitor____return_value)
typedef val_t (* compiling_methods___CompilerVisitor___return_value_t)(val_t  self);
val_t compiling_methods___CompilerVisitor___return_value(val_t  self);
#define LOCATE_compiling_methods___CompilerVisitor___return_value "compiling_methods::CompilerVisitor::return_value"
typedef void (* compiling_methods___CompilerVisitor___return_value__eq_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___return_value__eq(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___return_value__eq "compiling_methods::CompilerVisitor::return_value="
typedef val_t (* compiling_methods___CompilerVisitor___printf_locate_error_t)(val_t  self, val_t  param0);
val_t compiling_methods___CompilerVisitor___printf_locate_error(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___printf_locate_error "compiling_methods::CompilerVisitor::printf_locate_error"
typedef void (* compiling_methods___CompilerVisitor___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_methods___CompilerVisitor___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_methods___CompilerVisitor___init(val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___init "compiling_methods::CompilerVisitor::(compiling_base::CompilerVisitor::init)"
typedef void (* compiling_methods___CompilerVisitor___invoke_super_init_calls_after_t)(val_t  self, val_t  param0);
void compiling_methods___CompilerVisitor___invoke_super_init_calls_after(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___CompilerVisitor___invoke_super_init_calls_after "compiling_methods::CompilerVisitor::invoke_super_init_calls_after"
typedef val_t (* compiling_methods___MMMethod___compile_call_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMMethod___compile_call(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMMethod___compile_call "compiling_methods::MMMethod::compile_call"
typedef val_t (* compiling_methods___MMMethod___compile_constructor_call_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMMethod___compile_constructor_call(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMMethod___compile_constructor_call "compiling_methods::MMMethod::compile_constructor_call"
typedef val_t (* compiling_methods___MMMethod___compile_super_call_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMMethod___compile_super_call(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMMethod___compile_super_call "compiling_methods::MMMethod::compile_super_call"
typedef val_t (* compiling_methods___MMAttribute___compile_access_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMAttribute___compile_access(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMAttribute___compile_access "compiling_methods::MMAttribute::compile_access"
typedef void (* compiling_methods___MMLocalProperty___compile_property_to_c_t)(val_t  self, val_t  param0);
void compiling_methods___MMLocalProperty___compile_property_to_c(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___MMLocalProperty___compile_property_to_c "compiling_methods::MMLocalProperty::compile_property_to_c"
typedef val_t (* compiling_methods___MMSrcMethod___decl_csignature_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMSrcMethod___decl_csignature(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMSrcMethod___decl_csignature "compiling_methods::MMSrcMethod::decl_csignature"
typedef void (* compiling_methods___MMSrcMethod___compile_property_to_c_t)(val_t  self, val_t  param0);
void compiling_methods___MMSrcMethod___compile_property_to_c(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___MMSrcMethod___compile_property_to_c "compiling_methods::MMSrcMethod::(compiling_methods::MMLocalProperty::compile_property_to_c)"
typedef val_t (* compiling_methods___MMSrcMethod___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMSrcMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMSrcMethod___do_compile_inside "compiling_methods::MMSrcMethod::do_compile_inside"
typedef val_t (* compiling_methods___MMReadImplementationMethod___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMReadImplementationMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMReadImplementationMethod___do_compile_inside "compiling_methods::MMReadImplementationMethod::(compiling_methods::MMSrcMethod::do_compile_inside)"
typedef val_t (* compiling_methods___MMWriteImplementationMethod___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMWriteImplementationMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMWriteImplementationMethod___do_compile_inside "compiling_methods::MMWriteImplementationMethod::(compiling_methods::MMSrcMethod::do_compile_inside)"
typedef val_t (* compiling_methods___MMMethSrcMethod___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMMethSrcMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMMethSrcMethod___do_compile_inside "compiling_methods::MMMethSrcMethod::(compiling_methods::MMSrcMethod::do_compile_inside)"
typedef val_t (* compiling_methods___MMType___compile_cast_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_methods___MMType___compile_cast(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_compiling_methods___MMType___compile_cast "compiling_methods::MMType::compile_cast"
typedef void (* compiling_methods___MMType___compile_type_check_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void compiling_methods___MMType___compile_type_check(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___MMType___compile_type_check "compiling_methods::MMType::compile_type_check"
typedef val_t (* compiling_methods___AMethPropdef___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_methods___AMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___AMethPropdef___do_compile_inside "compiling_methods::AMethPropdef::do_compile_inside"
typedef val_t (* compiling_methods___AConcreteMethPropdef___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_methods___AConcreteMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___AConcreteMethPropdef___do_compile_inside "compiling_methods::AConcreteMethPropdef::(compiling_methods::AMethPropdef::do_compile_inside)"
typedef val_t (* compiling_methods___ADeferredMethPropdef___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_methods___ADeferredMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___ADeferredMethPropdef___do_compile_inside "compiling_methods::ADeferredMethPropdef::(compiling_methods::AMethPropdef::do_compile_inside)"
typedef val_t (* compiling_methods___AExternMethPropdef___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_methods___AExternMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___AExternMethPropdef___do_compile_inside "compiling_methods::AExternMethPropdef::(compiling_methods::AMethPropdef::do_compile_inside)"
typedef val_t (* compiling_methods___AInternMethPropdef___do_compile_inside_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_methods___AInternMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_compiling_methods___AInternMethPropdef___do_compile_inside "compiling_methods::AInternMethPropdef::(compiling_methods::AMethPropdef::do_compile_inside)"
typedef val_t (* compiling_methods___PExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___PExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___PExpr___compile_expr "compiling_methods::PExpr::compile_expr"
typedef void (* compiling_methods___PExpr___prepare_compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___PExpr___prepare_compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___PExpr___prepare_compile_stmt "compiling_methods::PExpr::prepare_compile_stmt"
typedef void (* compiling_methods___PExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___PExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___PExpr___compile_stmt "compiling_methods::PExpr::compile_stmt"
typedef void (* compiling_methods___ABlockExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___ABlockExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ABlockExpr___compile_stmt "compiling_methods::ABlockExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AVardeclExpr___prepare_compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AVardeclExpr___prepare_compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AVardeclExpr___prepare_compile_stmt "compiling_methods::AVardeclExpr::(compiling_methods::PExpr::prepare_compile_stmt)"
typedef void (* compiling_methods___AVardeclExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AVardeclExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AVardeclExpr___compile_stmt "compiling_methods::AVardeclExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AReturnExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AReturnExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AReturnExpr___compile_stmt "compiling_methods::AReturnExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___ABreakExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___ABreakExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ABreakExpr___compile_stmt "compiling_methods::ABreakExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AContinueExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AContinueExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AContinueExpr___compile_stmt "compiling_methods::AContinueExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AAbortExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AAbortExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAbortExpr___compile_stmt "compiling_methods::AAbortExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___ADoExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___ADoExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ADoExpr___compile_stmt "compiling_methods::ADoExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AIfExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AIfExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AIfExpr___compile_stmt "compiling_methods::AIfExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___AIfexprExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AIfexprExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AIfexprExpr___compile_expr "compiling_methods::AIfexprExpr::(compiling_methods::PExpr::compile_expr)"
typedef void (* compiling_methods___AControlableBlock___compile_inside_block_t)(val_t  self, val_t  param0);
void compiling_methods___AControlableBlock___compile_inside_block(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AControlableBlock___compile_inside_block "compiling_methods::AControlableBlock::compile_inside_block"
typedef void (* compiling_methods___AControlableBlock___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AControlableBlock___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AControlableBlock___compile_stmt "compiling_methods::AControlableBlock::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AWhileExpr___compile_inside_block_t)(val_t  self, val_t  param0);
void compiling_methods___AWhileExpr___compile_inside_block(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AWhileExpr___compile_inside_block "compiling_methods::AWhileExpr::(compiling_methods::AControlableBlock::compile_inside_block)"
typedef void (* compiling_methods___AForExpr___compile_inside_block_t)(val_t  self, val_t  param0);
void compiling_methods___AForExpr___compile_inside_block(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AForExpr___compile_inside_block "compiling_methods::AForExpr::(compiling_methods::AControlableBlock::compile_inside_block)"
typedef void (* compiling_methods___AForVardeclExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AForVardeclExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AForVardeclExpr___compile_stmt "compiling_methods::AForVardeclExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AAssertExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AAssertExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAssertExpr___compile_stmt "compiling_methods::AAssertExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___AVarExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AVarExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AVarExpr___compile_expr "compiling_methods::AVarExpr::(compiling_methods::PExpr::compile_expr)"
typedef void (* compiling_methods___AVarAssignExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AVarAssignExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AVarAssignExpr___compile_stmt "compiling_methods::AVarAssignExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AVarReassignExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AVarReassignExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AVarReassignExpr___compile_stmt "compiling_methods::AVarReassignExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___ASelfExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ASelfExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASelfExpr___compile_expr "compiling_methods::ASelfExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AOrExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AOrExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AOrExpr___compile_expr "compiling_methods::AOrExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AAndExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AAndExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAndExpr___compile_expr "compiling_methods::AAndExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ANotExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ANotExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ANotExpr___compile_expr "compiling_methods::ANotExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AEeExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AEeExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AEeExpr___compile_expr "compiling_methods::AEeExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AIsaExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AIsaExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AIsaExpr___compile_expr "compiling_methods::AIsaExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AAsCastExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AAsCastExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAsCastExpr___compile_expr "compiling_methods::AAsCastExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ATrueExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ATrueExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ATrueExpr___compile_expr "compiling_methods::ATrueExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AFalseExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AFalseExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AFalseExpr___compile_expr "compiling_methods::AFalseExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AIntExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AIntExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AIntExpr___compile_expr "compiling_methods::AIntExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AFloatExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AFloatExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AFloatExpr___compile_expr "compiling_methods::AFloatExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ACharExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ACharExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ACharExpr___compile_expr "compiling_methods::ACharExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AStringFormExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AStringFormExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AStringFormExpr___compile_expr "compiling_methods::AStringFormExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AStringFormExpr___string_text_t)(val_t  self);
val_t compiling_methods___AStringFormExpr___string_text(val_t  self);
#define LOCATE_compiling_methods___AStringFormExpr___string_text "compiling_methods::AStringFormExpr::string_text"
#define ATTR_compiling_methods___AStringFormExpr____cstring(recv) ATTR(recv, COLOR_compiling_methods___AStringFormExpr____cstring)
#define ATTR_compiling_methods___AStringFormExpr____cstring_length(recv) ATTR(recv, COLOR_compiling_methods___AStringFormExpr____cstring_length)
typedef void (* compiling_methods___AStringFormExpr___compute_string_info_t)(val_t  self);
void compiling_methods___AStringFormExpr___compute_string_info(val_t  self);
#define LOCATE_compiling_methods___AStringFormExpr___compute_string_info "compiling_methods::AStringFormExpr::compute_string_info"
typedef val_t (* compiling_methods___AStringExpr___string_text_t)(val_t  self);
val_t compiling_methods___AStringExpr___string_text(val_t  self);
#define LOCATE_compiling_methods___AStringExpr___string_text "compiling_methods::AStringExpr::(compiling_methods::AStringFormExpr::string_text)"
typedef val_t (* compiling_methods___AStartStringExpr___string_text_t)(val_t  self);
val_t compiling_methods___AStartStringExpr___string_text(val_t  self);
#define LOCATE_compiling_methods___AStartStringExpr___string_text "compiling_methods::AStartStringExpr::(compiling_methods::AStringFormExpr::string_text)"
typedef val_t (* compiling_methods___AMidStringExpr___string_text_t)(val_t  self);
val_t compiling_methods___AMidStringExpr___string_text(val_t  self);
#define LOCATE_compiling_methods___AMidStringExpr___string_text "compiling_methods::AMidStringExpr::(compiling_methods::AStringFormExpr::string_text)"
typedef val_t (* compiling_methods___AEndStringExpr___string_text_t)(val_t  self);
val_t compiling_methods___AEndStringExpr___string_text(val_t  self);
#define LOCATE_compiling_methods___AEndStringExpr___string_text "compiling_methods::AEndStringExpr::(compiling_methods::AStringFormExpr::string_text)"
typedef val_t (* compiling_methods___ASuperstringExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ASuperstringExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASuperstringExpr___compile_expr "compiling_methods::ASuperstringExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ANullExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ANullExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ANullExpr___compile_expr "compiling_methods::ANullExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AArrayExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AArrayExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AArrayExpr___compile_expr "compiling_methods::AArrayExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ARangeExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ARangeExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ARangeExpr___compile_expr "compiling_methods::ARangeExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ARangeExpr___propname_t)(val_t  self);
val_t compiling_methods___ARangeExpr___propname(val_t  self);
#define LOCATE_compiling_methods___ARangeExpr___propname "compiling_methods::ARangeExpr::propname"
typedef val_t (* compiling_methods___ACrangeExpr___propname_t)(val_t  self);
val_t compiling_methods___ACrangeExpr___propname(val_t  self);
#define LOCATE_compiling_methods___ACrangeExpr___propname "compiling_methods::ACrangeExpr::(compiling_methods::ARangeExpr::propname)"
typedef val_t (* compiling_methods___AOrangeExpr___propname_t)(val_t  self);
val_t compiling_methods___AOrangeExpr___propname(val_t  self);
#define LOCATE_compiling_methods___AOrangeExpr___propname "compiling_methods::AOrangeExpr::(compiling_methods::ARangeExpr::propname)"
typedef void (* compiling_methods___ASuperExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___ASuperExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASuperExpr___compile_stmt "compiling_methods::ASuperExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___ASuperExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ASuperExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASuperExpr___compile_expr "compiling_methods::ASuperExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AAttrExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AAttrExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAttrExpr___compile_expr "compiling_methods::AAttrExpr::(compiling_methods::PExpr::compile_expr)"
typedef void (* compiling_methods___AAttrAssignExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AAttrAssignExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAttrAssignExpr___compile_stmt "compiling_methods::AAttrAssignExpr::(compiling_methods::PExpr::compile_stmt)"
typedef void (* compiling_methods___AAttrReassignExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___AAttrReassignExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AAttrReassignExpr___compile_stmt "compiling_methods::AAttrReassignExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___ASendExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ASendExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASendExpr___compile_expr "compiling_methods::ASendExpr::(compiling_methods::PExpr::compile_expr)"
typedef void (* compiling_methods___ASendExpr___compile_stmt_t)(val_t  self, val_t  param0);
void compiling_methods___ASendExpr___compile_stmt(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASendExpr___compile_stmt "compiling_methods::ASendExpr::(compiling_methods::PExpr::compile_stmt)"
typedef val_t (* compiling_methods___ASendReassignExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ASendReassignExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ASendReassignExpr___compile_expr "compiling_methods::ASendReassignExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___ANewExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___ANewExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___ANewExpr___compile_expr "compiling_methods::ANewExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AProxyExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AProxyExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AProxyExpr___compile_expr "compiling_methods::AProxyExpr::(compiling_methods::PExpr::compile_expr)"
typedef val_t (* compiling_methods___AOnceExpr___compile_expr_t)(val_t  self, val_t  param0);
val_t compiling_methods___AOnceExpr___compile_expr(val_t  self, val_t  param0);
#define LOCATE_compiling_methods___AOnceExpr___compile_expr "compiling_methods::AOnceExpr::(compiling_methods::PExpr::compile_expr)"
#endif
