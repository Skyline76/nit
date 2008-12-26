/* This C header file is generated by NIT to compile modules and programs that requires range. */
#ifndef range_sep
#define range_sep
#include "abstract_collection._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Range[];

extern const classtable_elt_t VFT_IteratorRange[];
extern const char *LOCATE_range;
extern const int SFT_range[];
#define ID_Range SFT_range[0]
#define COLOR_Range SFT_range[1]
#define COLOR_range___Range____first SFT_range[2]
#define COLOR_range___Range____last SFT_range[3]
#define COLOR_range___Range____after SFT_range[4]
#define INIT_TABLE_POS_Range SFT_range[5]
#define COLOR_range___Range___last SFT_range[6]
#define COLOR_range___Range___after SFT_range[7]
#define COLOR_range___Range___init SFT_range[8]
#define COLOR_range___Range___without_last SFT_range[9]
#define ID_IteratorRange SFT_range[10]
#define COLOR_IteratorRange SFT_range[11]
#define COLOR_range___IteratorRange____range SFT_range[12]
#define COLOR_range___IteratorRange____item SFT_range[13]
#define INIT_TABLE_POS_IteratorRange SFT_range[14]
#define COLOR_range___IteratorRange___init SFT_range[15]
#define ATTR_range___Range____first(recv) ATTR(recv, COLOR_range___Range____first)
typedef val_t (* range___Range___first_t)(val_t  self);
val_t range___Range___first(val_t  self);
#define LOCATE_range___Range___first "range::Range::(abstract_collection::Collection::first)"
#define ATTR_range___Range____last(recv) ATTR(recv, COLOR_range___Range____last)
typedef val_t (* range___Range___last_t)(val_t  self);
val_t range___Range___last(val_t  self);
#define LOCATE_range___Range___last "range::Range::last"
#define ATTR_range___Range____after(recv) ATTR(recv, COLOR_range___Range____after)
typedef val_t (* range___Range___after_t)(val_t  self);
val_t range___Range___after(val_t  self);
#define LOCATE_range___Range___after "range::Range::after"
typedef val_t (* range___Range___has_t)(val_t  self, val_t  param0);
val_t range___Range___has(val_t  self, val_t  param0);
#define LOCATE_range___Range___has "range::Range::(abstract_collection::Collection::has)"
typedef val_t (* range___Range___has_only_t)(val_t  self, val_t  param0);
val_t range___Range___has_only(val_t  self, val_t  param0);
#define LOCATE_range___Range___has_only "range::Range::(abstract_collection::Collection::has_only)"
typedef val_t (* range___Range___count_t)(val_t  self, val_t  param0);
val_t range___Range___count(val_t  self, val_t  param0);
#define LOCATE_range___Range___count "range::Range::(abstract_collection::Collection::count)"
typedef val_t (* range___Range___iterator_t)(val_t  self);
val_t range___Range___iterator(val_t  self);
#define LOCATE_range___Range___iterator "range::Range::(abstract_collection::Collection::iterator)"
typedef val_t (* range___Range___length_t)(val_t  self);
val_t range___Range___length(val_t  self);
#define LOCATE_range___Range___length "range::Range::(abstract_collection::Collection::length)"
typedef val_t (* range___Range___is_empty_t)(val_t  self);
val_t range___Range___is_empty(val_t  self);
#define LOCATE_range___Range___is_empty "range::Range::(abstract_collection::Collection::is_empty)"
typedef void (* range___Range___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void range___Range___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_range___Range___init(val_t  param0, val_t  param1);
#define LOCATE_range___Range___init "range::Range::init"
typedef void (* range___Range___without_last_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void range___Range___without_last(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_range___Range___without_last(val_t  param0, val_t  param1);
#define LOCATE_range___Range___without_last "range::Range::without_last"
#define ATTR_range___IteratorRange____range(recv) ATTR(recv, COLOR_range___IteratorRange____range)
#define ATTR_range___IteratorRange____item(recv) ATTR(recv, COLOR_range___IteratorRange____item)
typedef val_t (* range___IteratorRange___item_t)(val_t  self);
val_t range___IteratorRange___item(val_t  self);
#define LOCATE_range___IteratorRange___item "range::IteratorRange::(abstract_collection::Iterator::item)"
typedef val_t (* range___IteratorRange___is_ok_t)(val_t  self);
val_t range___IteratorRange___is_ok(val_t  self);
#define LOCATE_range___IteratorRange___is_ok "range::IteratorRange::(abstract_collection::Iterator::is_ok)"
typedef void (* range___IteratorRange___next_t)(val_t  self);
void range___IteratorRange___next(val_t  self);
#define LOCATE_range___IteratorRange___next "range::IteratorRange::(abstract_collection::Iterator::next)"
typedef void (* range___IteratorRange___init_t)(val_t  self, val_t  param0, int* init_table);
void range___IteratorRange___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_range___IteratorRange___init(val_t  param0);
#define LOCATE_range___IteratorRange___init "range::IteratorRange::init"
#endif
