/* This C header file is generated by NIT to compile modules and programs that requires string_search. */
#ifndef string_search_sep
#define string_search_sep
#include "string._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Pattern[];

extern const classtable_elt_t VFT_BM_Pattern[];

extern const classtable_elt_t VFT_Match[];
extern const char *LOCATE_string_search;
extern const int SFT_string_search[];
#define ID_Pattern SFT_string_search[0]
#define COLOR_Pattern SFT_string_search[1]
#define INIT_TABLE_POS_Pattern SFT_string_search[2]
#define COLOR_string_search___Pattern___search_index_in SFT_string_search[3]
#define COLOR_string_search___Pattern___search_in SFT_string_search[4]
#define COLOR_string_search___Pattern___search_all_in SFT_string_search[5]
#define COLOR_string_search___Pattern___split_in SFT_string_search[6]
#define ID_BM_Pattern SFT_string_search[7]
#define COLOR_BM_Pattern SFT_string_search[8]
#define COLOR_string_search___BM_Pattern____motif SFT_string_search[9]
#define COLOR_string_search___BM_Pattern____length SFT_string_search[10]
#define COLOR_string_search___BM_Pattern____gs SFT_string_search[11]
#define COLOR_string_search___BM_Pattern____bc_table SFT_string_search[12]
#define INIT_TABLE_POS_BM_Pattern SFT_string_search[13]
#define COLOR_string_search___BM_Pattern___init SFT_string_search[14]
#define COLOR_string_search___BM_Pattern___bc SFT_string_search[15]
#define COLOR_string_search___BM_Pattern___compute_bc SFT_string_search[16]
#define COLOR_string_search___BM_Pattern___suffixes SFT_string_search[17]
#define COLOR_string_search___BM_Pattern___compute_gs SFT_string_search[18]
#define ID_Match SFT_string_search[19]
#define COLOR_Match SFT_string_search[20]
#define COLOR_string_search___Match____string SFT_string_search[21]
#define COLOR_string_search___Match____from SFT_string_search[22]
#define COLOR_string_search___Match____length SFT_string_search[23]
#define INIT_TABLE_POS_Match SFT_string_search[24]
#define COLOR_string_search___Match___string SFT_string_search[25]
#define COLOR_string_search___Match___from SFT_string_search[26]
#define COLOR_string_search___Match___length SFT_string_search[27]
#define COLOR_string_search___Match___after SFT_string_search[28]
#define COLOR_string_search___Match___init SFT_string_search[29]
#define COLOR_string_search___String___search SFT_string_search[30]
#define COLOR_string_search___String___search_from SFT_string_search[31]
#define COLOR_string_search___String___search_all SFT_string_search[32]
#define COLOR_string_search___String___split_with SFT_string_search[33]
#define COLOR_string_search___String___split SFT_string_search[34]
typedef val_t (* string_search___Pattern___search_index_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___Pattern___search_index_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___Pattern___search_index_in "string_search::Pattern::search_index_in"
typedef val_t (* string_search___Pattern___search_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___Pattern___search_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___Pattern___search_in "string_search::Pattern::search_in"
typedef val_t (* string_search___Pattern___search_all_in_t)(val_t  self, val_t  param0);
val_t string_search___Pattern___search_all_in(val_t  self, val_t  param0);
#define LOCATE_string_search___Pattern___search_all_in "string_search::Pattern::search_all_in"
typedef val_t (* string_search___Pattern___split_in_t)(val_t  self, val_t  param0);
val_t string_search___Pattern___split_in(val_t  self, val_t  param0);
#define LOCATE_string_search___Pattern___split_in "string_search::Pattern::split_in"
typedef val_t (* string_search___BM_Pattern___to_s_t)(val_t  self);
val_t string_search___BM_Pattern___to_s(val_t  self);
#define LOCATE_string_search___BM_Pattern___to_s "string_search::BM_Pattern::(string::Object::to_s)"
typedef val_t (* string_search___BM_Pattern___search_index_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___BM_Pattern___search_index_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___BM_Pattern___search_index_in "string_search::BM_Pattern::(string_search::Pattern::search_index_in)"
typedef val_t (* string_search___BM_Pattern___search_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___BM_Pattern___search_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___BM_Pattern___search_in "string_search::BM_Pattern::(string_search::Pattern::search_in)"
typedef void (* string_search___BM_Pattern___init_t)(val_t  self, val_t  param0, int* init_table);
void string_search___BM_Pattern___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_string_search___BM_Pattern___init(val_t  param0);
#define LOCATE_string_search___BM_Pattern___init "string_search::BM_Pattern::init"
#define ATTR_string_search___BM_Pattern____motif(recv) ATTR(recv, COLOR_string_search___BM_Pattern____motif)
#define ATTR_string_search___BM_Pattern____length(recv) ATTR(recv, COLOR_string_search___BM_Pattern____length)
typedef val_t (* string_search___BM_Pattern___bc_t)(val_t  self, val_t  param0);
val_t string_search___BM_Pattern___bc(val_t  self, val_t  param0);
#define LOCATE_string_search___BM_Pattern___bc "string_search::BM_Pattern::bc"
#define ATTR_string_search___BM_Pattern____gs(recv) ATTR(recv, COLOR_string_search___BM_Pattern____gs)
#define ATTR_string_search___BM_Pattern____bc_table(recv) ATTR(recv, COLOR_string_search___BM_Pattern____bc_table)
typedef void (* string_search___BM_Pattern___compute_bc_t)(val_t  self);
void string_search___BM_Pattern___compute_bc(val_t  self);
#define LOCATE_string_search___BM_Pattern___compute_bc "string_search::BM_Pattern::compute_bc"
typedef val_t (* string_search___BM_Pattern___suffixes_t)(val_t  self);
val_t string_search___BM_Pattern___suffixes(val_t  self);
#define LOCATE_string_search___BM_Pattern___suffixes "string_search::BM_Pattern::suffixes"
typedef void (* string_search___BM_Pattern___compute_gs_t)(val_t  self);
void string_search___BM_Pattern___compute_gs(val_t  self);
#define LOCATE_string_search___BM_Pattern___compute_gs "string_search::BM_Pattern::compute_gs"
#define ATTR_string_search___Match____string(recv) ATTR(recv, COLOR_string_search___Match____string)
typedef val_t (* string_search___Match___string_t)(val_t  self);
val_t string_search___Match___string(val_t  self);
#define LOCATE_string_search___Match___string "string_search::Match::string"
#define ATTR_string_search___Match____from(recv) ATTR(recv, COLOR_string_search___Match____from)
typedef val_t (* string_search___Match___from_t)(val_t  self);
val_t string_search___Match___from(val_t  self);
#define LOCATE_string_search___Match___from "string_search::Match::from"
#define ATTR_string_search___Match____length(recv) ATTR(recv, COLOR_string_search___Match____length)
typedef val_t (* string_search___Match___length_t)(val_t  self);
val_t string_search___Match___length(val_t  self);
#define LOCATE_string_search___Match___length "string_search::Match::length"
typedef val_t (* string_search___Match___after_t)(val_t  self);
val_t string_search___Match___after(val_t  self);
#define LOCATE_string_search___Match___after "string_search::Match::after"
typedef val_t (* string_search___Match___to_s_t)(val_t  self);
val_t string_search___Match___to_s(val_t  self);
#define LOCATE_string_search___Match___to_s "string_search::Match::(string::Object::to_s)"
typedef void (* string_search___Match___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void string_search___Match___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_string_search___Match___init(val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_string_search___Match___init "string_search::Match::init"
typedef val_t (* string_search___Char___search_index_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___Char___search_index_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___Char___search_index_in "string_search::Char::(string_search::Pattern::search_index_in)"
typedef val_t (* string_search___Char___search_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___Char___search_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___Char___search_in "string_search::Char::(string_search::Pattern::search_in)"
typedef val_t (* string_search___String___search_index_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___String___search_index_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___String___search_index_in "string_search::String::(string_search::Pattern::search_index_in)"
typedef val_t (* string_search___String___search_in_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___String___search_in(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___String___search_in "string_search::String::(string_search::Pattern::search_in)"
typedef val_t (* string_search___String___search_t)(val_t  self, val_t  param0);
val_t string_search___String___search(val_t  self, val_t  param0);
#define LOCATE_string_search___String___search "string_search::String::search"
typedef val_t (* string_search___String___search_from_t)(val_t  self, val_t  param0, val_t  param1);
val_t string_search___String___search_from(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_string_search___String___search_from "string_search::String::search_from"
typedef val_t (* string_search___String___search_all_t)(val_t  self, val_t  param0);
val_t string_search___String___search_all(val_t  self, val_t  param0);
#define LOCATE_string_search___String___search_all "string_search::String::search_all"
typedef val_t (* string_search___String___split_with_t)(val_t  self, val_t  param0);
val_t string_search___String___split_with(val_t  self, val_t  param0);
#define LOCATE_string_search___String___split_with "string_search::String::split_with"
typedef val_t (* string_search___String___split_t)(val_t  self);
val_t string_search___String___split(val_t  self);
#define LOCATE_string_search___String___split "string_search::String::split"
#endif
