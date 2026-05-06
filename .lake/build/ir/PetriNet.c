// Lean compiler output
// Module: PetriNet
// Imports: public import Init public import PetriNet.MultisetAux public import PetriNet.Nets public import PetriNet.Equivalence public import PetriNet.Occurrence public import PetriNet.Parabolic public import PetriNet.ReversibleOccurrence public import PetriNet.Swapping
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_MultisetAux(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Nets(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Equivalence(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Occurrence(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Parabolic(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_ReversibleOccurrence(uint8_t builtin);
lean_object* initialize_petri__net_PetriNet_Swapping(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_petri__net_PetriNet(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_MultisetAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Nets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Equivalence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Occurrence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Parabolic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_ReversibleOccurrence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_petri__net_PetriNet_Swapping(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
