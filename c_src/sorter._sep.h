/* This C header file is generated by NIT to compile modules and programs that requires sorter. */
#ifndef sorter_sep
#define sorter_sep
#include "array._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_AbstractSorter[];

extern const classtable_elt_t VFT_ComparableSorter[];
extern const char *LOCATE_sorter;
extern const int SFT_sorter[];
#define ID_AbstractSorter SFT_sorter[0]
#define COLOR_AbstractSorter SFT_sorter[1]
#define INIT_TABLE_POS_AbstractSorter SFT_sorter[2]
#define COLOR_sorter___AbstractSorter___compare SFT_sorter[3]
#define COLOR_sorter___AbstractSorter___sort SFT_sorter[4]
#define COLOR_sorter___AbstractSorter___sub_sort SFT_sorter[5]
#define COLOR_sorter___AbstractSorter___quick_sort SFT_sorter[6]
#define COLOR_sorter___AbstractSorter___bubble_sort SFT_sorter[7]
#define ID_ComparableSorter SFT_sorter[8]
#define COLOR_ComparableSorter SFT_sorter[9]
#define INIT_TABLE_POS_ComparableSorter SFT_sorter[10]
#define COLOR_sorter___ComparableSorter___init SFT_sorter[11]
typedef val_t (* sorter___AbstractSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t sorter___AbstractSorter___compare(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_sorter___AbstractSorter___compare "sorter::AbstractSorter::compare"
typedef void (* sorter___AbstractSorter___sort_t)(val_t  self, val_t  param0);
void sorter___AbstractSorter___sort(val_t  self, val_t  param0);
#define LOCATE_sorter___AbstractSorter___sort "sorter::AbstractSorter::sort"
typedef void (* sorter___AbstractSorter___sub_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___sub_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_sorter___AbstractSorter___sub_sort "sorter::AbstractSorter::sub_sort"
typedef void (* sorter___AbstractSorter___quick_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___quick_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_sorter___AbstractSorter___quick_sort "sorter::AbstractSorter::quick_sort"
typedef void (* sorter___AbstractSorter___bubble_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___bubble_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define LOCATE_sorter___AbstractSorter___bubble_sort "sorter::AbstractSorter::bubble_sort"
typedef val_t (* sorter___ComparableSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t sorter___ComparableSorter___compare(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_sorter___ComparableSorter___compare "sorter::ComparableSorter::(sorter::AbstractSorter::compare)"
typedef void (* sorter___ComparableSorter___init_t)(val_t  self, int* init_table);
void sorter___ComparableSorter___init(val_t  self, int* init_table);
val_t NEW_sorter___ComparableSorter___init();
#define LOCATE_sorter___ComparableSorter___init "sorter::ComparableSorter::init"
#endif
