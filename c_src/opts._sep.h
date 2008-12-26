/* This C header file is generated by NIT to compile modules and programs that requires opts. */
#ifndef opts_sep
#define opts_sep
#include "standard._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Option[];

extern const classtable_elt_t VFT_OptionText[];

extern const classtable_elt_t VFT_OptionBool[];

extern const classtable_elt_t VFT_OptionParameter[];

extern const classtable_elt_t VFT_OptionString[];

extern const classtable_elt_t VFT_OptionEnum[];

extern const classtable_elt_t VFT_OptionInt[];

extern const classtable_elt_t VFT_OptionArray[];

extern const classtable_elt_t VFT_OptionContext[];
extern const char *LOCATE_opts;
extern const int SFT_opts[];
#define ID_Option SFT_opts[0]
#define COLOR_Option SFT_opts[1]
#define COLOR_opts___Option____names SFT_opts[2]
#define COLOR_opts___Option____helptext SFT_opts[3]
#define COLOR_opts___Option____mandatory SFT_opts[4]
#define COLOR_opts___Option____context SFT_opts[5]
#define COLOR_opts___Option____value SFT_opts[6]
#define COLOR_opts___Option____default_value SFT_opts[7]
#define INIT_TABLE_POS_Option SFT_opts[8]
#define COLOR_opts___Option___names SFT_opts[9]
#define COLOR_opts___Option___helptext SFT_opts[10]
#define COLOR_opts___Option___mandatory SFT_opts[11]
#define COLOR_opts___Option___mandatory__eq SFT_opts[12]
#define COLOR_opts___Option___context SFT_opts[13]
#define COLOR_opts___Option___context__eq SFT_opts[14]
#define COLOR_opts___Option___value SFT_opts[15]
#define COLOR_opts___Option___value__eq SFT_opts[16]
#define COLOR_opts___Option___default_value SFT_opts[17]
#define COLOR_opts___Option___default_value__eq SFT_opts[18]
#define COLOR_opts___Option___init_opt SFT_opts[19]
#define COLOR_opts___Option___add_aliases SFT_opts[20]
#define COLOR_opts___Option___pretty SFT_opts[21]
#define COLOR_opts___Option___pretty_default SFT_opts[22]
#define COLOR_opts___Option___read_param SFT_opts[23]
#define ID_OptionText SFT_opts[24]
#define COLOR_OptionText SFT_opts[25]
#define INIT_TABLE_POS_OptionText SFT_opts[26]
#define COLOR_opts___OptionText___init SFT_opts[27]
#define ID_OptionBool SFT_opts[28]
#define COLOR_OptionBool SFT_opts[29]
#define INIT_TABLE_POS_OptionBool SFT_opts[30]
#define COLOR_opts___OptionBool___init SFT_opts[31]
#define ID_OptionParameter SFT_opts[32]
#define COLOR_OptionParameter SFT_opts[33]
#define INIT_TABLE_POS_OptionParameter SFT_opts[34]
#define COLOR_opts___OptionParameter___convert SFT_opts[35]
#define COLOR_opts___OptionParameter___init_opt SFT_opts[36]
#define ID_OptionString SFT_opts[37]
#define COLOR_OptionString SFT_opts[38]
#define INIT_TABLE_POS_OptionString SFT_opts[39]
#define COLOR_opts___OptionString___init SFT_opts[40]
#define ID_OptionEnum SFT_opts[41]
#define COLOR_OptionEnum SFT_opts[42]
#define COLOR_opts___OptionEnum____enum SFT_opts[43]
#define INIT_TABLE_POS_OptionEnum SFT_opts[44]
#define COLOR_opts___OptionEnum___init SFT_opts[45]
#define ID_OptionInt SFT_opts[46]
#define COLOR_OptionInt SFT_opts[47]
#define INIT_TABLE_POS_OptionInt SFT_opts[48]
#define COLOR_opts___OptionInt___init SFT_opts[49]
#define ID_OptionArray SFT_opts[50]
#define COLOR_OptionArray SFT_opts[51]
#define COLOR_opts___OptionArray____values SFT_opts[52]
#define INIT_TABLE_POS_OptionArray SFT_opts[53]
#define COLOR_opts___OptionArray___init SFT_opts[54]
#define ID_OptionContext SFT_opts[55]
#define COLOR_OptionContext SFT_opts[56]
#define COLOR_opts___OptionContext____options SFT_opts[57]
#define COLOR_opts___OptionContext____rest SFT_opts[58]
#define COLOR_opts___OptionContext____optmap SFT_opts[59]
#define INIT_TABLE_POS_OptionContext SFT_opts[60]
#define COLOR_opts___OptionContext___options SFT_opts[61]
#define COLOR_opts___OptionContext___rest SFT_opts[62]
#define COLOR_opts___OptionContext___usage SFT_opts[63]
#define COLOR_opts___OptionContext___parse SFT_opts[64]
#define COLOR_opts___OptionContext___parse_intern SFT_opts[65]
#define COLOR_opts___OptionContext___add_option SFT_opts[66]
#define COLOR_opts___OptionContext___init SFT_opts[67]
#define COLOR_opts___OptionContext___build SFT_opts[68]
#define ATTR_opts___Option____names(recv) ATTR(recv, COLOR_opts___Option____names)
typedef val_t (* opts___Option___names_t)(val_t  self);
val_t opts___Option___names(val_t  self);
#define LOCATE_opts___Option___names "opts::Option::names"
#define ATTR_opts___Option____helptext(recv) ATTR(recv, COLOR_opts___Option____helptext)
typedef val_t (* opts___Option___helptext_t)(val_t  self);
val_t opts___Option___helptext(val_t  self);
#define LOCATE_opts___Option___helptext "opts::Option::helptext"
#define ATTR_opts___Option____mandatory(recv) ATTR(recv, COLOR_opts___Option____mandatory)
typedef val_t (* opts___Option___mandatory_t)(val_t  self);
val_t opts___Option___mandatory(val_t  self);
#define LOCATE_opts___Option___mandatory "opts::Option::mandatory"
typedef void (* opts___Option___mandatory__eq_t)(val_t  self, val_t  param0);
void opts___Option___mandatory__eq(val_t  self, val_t  param0);
#define LOCATE_opts___Option___mandatory__eq "opts::Option::mandatory="
#define ATTR_opts___Option____context(recv) ATTR(recv, COLOR_opts___Option____context)
typedef val_t (* opts___Option___context_t)(val_t  self);
val_t opts___Option___context(val_t  self);
#define LOCATE_opts___Option___context "opts::Option::context"
typedef void (* opts___Option___context__eq_t)(val_t  self, val_t  param0);
void opts___Option___context__eq(val_t  self, val_t  param0);
#define LOCATE_opts___Option___context__eq "opts::Option::context="
#define ATTR_opts___Option____value(recv) ATTR(recv, COLOR_opts___Option____value)
typedef val_t (* opts___Option___value_t)(val_t  self);
val_t opts___Option___value(val_t  self);
#define LOCATE_opts___Option___value "opts::Option::value"
typedef void (* opts___Option___value__eq_t)(val_t  self, val_t  param0);
void opts___Option___value__eq(val_t  self, val_t  param0);
#define LOCATE_opts___Option___value__eq "opts::Option::value="
#define ATTR_opts___Option____default_value(recv) ATTR(recv, COLOR_opts___Option____default_value)
typedef val_t (* opts___Option___default_value_t)(val_t  self);
val_t opts___Option___default_value(val_t  self);
#define LOCATE_opts___Option___default_value "opts::Option::default_value"
typedef void (* opts___Option___default_value__eq_t)(val_t  self, val_t  param0);
void opts___Option___default_value__eq(val_t  self, val_t  param0);
#define LOCATE_opts___Option___default_value__eq "opts::Option::default_value="
typedef void (* opts___Option___init_opt_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void opts___Option___init_opt(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_opts___Option___init_opt(val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_opts___Option___init_opt "opts::Option::init_opt"
typedef void (* opts___Option___add_aliases_t)(val_t  self, val_t  param0);
void opts___Option___add_aliases(val_t  self, val_t  param0);
#define LOCATE_opts___Option___add_aliases "opts::Option::add_aliases"
typedef val_t (* opts___Option___to_s_t)(val_t  self);
val_t opts___Option___to_s(val_t  self);
#define LOCATE_opts___Option___to_s "opts::Option::(string::Object::to_s)"
typedef val_t (* opts___Option___pretty_t)(val_t  self, val_t  param0);
val_t opts___Option___pretty(val_t  self, val_t  param0);
#define LOCATE_opts___Option___pretty "opts::Option::pretty"
typedef val_t (* opts___Option___pretty_default_t)(val_t  self);
val_t opts___Option___pretty_default(val_t  self);
#define LOCATE_opts___Option___pretty_default "opts::Option::pretty_default"
typedef void (* opts___Option___read_param_t)(val_t  self, val_t  param0);
void opts___Option___read_param(val_t  self, val_t  param0);
#define LOCATE_opts___Option___read_param "opts::Option::read_param"
typedef void (* opts___OptionText___init_t)(val_t  self, val_t  param0, int* init_table);
void opts___OptionText___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_opts___OptionText___init(val_t  param0);
#define LOCATE_opts___OptionText___init "opts::OptionText::init"
typedef val_t (* opts___OptionText___pretty_t)(val_t  self, val_t  param0);
val_t opts___OptionText___pretty(val_t  self, val_t  param0);
#define LOCATE_opts___OptionText___pretty "opts::OptionText::(opts::Option::pretty)"
typedef val_t (* opts___OptionText___to_s_t)(val_t  self);
val_t opts___OptionText___to_s(val_t  self);
#define LOCATE_opts___OptionText___to_s "opts::OptionText::(string::Object::to_s)"
typedef void (* opts___OptionBool___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void opts___OptionBool___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_opts___OptionBool___init(val_t  param0, val_t  param1);
#define LOCATE_opts___OptionBool___init "opts::OptionBool::init"
typedef void (* opts___OptionBool___read_param_t)(val_t  self, val_t  param0);
void opts___OptionBool___read_param(val_t  self, val_t  param0);
#define LOCATE_opts___OptionBool___read_param "opts::OptionBool::(opts::Option::read_param)"
typedef val_t (* opts___OptionParameter___convert_t)(val_t  self, val_t  param0);
val_t opts___OptionParameter___convert(val_t  self, val_t  param0);
#define LOCATE_opts___OptionParameter___convert "opts::OptionParameter::convert"
typedef void (* opts___OptionParameter___read_param_t)(val_t  self, val_t  param0);
void opts___OptionParameter___read_param(val_t  self, val_t  param0);
#define LOCATE_opts___OptionParameter___read_param "opts::OptionParameter::(opts::Option::read_param)"
typedef void (* opts___OptionParameter___init_opt_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void opts___OptionParameter___init_opt(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_opts___OptionParameter___init_opt(val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_opts___OptionParameter___init_opt "opts::OptionParameter::init_opt"
typedef void (* opts___OptionString___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void opts___OptionString___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_opts___OptionString___init(val_t  param0, val_t  param1);
#define LOCATE_opts___OptionString___init "opts::OptionString::init"
typedef val_t (* opts___OptionString___convert_t)(val_t  self, val_t  param0);
val_t opts___OptionString___convert(val_t  self, val_t  param0);
#define LOCATE_opts___OptionString___convert "opts::OptionString::(opts::OptionParameter::convert)"
#define ATTR_opts___OptionEnum____enum(recv) ATTR(recv, COLOR_opts___OptionEnum____enum)
typedef void (* opts___OptionEnum___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void opts___OptionEnum___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_opts___OptionEnum___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define LOCATE_opts___OptionEnum___init "opts::OptionEnum::init"
typedef val_t (* opts___OptionEnum___convert_t)(val_t  self, val_t  param0);
val_t opts___OptionEnum___convert(val_t  self, val_t  param0);
#define LOCATE_opts___OptionEnum___convert "opts::OptionEnum::(opts::OptionParameter::convert)"
typedef val_t (* opts___OptionEnum___pretty_default_t)(val_t  self);
val_t opts___OptionEnum___pretty_default(val_t  self);
#define LOCATE_opts___OptionEnum___pretty_default "opts::OptionEnum::(opts::Option::pretty_default)"
typedef void (* opts___OptionInt___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void opts___OptionInt___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_opts___OptionInt___init(val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_opts___OptionInt___init "opts::OptionInt::init"
typedef val_t (* opts___OptionInt___convert_t)(val_t  self, val_t  param0);
val_t opts___OptionInt___convert(val_t  self, val_t  param0);
#define LOCATE_opts___OptionInt___convert "opts::OptionInt::(opts::OptionParameter::convert)"
typedef void (* opts___OptionArray___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void opts___OptionArray___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_opts___OptionArray___init(val_t  param0, val_t  param1);
#define LOCATE_opts___OptionArray___init "opts::OptionArray::init"
#define ATTR_opts___OptionArray____values(recv) ATTR(recv, COLOR_opts___OptionArray____values)
typedef val_t (* opts___OptionArray___convert_t)(val_t  self, val_t  param0);
val_t opts___OptionArray___convert(val_t  self, val_t  param0);
#define LOCATE_opts___OptionArray___convert "opts::OptionArray::(opts::OptionParameter::convert)"
#define ATTR_opts___OptionContext____options(recv) ATTR(recv, COLOR_opts___OptionContext____options)
typedef val_t (* opts___OptionContext___options_t)(val_t  self);
val_t opts___OptionContext___options(val_t  self);
#define LOCATE_opts___OptionContext___options "opts::OptionContext::options"
#define ATTR_opts___OptionContext____rest(recv) ATTR(recv, COLOR_opts___OptionContext____rest)
typedef val_t (* opts___OptionContext___rest_t)(val_t  self);
val_t opts___OptionContext___rest(val_t  self);
#define LOCATE_opts___OptionContext___rest "opts::OptionContext::rest"
#define ATTR_opts___OptionContext____optmap(recv) ATTR(recv, COLOR_opts___OptionContext____optmap)
typedef void (* opts___OptionContext___usage_t)(val_t  self);
void opts___OptionContext___usage(val_t  self);
#define LOCATE_opts___OptionContext___usage "opts::OptionContext::usage"
typedef void (* opts___OptionContext___parse_t)(val_t  self, val_t  param0);
void opts___OptionContext___parse(val_t  self, val_t  param0);
#define LOCATE_opts___OptionContext___parse "opts::OptionContext::parse"
typedef void (* opts___OptionContext___parse_intern_t)(val_t  self, val_t  param0);
void opts___OptionContext___parse_intern(val_t  self, val_t  param0);
#define LOCATE_opts___OptionContext___parse_intern "opts::OptionContext::parse_intern"
typedef void (* opts___OptionContext___add_option_t)(val_t  self, val_t  param0);
void opts___OptionContext___add_option(val_t  self, val_t  param0);
#define LOCATE_opts___OptionContext___add_option "opts::OptionContext::add_option"
typedef void (* opts___OptionContext___init_t)(val_t  self, int* init_table);
void opts___OptionContext___init(val_t  self, int* init_table);
val_t NEW_opts___OptionContext___init();
#define LOCATE_opts___OptionContext___init "opts::OptionContext::init"
typedef void (* opts___OptionContext___build_t)(val_t  self);
void opts___OptionContext___build(val_t  self);
#define LOCATE_opts___OptionContext___build "opts::OptionContext::build"
#endif
