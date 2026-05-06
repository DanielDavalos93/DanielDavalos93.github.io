// Lean compiler output
// Module: PetriNet.Occurrence
// Imports: public import Init public import PetriNet.Nets public import PetriNet.MultisetAux public import Mathlib.Data.Set.Disjoint public import Mathlib.Logic.Relation public import Mathlib.Data.Multiset.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Flow"};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value;
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 10, .m_data = "term_<⦃_⦄_"};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__1_value;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2_value_aux_0),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 193, 170, 143, 8, 244, 131, 163)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2_value;
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__3_value;
lean_object* l_Lean_Name_mkStr1(lean_object*);
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value;
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " <⦃"};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__5_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__6_value;
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__7_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__6_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__10 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__10_value;
static const lean_string_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⦄ "};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__10_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__13 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__13_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(202) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__14 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__14_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__13_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__14_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__15 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__15_value;
static const lean_ctor_object lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2_value),((lean_object*)(((size_t)(200) << 1) | 1)),((lean_object*)(((size_t)(201) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__15_value)}};
static const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__16 = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__16_value;
LEAN_EXPORT const lean_object* lp_petri__net_Flow_term___x3c_u2983___u2984__ = (const lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__16_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__0_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__1 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__1_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__2_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__3_value;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_0),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_1),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value_aux_2),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "immediate"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5_value;
lean_object* l_String_toRawSubstring_x27(lean_object*);
static lean_once_cell_t lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(203, 136, 6, 150, 156, 100, 177, 238)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__7 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__7_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value_aux_0),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 38, 226, 157, 198, 214, 164, 11)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__9 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__9_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__8_value)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__10 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__10_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__11 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__11_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__9_value),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__11_value)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__12 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__12_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__13 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__13_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeNotation"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__15 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__15_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(40, 100, 71, 170, 251, 12, 50, 58)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "↑"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17_value;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__0 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__0_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1_value;
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___private_PetriNet_Occurrence_0__Flow_immediate_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___private_PetriNet_Occurrence_0__Flow_immediate_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 10, .m_data = "term_≺⦃_⦄_"};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__0_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1_value_aux_0),((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 51, 152, 180, 237, 121, 170, 5)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1_value;
static const lean_string_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = " ≺⦃"};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__2_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__2_value)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__3_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__3_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__4_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__5_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__14_value)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__6_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1_value),((lean_object*)(((size_t)(200) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__6_value)}};
static const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__7_value;
LEAN_EXPORT const lean_object* lp_petri__net_Flow_term___u227a_u2983___u2984__ = (const lean_object*)&lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__7_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "causal"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0_value;
static lean_once_cell_t lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 172, 4, 210, 198, 172, 49, 176)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__2_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3_value_aux_0),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 244, 6, 226, 219, 73, 209, 59)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__4_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__5 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__5_value;
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__causal__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__causal__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 10, .m_data = "term_≼⦃_⦄_"};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__0_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1_value_aux_0),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 47, 203, 99, 212, 206, 133, 179)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1_value;
static const lean_string_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = " ≼⦃"};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__2_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__2_value)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__3_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__3_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__4_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__6_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__5_value),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__6_value)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__7_value;
static const lean_ctor_object lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1_value),((lean_object*)(((size_t)(65) << 1) | 1)),((lean_object*)(((size_t)(65) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__7_value)}};
static const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__8 = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__8_value;
LEAN_EXPORT const lean_object* lp_petri__net_Flow_term___u227c_u2983___u2984__ = (const lean_object*)&lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__8_value;
static const lean_string_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "preorder"};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0_value;
static lean_once_cell_t lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 15, 52, 239, 226, 209, 255, 83)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__2_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 19, 158, 178, 162, 150, 137, 38)}};
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3_value_aux_0),((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 227, 247, 105, 14, 190, 126, 50)}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__4_value;
static const lean_ctor_object lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__5 = (const lean_object*)&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__5_value;
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__preorder__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__preorder__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 11, .m_data = "term_#₀⦃_⦄_"};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__0_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 175, 203, 58, 135, 206, 48, 200)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1_value;
static const lean_string_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " #₀⦃"};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__2_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__2_value)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__3_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__4_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__3_value),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__4_value)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__5_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__6_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__6_value),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__4_value)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__7_value;
static const lean_ctor_object lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__7_value)}};
static const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__8 = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__8_value;
LEAN_EXPORT const lean_object* lp_petri__net_term___x23_u2080_u2983___u2984__ = (const lean_object*)&lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__8_value;
static const lean_string_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "immediate_conflict"};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__0_value;
static lean_once_cell_t lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 76, 250, 95, 57, 208, 46, 56)}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__2_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__3_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__4_value;
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__immediate__conflict__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__immediate__conflict__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_term___x23_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 10, .m_data = "term_#⦃_⦄_"};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__0_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 146, 2, 227, 155, 68, 131, 226)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__1_value;
static const lean_string_object lp_petri__net_term___x23_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " #⦃"};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__2_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__2_value)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__3_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__4_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__3_value),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__4_value)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__5_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__6_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__6_value),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__4_value)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__7_value;
static const lean_ctor_object lp_petri__net_term___x23_u2983___u2984___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__7_value)}};
static const lean_object* lp_petri__net_term___x23_u2983___u2984___00__closed__8 = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__8_value;
LEAN_EXPORT const lean_object* lp_petri__net_term___x23_u2983___u2984__ = (const lean_object*)&lp_petri__net_term___x23_u2983___u2984___00__closed__8_value;
static const lean_string_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "conflict"};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__0_value;
static lean_once_cell_t lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 232, 115, 178, 144, 29, 79, 81)}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__2_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__3_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__4_value;
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__conflict__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__conflict__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_petri__net_term__Co_u2983___u2984___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 11, .m_data = "term_Co⦃_⦄_"};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__0 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__0_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 189, 152, 34, 73, 255, 83, 246)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__1 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__1_value;
static const lean_string_object lp_petri__net_term__Co_u2983___u2984___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "co⦃"};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__2 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__2_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__2_value)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__3 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__3_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__3_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__9_value)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__4 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__4_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__12_value)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__5 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__5_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__8_value),((lean_object*)(((size_t)(201) << 1) | 1))}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__6 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__6_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__4_value),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__5_value),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__6_value)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__7 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__7_value;
static const lean_ctor_object lp_petri__net_term__Co_u2983___u2984___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__1_value),((lean_object*)(((size_t)(200) << 1) | 1)),((lean_object*)(((size_t)(200) << 1) | 1)),((lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__7_value)}};
static const lean_object* lp_petri__net_term__Co_u2983___u2984___00__closed__8 = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__8_value;
LEAN_EXPORT const lean_object* lp_petri__net_term__Co_u2983___u2984__ = (const lean_object*)&lp_petri__net_term__Co_u2983___u2984___00__closed__8_value;
static const lean_string_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "concurrent"};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__0 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__0_value;
static lean_once_cell_t lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 73, 137, 225, 88, 23, 15, 12)}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__2 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__2_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__3 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__3_value;
static const lean_ctor_object lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__4 = (const lean_object*)&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__4_value;
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__concurrent__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__concurrent__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__5));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6, &lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6_once, _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__6);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__7));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__12));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__2));
x_33 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__5));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_petri__net___private_PetriNet_Occurrence_0__Flow_immediate_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec_ref(x_2);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_4(x_5, x_1, x_2, lean_box(0), lean_box(0));
return x_9;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec_ref(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec_ref(x_2);
x_12 = lean_apply_2(x_4, x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_apply_4(x_5, x_1, x_2, lean_box(0), lean_box(0));
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___private_PetriNet_Occurrence_0__Flow_immediate_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_7);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec_ref(x_4);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec_ref(x_5);
x_11 = lean_apply_2(x_6, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_apply_4(x_8, x_4, x_5, lean_box(0), lean_box(0));
return x_12;
}
}
else
{
lean_dec(x_6);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec_ref(x_4);
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec_ref(x_5);
x_15 = lean_apply_2(x_7, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_7);
x_16 = lean_apply_4(x_8, x_4, x_5, lean_box(0), lean_box(0));
return x_16;
}
}
}
}
static lean_object* _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__0));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1, &lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1_once, _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__1);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__2));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227a_u2983___u2984____1___closed__5));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__causal__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__1));
x_33 = ((lean_object*)(lp_petri__net_Flow_term___u227a_u2983___u2984___00__closed__2));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__causal__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__causal__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__0));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1, &lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1_once, _init_lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__1);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__2));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___u227c_u2983___u2984____1___closed__5));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__preorder__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__1));
x_33 = ((lean_object*)(lp_petri__net_Flow_term___u227c_u2983___u2984___00__closed__2));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__preorder__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__preorder__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__0));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1, &lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1_once, _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__1);
x_21 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__2));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2080_u2983___u2984____1___closed__4));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__immediate__conflict__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__1));
x_33 = ((lean_object*)(lp_petri__net_term___x23_u2080_u2983___u2984___00__closed__2));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__immediate__conflict__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net___aux__PetriNet__Occurrence______unexpand__immediate__conflict__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__0));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_term___x23_u2983___u2984___00__closed__1));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1, &lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1_once, _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__1);
x_21 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__2));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term___x23_u2983___u2984____1___closed__4));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__conflict__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_term___x23_u2983___u2984___00__closed__1));
x_33 = ((lean_object*)(lp_petri__net_term___x23_u2983___u2984___00__closed__2));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__conflict__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net___aux__PetriNet__Occurrence______unexpand__conflict__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__0));
x_2 = l_String_toRawSubstring_x27(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_term__Co_u2983___u2984___00__closed__1));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
lean_dec_ref(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_10, x_17);
lean_dec(x_10);
x_19 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
x_20 = lean_obj_once(&lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1, &lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1_once, _init_lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__1);
x_21 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__2));
x_22 = l_Lean_addMacroScope(x_8, x_21, x_9);
x_23 = ((lean_object*)(lp_petri__net___aux__PetriNet__Occurrence______macroRules__term__Co_u2983___u2984____1___closed__4));
lean_inc(x_18);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__14));
x_26 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
x_27 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__17));
lean_inc(x_18);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_18);
x_29 = l_Lean_Syntax_node2(x_18, x_26, x_28, x_14);
lean_inc(x_18);
x_30 = l_Lean_Syntax_node3(x_18, x_25, x_29, x_12, x_16);
x_31 = l_Lean_Syntax_node2(x_18, x_19, x_24, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__concurrent__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__4));
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______unexpand__Flow__immediate__1___closed__1));
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = ((lean_object*)(lp_petri__net_Flow___aux__PetriNet__Occurrence______macroRules__Flow__term___x3c_u2983___u2984____1___closed__16));
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = l_Lean_Syntax_getArg(x_20, x_14);
lean_dec(x_20);
x_26 = l_Lean_Syntax_getArg(x_15, x_14);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
lean_dec(x_29);
x_32 = ((lean_object*)(lp_petri__net_term__Co_u2983___u2984___00__closed__1));
x_33 = ((lean_object*)(lp_petri__net_term__Co_u2983___u2984___00__closed__2));
lean_inc(x_31);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = ((lean_object*)(lp_petri__net_Flow_term___x3c_u2983___u2984___00__closed__11));
lean_inc(x_31);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Syntax_node5(x_31, x_32, x_26, x_34, x_25, x_36, x_28);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_petri__net___aux__PetriNet__Occurrence______unexpand__concurrent__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_petri__net___aux__PetriNet__Occurrence______unexpand__concurrent__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Nets(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_MultisetAux(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Set_Disjoint(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Logic_Relation(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Multiset_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_petri__net_PetriNet_Occurrence(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Nets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_MultisetAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Set_Disjoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Logic_Relation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Multiset_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
