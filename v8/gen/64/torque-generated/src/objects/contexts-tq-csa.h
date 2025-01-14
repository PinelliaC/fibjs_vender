#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CONTEXTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CONTEXTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
TNode<Context> Cast_Context_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1
TNode<Context> Cast_AwaitContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=18&c=1
TNode<Context> Cast_BlockContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=1
TNode<Context> Cast_CatchContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=1
TNode<Context> Cast_DebugEvaluateContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=1
TNode<Context> Cast_EvalContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=23&c=1
TNode<Context> Cast_ModuleContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=24&c=1
TNode<Context> Cast_ScriptContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1
TNode<Context> Cast_WithContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=27&c=1
TNode<Context> Cast_FunctionContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=29&c=1
TNode<Smi> kInitialContextSlotValue_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=31&c=1
TNode<Context> AllocateSyntheticFunctionContext_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_nativeContext, int31_t p_slots);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=38&c=1
TNode<Context> AllocateSyntheticFunctionContext_1(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_nativeContext, TNode<IntPtrT> p_slots);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=53&c=1
TNode<NativeContext> Cast_NativeContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_SCOPE_INFO_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PREVIOUS_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_AGGREGATE_ERROR_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ARRAY_BUFFER_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ARRAY_BUFFER_NOINIT_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ARRAY_BUFFER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ARRAY_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ARRAY_JOIN_STACK_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_OBJECT_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_RESULT_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_MAP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_FILTER_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_TAKE_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_DROP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_FLAT_MAP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ITERATOR_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_VALID_ITERATOR_WRAPPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_JS_ARRAY_PACKED_SMI_ELEMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_MATH_RANDOM_CACHE_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_MATH_RANDOM_INDEX_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_NUMBER_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROXY_REVOCABLE_RESULT_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_REFLECT_APPLY_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_REGEXP_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_REGEXP_LAST_MATCH_INFO_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_INITIAL_STRING_ITERATOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_INITIAL_ARRAY_ITERATOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_SLOW_OBJECT_WITH_NULL_PROTOTYPE_MAP_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_STRICT_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_SLOPPY_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_FAST_ALIASED_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_FUNCTION_CONTEXT_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_FUNCTION_PROTOTYPE_APPLY_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_UINT8_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_INT8_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_UINT16_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_INT16_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_UINT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_INT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_FLOAT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_FLOAT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_UINT8_CLAMPED_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_BIGUINT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_BIGINT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_UINT8_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_INT8_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_UINT16_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_INT16_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_UINT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_INT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_FLOAT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_FLOAT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_UINT8_CLAMPED_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_BIGUINT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_RAB_GSAB_BIGINT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_ACCESSOR_PROPERTY_DESCRIPTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_DATA_PROPERTY_DESCRIPTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_THEN_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_PROTOTYPE_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_STRICT_FUNCTION_WITHOUT_PROTOTYPE_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_HOOK_INIT_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_HOOK_BEFORE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_HOOK_AFTER_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_PROMISE_HOOK_RESOLVE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_CONTINUATION_PRESERVED_EMBEDDER_DATA_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_BOUND_FUNCTION_WITH_CONSTRUCTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_BOUND_FUNCTION_WITHOUT_CONSTRUCTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_WRAPPED_FUNCTION_MAP_INDEX_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FromConstexpr_ContextSlot_constexpr_MIN_CONTEXT_SLOTS_0(compiler::CodeAssemblerState* state_, Context::Field p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> SCOPE_INFO_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PREVIOUS_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> AGGREGATE_ERROR_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ARRAY_BUFFER_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ARRAY_BUFFER_NOINIT_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ARRAY_BUFFER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ARRAY_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ARRAY_JOIN_STACK_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> OBJECT_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_RESULT_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_MAP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_FILTER_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_TAKE_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_DROP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_FLAT_MAP_HELPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ITERATOR_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> VALID_ITERATOR_WRAPPER_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> JS_ARRAY_PACKED_SMI_ELEMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> MATH_RANDOM_CACHE_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> MATH_RANDOM_INDEX_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> NUMBER_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROXY_REVOCABLE_RESULT_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> REFLECT_APPLY_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> REGEXP_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> REGEXP_LAST_MATCH_INFO_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> INITIAL_STRING_ITERATOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> INITIAL_ARRAY_ITERATOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> SLOW_OBJECT_WITH_NULL_PROTOTYPE_MAP_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> STRICT_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> SLOPPY_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FAST_ALIASED_ARGUMENTS_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FUNCTION_CONTEXT_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FUNCTION_PROTOTYPE_APPLY_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> UINT8_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> INT8_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> UINT16_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> INT16_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> UINT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> INT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FLOAT32_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> FLOAT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> UINT8_CLAMPED_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> BIGUINT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> BIGINT64_ARRAY_FUN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_UINT8_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_INT8_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_UINT16_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_INT16_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_UINT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_INT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_FLOAT32_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_FLOAT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_UINT8_CLAMPED_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_BIGUINT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> RAB_GSAB_BIGINT64_ARRAY_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> ACCESSOR_PROPERTY_DESCRIPTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> DATA_PROPERTY_DESCRIPTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_THEN_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_PROTOTYPE_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> STRICT_FUNCTION_WITHOUT_PROTOTYPE_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_HOOK_INIT_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_HOOK_BEFORE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_HOOK_AFTER_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> PROMISE_HOOK_RESOLVE_FUNCTION_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> CONTINUATION_PRESERVED_EMBEDDER_DATA_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> BOUND_FUNCTION_WITH_CONSTRUCTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> BOUND_FUNCTION_WITHOUT_CONSTRUCTOR_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=90&c=1
TNode<IntPtrT> WRAPPED_FUNCTION_MAP_INDEX_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=177&c=1
TNode<Object> LoadContextElement_0(compiler::CodeAssemblerState* state_, TNode<Context> p_c, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=182&c=1
TNode<Object> LoadContextElement_1(compiler::CodeAssemblerState* state_, TNode<Context> p_c, TNode<Smi> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=187&c=1
TNode<Object> LoadContextElement_2(compiler::CodeAssemblerState* state_, TNode<Context> p_c, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=192&c=1
void StoreContextElement_0(compiler::CodeAssemblerState* state_, TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=197&c=1
void StoreContextElement_1(compiler::CodeAssemblerState* state_, TNode<Context> p_c, TNode<Smi> p_i, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=202&c=1
void StoreContextElement_2(compiler::CodeAssemblerState* state_, TNode<Context> p_c, int32_t p_i, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=211&c=1
TNode<Smi> kNoContext_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
TNode<Smi> LoadContextLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceContextElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TNode<Object> LoadContextElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
void StoreContextElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=10&c=3
TNode<ScopeInfo> Method_Context_GetScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
TNode<Context> DownCastForTorqueClass_Context_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1
TNode<Context> DownCastForTorqueClass_AwaitContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=18&c=1
TNode<Context> DownCastForTorqueClass_BlockContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=1
TNode<Context> DownCastForTorqueClass_CatchContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=1
TNode<Context> DownCastForTorqueClass_DebugEvaluateContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=1
TNode<Context> DownCastForTorqueClass_EvalContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=23&c=1
TNode<Context> DownCastForTorqueClass_ModuleContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=24&c=1
TNode<Context> DownCastForTorqueClass_ScriptContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1
TNode<Context> DownCastForTorqueClass_WithContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=27&c=1
TNode<Context> DownCastForTorqueClass_FunctionContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=46&c=18
TorqueStructConstantIterator_Smi_0 ConstantIterator_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=43&c=18
void InitializeFieldsFromIterator_Object_ConstantIterator_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructConstantIterator_Smi_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=48&c=3
void InitContextSlot_FunctionContext_Context_ScopeInfo_ScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<ScopeInfo> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=49&c=3
void InitContextSlot_FunctionContext_Context_Context_OR_Undefined_OR_Zero_Undefined_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Oddball> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=53&c=1
TNode<NativeContext> DownCastForTorqueClass_NativeContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TorqueStructSlice_Object_MutableReference_Object_0 NewMutableSlice_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=11&c=13
TorqueStructReference_ScopeInfo_0 ContextSlot_Context_Context_ScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_Undefined_OR_FixedArray_0 NativeContextSlot_Undefined_OR_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_JSFunction_0 NativeContextSlot_JSFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_Constructor_0 NativeContextSlot_Constructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_Callable_0 NativeContextSlot_Callable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_RegExpMatchInfo_0 NativeContextSlot_RegExpMatchInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_Smi_0 NativeContextSlot_Smi_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_FixedDoubleArray_0 NativeContextSlot_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=79&c=10
TorqueStructReference_JSFunction_0 ContextSlot_NativeContext_NativeContext_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_JSPromise_0 ReferenceCast_JSPromise_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Boolean_0 ReferenceCast_Boolean_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_PromiseCapability_0 ReferenceCast_PromiseCapability_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Map_0 ReferenceCast_Map_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=79&c=10
TorqueStructReference_JSObject_0 ContextSlot_NativeContext_NativeContext_JSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_FixedArray_0 ReferenceCast_FixedArray_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Smi_0 ReferenceCast_Smi_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_JSAny_0 ReferenceCast_JSAny_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Callable_0 ReferenceCast_Callable_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Constructor_0 ReferenceCast_Constructor_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_HeapObject_0 ReferenceCast_HeapObject_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=87&c=10
TorqueStructReference_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_0 NativeContextSlot_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Null_OR_JSProxy_0 ReferenceCast_Null_OR_JSProxy_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_ScopeInfo_0 ReferenceCast_ScopeInfo_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=83&c=10
TorqueStructReference_Undefined_OR_FixedArray_0 ContextSlot_NativeContext_NativeContext_Undefined_OR_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=83&c=10
TorqueStructReference_Constructor_0 ContextSlot_NativeContext_NativeContext_Constructor_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=83&c=10
TorqueStructReference_Callable_0 ContextSlot_NativeContext_NativeContext_Callable_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=83&c=10
TorqueStructReference_RegExpMatchInfo_0 ContextSlot_NativeContext_NativeContext_RegExpMatchInfo_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=79&c=10
TorqueStructReference_Smi_0 ContextSlot_NativeContext_NativeContext_Smi_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=79&c=10
TorqueStructReference_FixedDoubleArray_0 ContextSlot_NativeContext_NativeContext_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_JSFunction_0 ReferenceCast_JSFunction_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_JSObject_0 ReferenceCast_JSObject_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=83&c=10
TorqueStructReference_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_0 ContextSlot_NativeContext_NativeContext_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Undefined_OR_FixedArray_0 ReferenceCast_Undefined_OR_FixedArray_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_RegExpMatchInfo_0 ReferenceCast_RegExpMatchInfo_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_FixedDoubleArray_0 ReferenceCast_FixedDoubleArray_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=74&c=10
TorqueStructReference_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_0 ReferenceCast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSFunction_OR_JSBoundFunction_OR_JSWrappedFunction_Object_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Object_0 p_ref);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CONTEXTS_TQ_CSA_H_
