#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
200,
201,
202,
203,
204,
205,
206,
207,
210,
211,
269,
270,
271,
295,
296,
297,
307,
308,
309,
310,
398,
399,
400,
403,
434,
435,
437,
439,
441,
443,
448,
456,
457,
458,
459,
460,
461,
462,
463,
464,
465,
466,
547,
548,
600,
606,
609,
611,
616,
617,
619,
620,
624,
625,
627,
629,
630,
633,
634,
635,
638,
641,
643,
645,
654,
709,
711,
713,
723,
724,
725,
727,
733,
734,
735,
736,
737,
745,
746,
747,
751,
752,
754,
756,
945,
1093,
1094,
6407,
6408,
6410,
6411,
6412,
6413,
6414,
6416,
6418,
6420,
6430,
6432,
6437,
6439,
6441,
6443,
6494,
6495,
6497,
6498,
6499,
6500,
6501,
6503,
6505,
7355,
7359,
7361,
7362,
7363,
7364,
7570,
7571,
7572,
7573,
7589,
7590,
7591,
7593,
7633,
7691,
7693,
7702,
7703,
7704,
7705,
8069,
8073,
8074,
8100,
8117,
8124,
8131,
8142,
8145,
8165,
8236,
8238,
8247,
8249,
8250,
8257,
8271,
8291,
8292,
8300,
8302,
8309,
8310,
8313,
8315,
8320,
8326,
8327,
8334,
8336,
8348,
8351,
8352,
8353,
8364,
8373,
8379,
8380,
8381,
8383,
8384,
8401,
8403,
8417,
8434,
8461,
8491,
8492,
8911,
8994,
8995,
9139,
9140,
9144,
9147,
9212,
9567,
9568,
9779,
9789,
10373,
10394,
10396,
10398,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 200,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 201,
ves_icall_System_Array_CanChangePrimitive,
// token 202,
ves_icall_System_Array_FastCopy,
// token 203,
ves_icall_System_Array_GetLengthInternal_raw,
// token 204,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 205,
ves_icall_System_Array_GetGenericValue_icall,
// token 206,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetGenericValue_icall,
// token 210,
ves_icall_System_Array_SetValueImpl_raw,
// token 211,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 269,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 270,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 271,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 295,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 296,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 297,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 307,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 308,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 309,
ves_icall_System_Enum_InternalGetCorElementType,
// token 310,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 398,
ves_icall_System_Environment_get_ProcessorCount,
// token 399,
ves_icall_System_Environment_get_TickCount,
// token 400,
ves_icall_System_Environment_get_TickCount64,
// token 403,
ves_icall_System_Environment_FailFast_raw,
// token 434,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 435,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 437,
ves_icall_System_GC_SuppressFinalize_raw,
// token 439,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 441,
ves_icall_System_GC_GetGCMemoryInfo,
// token 443,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 448,
ves_icall_System_Object_MemberwiseClone_raw,
// token 456,
ves_icall_System_Math_Acos,
// token 457,
ves_icall_System_Math_Atan2,
// token 458,
ves_icall_System_Math_Ceiling,
// token 459,
ves_icall_System_Math_Cos,
// token 460,
ves_icall_System_Math_Floor,
// token 461,
ves_icall_System_Math_Log10,
// token 462,
ves_icall_System_Math_Pow,
// token 463,
ves_icall_System_Math_Sin,
// token 464,
ves_icall_System_Math_Sqrt,
// token 465,
ves_icall_System_Math_Tan,
// token 466,
ves_icall_System_Math_ModF,
// token 547,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 548,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 600,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 606,
ves_icall_RuntimeType_make_array_type_raw,
// token 609,
ves_icall_RuntimeType_make_byref_type_raw,
// token 611,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 616,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 617,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 619,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 620,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 624,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 625,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 627,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 629,
ves_icall_System_RuntimeType_getFullName_raw,
// token 630,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 633,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 634,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 635,
ves_icall_RuntimeType_GetFields_native_raw,
// token 638,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 641,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 643,
ves_icall_RuntimeType_GetName_raw,
// token 645,
ves_icall_RuntimeType_GetNamespace_raw,
// token 654,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 709,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 711,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 713,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 723,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 724,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 725,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 727,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 733,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 734,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 735,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 736,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 737,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 745,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 746,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 747,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 751,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 752,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 754,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 756,
ves_icall_System_String_FastAllocateString_raw,
// token 945,
ves_icall_System_Type_internal_from_handle_raw,
// token 1093,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1094,
ves_icall_System_ValueType_Equals_raw,
// token 6407,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6408,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6410,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6411,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6412,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6413,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6414,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6416,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6418,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6420,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6430,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6432,
mono_monitor_exit_icall_raw,
// token 6437,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6439,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6441,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6443,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6494,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6495,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6497,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6498,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6499,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6500,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6501,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6503,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6505,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7355,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7359,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7361,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7362,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7363,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7364,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7570,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7571,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7572,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7573,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7589,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7590,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7591,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7593,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7633,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7691,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7693,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7702,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7703,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7704,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7705,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8069,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8073,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8074,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8100,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8117,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8124,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8131,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8142,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8145,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8165,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8236,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8238,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8247,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8249,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8250,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8257,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8271,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8291,
ves_icall_reflection_get_token_raw,
// token 8292,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8300,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8302,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8309,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8310,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8313,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8315,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8320,
ves_icall_reflection_get_token_raw,
// token 8326,
ves_icall_get_method_info_raw,
// token 8327,
ves_icall_get_method_attributes,
// token 8334,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8336,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8348,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8351,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8352,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8353,
ves_icall_reflection_get_token_raw,
// token 8364,
ves_icall_InternalInvoke_raw,
// token 8373,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8379,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8380,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8381,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8383,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8384,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8401,
ves_icall_InvokeClassConstructor_raw,
// token 8403,
ves_icall_InternalInvoke_raw,
// token 8417,
ves_icall_reflection_get_token_raw,
// token 8434,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8461,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8491,
ves_icall_reflection_get_token_raw,
// token 8492,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8911,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8994,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8995,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9139,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9140,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9144,
ves_icall_ModuleBuilder_getToken_raw,
// token 9147,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9212,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9567,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9568,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9779,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9789,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10373,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10394,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10396,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10398,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
