/* This C header file is generated by NIT to compile modules and programs that requires kernel. */
#ifndef kernel_sep
#define kernel_sep
#include <nit_common.h>

extern const classtable_elt_t VFT_Object[];

extern const classtable_elt_t VFT_Sys[];

extern const classtable_elt_t VFT_Comparable[];

extern const classtable_elt_t VFT_Discrete[];

extern const classtable_elt_t VFT_Bool[];

extern const classtable_elt_t VFT_Float[];
struct TBOX_Float { const classtable_elt_t * vft; float val;};
val_t BOX_Float(float val);
#define UNBOX_Float(x) (((struct TBOX_Float *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_Int[];

extern const classtable_elt_t VFT_Char[];

extern const classtable_elt_t VFT_Pointer[];
struct TBOX_Pointer { const classtable_elt_t * vft; void * val;};
val_t BOX_Pointer(void * val);
#define UNBOX_Pointer(x) (((struct TBOX_Pointer *)(VAL2OBJ(x)))->val)
extern const char *LOCATE_kernel;
extern const int SFT_kernel[];
#define ID_Object SFT_kernel[0]
#define COLOR_Object SFT_kernel[1]
#define INIT_TABLE_POS_Object SFT_kernel[2]
#define COLOR_kernel___Object___object_id SFT_kernel[3]
#define COLOR_kernel___Object___is_same_type SFT_kernel[4]
#define COLOR_kernel___Object_____eqeq SFT_kernel[5]
#define COLOR_kernel___Object_____neq SFT_kernel[6]
#define COLOR_kernel___Object___output SFT_kernel[7]
#define COLOR_kernel___Object___exit SFT_kernel[8]
#define COLOR_kernel___Object___sys SFT_kernel[9]
#define ID_Sys SFT_kernel[10]
#define COLOR_Sys SFT_kernel[11]
#define INIT_TABLE_POS_Sys SFT_kernel[12]
#define COLOR_kernel___Sys___main SFT_kernel[13]
#define ID_Comparable SFT_kernel[14]
#define COLOR_Comparable SFT_kernel[15]
#define INIT_TABLE_POS_Comparable SFT_kernel[16]
#define COLOR_kernel___Comparable_____l SFT_kernel[17]
#define COLOR_kernel___Comparable_____leq SFT_kernel[18]
#define COLOR_kernel___Comparable_____geq SFT_kernel[19]
#define COLOR_kernel___Comparable_____g SFT_kernel[20]
#define COLOR_kernel___Comparable_____leqg SFT_kernel[21]
#define COLOR_kernel___Comparable___is_between SFT_kernel[22]
#define COLOR_kernel___Comparable___max SFT_kernel[23]
#define COLOR_kernel___Comparable___min SFT_kernel[24]
#define ID_Discrete SFT_kernel[25]
#define COLOR_Discrete SFT_kernel[26]
#define INIT_TABLE_POS_Discrete SFT_kernel[27]
#define COLOR_kernel___Discrete___succ SFT_kernel[28]
#define COLOR_kernel___Discrete___prec SFT_kernel[29]
#define COLOR_kernel___Discrete_____plus SFT_kernel[30]
#define COLOR_kernel___Discrete_____minus SFT_kernel[31]
#define COLOR_kernel___Discrete___distance SFT_kernel[32]
#define ID_Bool SFT_kernel[33]
#define COLOR_Bool SFT_kernel[34]
#define INIT_TABLE_POS_Bool SFT_kernel[35]
#define ID_Float SFT_kernel[36]
#define COLOR_Float SFT_kernel[37]
#define INIT_TABLE_POS_Float SFT_kernel[38]
#define COLOR_kernel___Float_____leq SFT_kernel[39]
#define COLOR_kernel___Float_____l SFT_kernel[40]
#define COLOR_kernel___Float_____geq SFT_kernel[41]
#define COLOR_kernel___Float_____g SFT_kernel[42]
#define COLOR_kernel___Float_____plus SFT_kernel[43]
#define COLOR_kernel___Float___unary__minus SFT_kernel[44]
#define COLOR_kernel___Float_____minus SFT_kernel[45]
#define COLOR_kernel___Float_____star SFT_kernel[46]
#define COLOR_kernel___Float_____slash SFT_kernel[47]
#define COLOR_kernel___Float___to_i SFT_kernel[48]
#define ID_Int SFT_kernel[49]
#define COLOR_Int SFT_kernel[50]
#define INIT_TABLE_POS_Int SFT_kernel[51]
#define COLOR_kernel___Int___unary__minus SFT_kernel[52]
#define COLOR_kernel___Int_____star SFT_kernel[53]
#define COLOR_kernel___Int_____slash SFT_kernel[54]
#define COLOR_kernel___Int_____percent SFT_kernel[55]
#define COLOR_kernel___Int___lshift SFT_kernel[56]
#define COLOR_kernel___Int___rshift SFT_kernel[57]
#define COLOR_kernel___Int___to_f SFT_kernel[58]
#define COLOR_kernel___Int___ascii SFT_kernel[59]
#define COLOR_kernel___Int___digit_count SFT_kernel[60]
#define COLOR_kernel___Int___to_c SFT_kernel[61]
#define ID_Char SFT_kernel[62]
#define COLOR_Char SFT_kernel[63]
#define INIT_TABLE_POS_Char SFT_kernel[64]
#define COLOR_kernel___Char___to_i SFT_kernel[65]
#define COLOR_kernel___Char___ascii SFT_kernel[66]
#define COLOR_kernel___Char___to_lower SFT_kernel[67]
#define COLOR_kernel___Char___to_upper SFT_kernel[68]
#define ID_Pointer SFT_kernel[69]
#define COLOR_Pointer SFT_kernel[70]
#define INIT_TABLE_POS_Pointer SFT_kernel[71]
typedef val_t (* kernel___Object___object_id_t)(val_t  self);
val_t kernel___Object___object_id(val_t  self);
#define LOCATE_kernel___Object___object_id "kernel::Object::object_id"
typedef val_t (* kernel___Object___is_same_type_t)(val_t  self, val_t  param0);
val_t kernel___Object___is_same_type(val_t  self, val_t  param0);
#define LOCATE_kernel___Object___is_same_type "kernel::Object::is_same_type"
typedef val_t (* kernel___Object_____eqeq_t)(val_t  self, val_t  param0);
val_t kernel___Object_____eqeq(val_t  self, val_t  param0);
#define LOCATE_kernel___Object_____eqeq "kernel::Object::=="
typedef val_t (* kernel___Object_____neq_t)(val_t  self, val_t  param0);
val_t kernel___Object_____neq(val_t  self, val_t  param0);
#define LOCATE_kernel___Object_____neq "kernel::Object::!="
typedef void (* kernel___Object___output_t)(val_t  self);
void kernel___Object___output(val_t  self);
#define LOCATE_kernel___Object___output "kernel::Object::output"
typedef void (* kernel___Object___exit_t)(val_t  self, val_t  param0);
void kernel___Object___exit(val_t  self, val_t  param0);
#define LOCATE_kernel___Object___exit "kernel::Object::exit"
typedef val_t (* kernel___Object___sys_t)(val_t  self);
val_t kernel___Object___sys(val_t  self);
#define LOCATE_kernel___Object___sys "kernel::Object::sys"
typedef void (* kernel___Sys___main_t)(val_t  self);
void kernel___Sys___main(val_t  self);
#define LOCATE_kernel___Sys___main "kernel::Sys::main"
typedef val_t (* kernel___Comparable_____l_t)(val_t  self, val_t  param0);
val_t kernel___Comparable_____l(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable_____l "kernel::Comparable::<"
typedef val_t (* kernel___Comparable_____leq_t)(val_t  self, val_t  param0);
val_t kernel___Comparable_____leq(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable_____leq "kernel::Comparable::<="
typedef val_t (* kernel___Comparable_____geq_t)(val_t  self, val_t  param0);
val_t kernel___Comparable_____geq(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable_____geq "kernel::Comparable::>="
typedef val_t (* kernel___Comparable_____g_t)(val_t  self, val_t  param0);
val_t kernel___Comparable_____g(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable_____g "kernel::Comparable::>"
typedef val_t (* kernel___Comparable_____leqg_t)(val_t  self, val_t  param0);
val_t kernel___Comparable_____leqg(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable_____leqg "kernel::Comparable::<=>"
typedef val_t (* kernel___Comparable___is_between_t)(val_t  self, val_t  param0, val_t  param1);
val_t kernel___Comparable___is_between(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_kernel___Comparable___is_between "kernel::Comparable::is_between"
typedef val_t (* kernel___Comparable___max_t)(val_t  self, val_t  param0);
val_t kernel___Comparable___max(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable___max "kernel::Comparable::max"
typedef val_t (* kernel___Comparable___min_t)(val_t  self, val_t  param0);
val_t kernel___Comparable___min(val_t  self, val_t  param0);
#define LOCATE_kernel___Comparable___min "kernel::Comparable::min"
typedef val_t (* kernel___Discrete___succ_t)(val_t  self);
val_t kernel___Discrete___succ(val_t  self);
#define LOCATE_kernel___Discrete___succ "kernel::Discrete::succ"
typedef val_t (* kernel___Discrete___prec_t)(val_t  self);
val_t kernel___Discrete___prec(val_t  self);
#define LOCATE_kernel___Discrete___prec "kernel::Discrete::prec"
typedef val_t (* kernel___Discrete_____plus_t)(val_t  self, val_t  param0);
val_t kernel___Discrete_____plus(val_t  self, val_t  param0);
#define LOCATE_kernel___Discrete_____plus "kernel::Discrete::+"
typedef val_t (* kernel___Discrete_____minus_t)(val_t  self, val_t  param0);
val_t kernel___Discrete_____minus(val_t  self, val_t  param0);
#define LOCATE_kernel___Discrete_____minus "kernel::Discrete::-"
typedef val_t (* kernel___Discrete___distance_t)(val_t  self, val_t  param0);
val_t kernel___Discrete___distance(val_t  self, val_t  param0);
#define LOCATE_kernel___Discrete___distance "kernel::Discrete::distance"
typedef val_t (* kernel___Bool___object_id_t)(val_t  self);
val_t kernel___Bool___object_id(val_t  self);
#define LOCATE_kernel___Bool___object_id "kernel::Bool::(kernel::Object::object_id)"
typedef val_t (* kernel___Bool_____eqeq_t)(val_t  self, val_t  param0);
val_t kernel___Bool_____eqeq(val_t  self, val_t  param0);
#define LOCATE_kernel___Bool_____eqeq "kernel::Bool::(kernel::Object::==)"
typedef val_t (* kernel___Bool_____neq_t)(val_t  self, val_t  param0);
val_t kernel___Bool_____neq(val_t  self, val_t  param0);
#define LOCATE_kernel___Bool_____neq "kernel::Bool::(kernel::Object::!=)"
typedef void (* kernel___Bool___output_t)(val_t  self);
void kernel___Bool___output(val_t  self);
#define LOCATE_kernel___Bool___output "kernel::Bool::(kernel::Object::output)"
typedef val_t (* kernel___Float___object_id_t)(val_t  self);
val_t kernel___Float___object_id(val_t  self);
#define LOCATE_kernel___Float___object_id "kernel::Float::(kernel::Object::object_id)"
typedef void (* kernel___Float___output_t)(val_t  self);
void kernel___Float___output(val_t  self);
#define LOCATE_kernel___Float___output "kernel::Float::(kernel::Object::output)"
typedef val_t (* kernel___Float_____leq_t)(val_t  self, val_t  param0);
val_t kernel___Float_____leq(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____leq "kernel::Float::<="
typedef val_t (* kernel___Float_____l_t)(val_t  self, val_t  param0);
val_t kernel___Float_____l(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____l "kernel::Float::<"
typedef val_t (* kernel___Float_____geq_t)(val_t  self, val_t  param0);
val_t kernel___Float_____geq(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____geq "kernel::Float::>="
typedef val_t (* kernel___Float_____g_t)(val_t  self, val_t  param0);
val_t kernel___Float_____g(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____g "kernel::Float::>"
typedef val_t (* kernel___Float_____plus_t)(val_t  self, val_t  param0);
val_t kernel___Float_____plus(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____plus "kernel::Float::+"
typedef val_t (* kernel___Float___unary__minus_t)(val_t  self);
val_t kernel___Float___unary__minus(val_t  self);
#define LOCATE_kernel___Float___unary__minus "kernel::Float::unary -"
typedef val_t (* kernel___Float_____minus_t)(val_t  self, val_t  param0);
val_t kernel___Float_____minus(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____minus "kernel::Float::-"
typedef val_t (* kernel___Float_____star_t)(val_t  self, val_t  param0);
val_t kernel___Float_____star(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____star "kernel::Float::*"
typedef val_t (* kernel___Float_____slash_t)(val_t  self, val_t  param0);
val_t kernel___Float_____slash(val_t  self, val_t  param0);
#define LOCATE_kernel___Float_____slash "kernel::Float::/"
typedef val_t (* kernel___Float___to_i_t)(val_t  self);
val_t kernel___Float___to_i(val_t  self);
#define LOCATE_kernel___Float___to_i "kernel::Float::to_i"
typedef val_t (* kernel___Int___object_id_t)(val_t  self);
val_t kernel___Int___object_id(val_t  self);
#define LOCATE_kernel___Int___object_id "kernel::Int::(kernel::Object::object_id)"
typedef val_t (* kernel___Int_____eqeq_t)(val_t  self, val_t  param0);
val_t kernel___Int_____eqeq(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____eqeq "kernel::Int::(kernel::Object::==)"
typedef val_t (* kernel___Int_____neq_t)(val_t  self, val_t  param0);
val_t kernel___Int_____neq(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____neq "kernel::Int::(kernel::Object::!=)"
typedef void (* kernel___Int___output_t)(val_t  self);
void kernel___Int___output(val_t  self);
#define LOCATE_kernel___Int___output "kernel::Int::(kernel::Object::output)"
typedef val_t (* kernel___Int_____leq_t)(val_t  self, val_t  param0);
val_t kernel___Int_____leq(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____leq "kernel::Int::(kernel::Comparable::<=)"
typedef val_t (* kernel___Int_____l_t)(val_t  self, val_t  param0);
val_t kernel___Int_____l(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____l "kernel::Int::(kernel::Comparable::<)"
typedef val_t (* kernel___Int_____geq_t)(val_t  self, val_t  param0);
val_t kernel___Int_____geq(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____geq "kernel::Int::(kernel::Comparable::>=)"
typedef val_t (* kernel___Int_____g_t)(val_t  self, val_t  param0);
val_t kernel___Int_____g(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____g "kernel::Int::(kernel::Comparable::>)"
typedef val_t (* kernel___Int_____plus_t)(val_t  self, val_t  param0);
val_t kernel___Int_____plus(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____plus "kernel::Int::(kernel::Discrete::+)"
typedef val_t (* kernel___Int___unary__minus_t)(val_t  self);
val_t kernel___Int___unary__minus(val_t  self);
#define LOCATE_kernel___Int___unary__minus "kernel::Int::unary -"
typedef val_t (* kernel___Int_____minus_t)(val_t  self, val_t  param0);
val_t kernel___Int_____minus(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____minus "kernel::Int::(kernel::Discrete::-)"
typedef val_t (* kernel___Int_____star_t)(val_t  self, val_t  param0);
val_t kernel___Int_____star(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____star "kernel::Int::*"
typedef val_t (* kernel___Int_____slash_t)(val_t  self, val_t  param0);
val_t kernel___Int_____slash(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____slash "kernel::Int::/"
typedef val_t (* kernel___Int_____percent_t)(val_t  self, val_t  param0);
val_t kernel___Int_____percent(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____percent "kernel::Int::%"
typedef val_t (* kernel___Int___lshift_t)(val_t  self, val_t  param0);
val_t kernel___Int___lshift(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___lshift "kernel::Int::lshift"
typedef val_t (* kernel___Int___rshift_t)(val_t  self, val_t  param0);
val_t kernel___Int___rshift(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___rshift "kernel::Int::rshift"
typedef val_t (* kernel___Int___to_f_t)(val_t  self);
val_t kernel___Int___to_f(val_t  self);
#define LOCATE_kernel___Int___to_f "kernel::Int::to_f"
typedef val_t (* kernel___Int___succ_t)(val_t  self);
val_t kernel___Int___succ(val_t  self);
#define LOCATE_kernel___Int___succ "kernel::Int::(kernel::Discrete::succ)"
typedef val_t (* kernel___Int___prec_t)(val_t  self);
val_t kernel___Int___prec(val_t  self);
#define LOCATE_kernel___Int___prec "kernel::Int::(kernel::Discrete::prec)"
typedef val_t (* kernel___Int___distance_t)(val_t  self, val_t  param0);
val_t kernel___Int___distance(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___distance "kernel::Int::(kernel::Discrete::distance)"
typedef val_t (* kernel___Int_____leqg_t)(val_t  self, val_t  param0);
val_t kernel___Int_____leqg(val_t  self, val_t  param0);
#define LOCATE_kernel___Int_____leqg "kernel::Int::(kernel::Comparable::<=>)"
typedef val_t (* kernel___Int___is_between_t)(val_t  self, val_t  param0, val_t  param1);
val_t kernel___Int___is_between(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_kernel___Int___is_between "kernel::Int::(kernel::Comparable::is_between)"
typedef val_t (* kernel___Int___max_t)(val_t  self, val_t  param0);
val_t kernel___Int___max(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___max "kernel::Int::(kernel::Comparable::max)"
typedef val_t (* kernel___Int___min_t)(val_t  self, val_t  param0);
val_t kernel___Int___min(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___min "kernel::Int::(kernel::Comparable::min)"
typedef val_t (* kernel___Int___ascii_t)(val_t  self);
val_t kernel___Int___ascii(val_t  self);
#define LOCATE_kernel___Int___ascii "kernel::Int::ascii"
typedef val_t (* kernel___Int___digit_count_t)(val_t  self, val_t  param0);
val_t kernel___Int___digit_count(val_t  self, val_t  param0);
#define LOCATE_kernel___Int___digit_count "kernel::Int::digit_count"
typedef val_t (* kernel___Int___to_c_t)(val_t  self);
val_t kernel___Int___to_c(val_t  self);
#define LOCATE_kernel___Int___to_c "kernel::Int::to_c"
typedef val_t (* kernel___Char___object_id_t)(val_t  self);
val_t kernel___Char___object_id(val_t  self);
#define LOCATE_kernel___Char___object_id "kernel::Char::(kernel::Object::object_id)"
typedef val_t (* kernel___Char_____eqeq_t)(val_t  self, val_t  param0);
val_t kernel___Char_____eqeq(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____eqeq "kernel::Char::(kernel::Object::==)"
typedef val_t (* kernel___Char_____neq_t)(val_t  self, val_t  param0);
val_t kernel___Char_____neq(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____neq "kernel::Char::(kernel::Object::!=)"
typedef void (* kernel___Char___output_t)(val_t  self);
void kernel___Char___output(val_t  self);
#define LOCATE_kernel___Char___output "kernel::Char::(kernel::Object::output)"
typedef val_t (* kernel___Char_____leq_t)(val_t  self, val_t  param0);
val_t kernel___Char_____leq(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____leq "kernel::Char::(kernel::Comparable::<=)"
typedef val_t (* kernel___Char_____l_t)(val_t  self, val_t  param0);
val_t kernel___Char_____l(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____l "kernel::Char::(kernel::Comparable::<)"
typedef val_t (* kernel___Char_____geq_t)(val_t  self, val_t  param0);
val_t kernel___Char_____geq(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____geq "kernel::Char::(kernel::Comparable::>=)"
typedef val_t (* kernel___Char_____g_t)(val_t  self, val_t  param0);
val_t kernel___Char_____g(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____g "kernel::Char::(kernel::Comparable::>)"
typedef val_t (* kernel___Char___succ_t)(val_t  self);
val_t kernel___Char___succ(val_t  self);
#define LOCATE_kernel___Char___succ "kernel::Char::(kernel::Discrete::succ)"
typedef val_t (* kernel___Char___prec_t)(val_t  self);
val_t kernel___Char___prec(val_t  self);
#define LOCATE_kernel___Char___prec "kernel::Char::(kernel::Discrete::prec)"
typedef val_t (* kernel___Char___distance_t)(val_t  self, val_t  param0);
val_t kernel___Char___distance(val_t  self, val_t  param0);
#define LOCATE_kernel___Char___distance "kernel::Char::(kernel::Discrete::distance)"
typedef val_t (* kernel___Char___to_i_t)(val_t  self);
val_t kernel___Char___to_i(val_t  self);
#define LOCATE_kernel___Char___to_i "kernel::Char::to_i"
typedef val_t (* kernel___Char___ascii_t)(val_t  self);
val_t kernel___Char___ascii(val_t  self);
#define LOCATE_kernel___Char___ascii "kernel::Char::ascii"
typedef val_t (* kernel___Char_____plus_t)(val_t  self, val_t  param0);
val_t kernel___Char_____plus(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____plus "kernel::Char::(kernel::Discrete::+)"
typedef val_t (* kernel___Char_____minus_t)(val_t  self, val_t  param0);
val_t kernel___Char_____minus(val_t  self, val_t  param0);
#define LOCATE_kernel___Char_____minus "kernel::Char::(kernel::Discrete::-)"
typedef val_t (* kernel___Char___to_lower_t)(val_t  self);
val_t kernel___Char___to_lower(val_t  self);
#define LOCATE_kernel___Char___to_lower "kernel::Char::to_lower"
typedef val_t (* kernel___Char___to_upper_t)(val_t  self);
val_t kernel___Char___to_upper(val_t  self);
#define LOCATE_kernel___Char___to_upper "kernel::Char::to_upper"
#endif
