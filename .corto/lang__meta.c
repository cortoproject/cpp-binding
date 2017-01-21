/* lang__meta.c
 *
 * Loads objects in object store.
 * This file contains generated code. Do not modify!
 */

#include "corto_lang.h"

/* Variable definitions */
corto_lang_package _o;
corto_lang_package corto_lang_o;
corto_lang_class corto_lang_alias_o;
corto_lang_method corto_lang_alias_construct_o;
corto_lang_method corto_lang_alias_init_o;
corto_lang_member corto_lang_alias_member_o;
corto_lang_type corto_lang_any_o;
corto_lang_class corto_lang_array_o;
corto_lang_method corto_lang_array_construct_o;
corto_lang_method corto_lang_array_destruct_o;
corto_lang_member corto_lang_array_elementType_o;
corto_lang_method corto_lang_array_init_o;
corto_lang_bitmask corto_lang_attr_o;
corto_lang_constant ___ (*corto_lang_attr_ATTR_DEFAULT_o);
corto_lang_constant ___ (*corto_lang_attr_ATTR_OBSERVABLE_o);
corto_lang_constant ___ (*corto_lang_attr_ATTR_PERSISTENT_o);
corto_lang_constant ___ (*corto_lang_attr_ATTR_SCOPED_o);
corto_lang_constant ___ (*corto_lang_attr_ATTR_WRITABLE_o);
corto_lang_class corto_lang_binary_o;
corto_lang_method corto_lang_binary_init_o;
corto_lang_class corto_lang_bitmask_o;
corto_lang_method corto_lang_bitmask_init_o;
corto_lang_boolean corto_lang_bool_o;
corto_lang_class corto_lang_boolean_o;
corto_lang_method corto_lang_boolean_init_o;
corto_lang_character corto_lang_char_o;
corto_lang_class corto_lang_character_o;
corto_lang_method corto_lang_character_init_o;
corto_lang_class corto_lang_class_o;
corto_lang_method corto_lang_class_allocSize_o;
corto_lang_alias corto_lang_class_base_o;
corto_lang_alias corto_lang_class_baseAccess_o;
corto_lang_method corto_lang_class_bindObserver_o;
corto_lang_member corto_lang_class_construct_o;
corto_lang_method corto_lang_class_construct_o;
corto_lang_alias corto_lang_class_defaultProcedureType_o;
corto_lang_alias corto_lang_class_defaultType_o;
corto_lang_member corto_lang_class_destruct_o;
corto_lang_method corto_lang_class_destruct_o;
corto_lang_metaprocedure corto_lang_class_eventMaskOf_o;
corto_lang_method corto_lang_class_findObserver_o;
corto_lang_member corto_lang_class_implements_o;
corto_lang_method corto_lang_class_init_o;
corto_lang_method corto_lang_class_instanceof_o;
corto_lang_member corto_lang_class_interfaceVector_o;
corto_lang_metaprocedure corto_lang_class_listen_o;
corto_lang_metaprocedure corto_lang_class_observableOf_o;
corto_lang_member corto_lang_class_observers_o;
corto_lang_alias corto_lang_class_parentState_o;
corto_lang_alias corto_lang_class_parentType_o;
corto_lang_method corto_lang_class_privateObserver_o;
corto_lang_method corto_lang_class_resolveInterfaceMethod_o;
corto_lang_metaprocedure corto_lang_class_setDispatcher_o;
corto_lang_metaprocedure corto_lang_class_setMask_o;
corto_lang_metaprocedure corto_lang_class_setObservable_o;
corto_lang_class corto_lang_collection_o;
corto_lang_method corto_lang_collection_castable_o;
corto_lang_method corto_lang_collection_compatible_o;
corto_lang_method corto_lang_collection_elementRequiresAlloc_o;
corto_lang_member corto_lang_collection_elementType_o;
corto_lang_method corto_lang_collection_init_o;
corto_lang_member corto_lang_collection_kind_o;
corto_lang_member corto_lang_collection_max_o;
corto_lang_metaprocedure corto_lang_collection_size_o;
corto_lang_enum corto_lang_collectionKind_o;
corto_lang_constant ___ (*corto_lang_collectionKind_ARRAY_o);
corto_lang_constant ___ (*corto_lang_collectionKind_LIST_o);
corto_lang_constant ___ (*corto_lang_collectionKind_MAP_o);
corto_lang_constant ___ (*corto_lang_collectionKind_SEQUENCE_o);
corto_lang_enum corto_lang_compositeKind_o;
corto_lang_constant ___ (*corto_lang_compositeKind_CLASS_o);
corto_lang_constant ___ (*corto_lang_compositeKind_DELEGATE_o);
corto_lang_constant ___ (*corto_lang_compositeKind_INTERFACE_o);
corto_lang_constant ___ (*corto_lang_compositeKind_PROCEDURE_o);
corto_lang_constant ___ (*corto_lang_compositeKind_STRUCT_o);
corto_lang_int corto_lang_constant_o;
corto_lang_method corto_lang_constant_init_o;
corto_lang_class corto_lang_delegate_o;
corto_lang_function corto_lang_delegate_bind_o;
corto_lang_method corto_lang_delegate_castable_o;
corto_lang_method corto_lang_delegate_compatible_o;
corto_lang_method corto_lang_delegate_init_o;
corto_lang_method corto_lang_delegate_instanceof_o;
corto_lang_member corto_lang_delegate_parameters_o;
corto_lang_member corto_lang_delegate_returnsReference_o;
corto_lang_member corto_lang_delegate_returnType_o;
corto_lang_struct corto_lang_delegatedata_o;
corto_lang_member corto_lang_delegatedata_instance_o;
corto_lang_member corto_lang_delegatedata_procedure_o;
corto_lang_delegate corto_lang_destructAction_o;
corto_lang_interface corto_lang_dispatcher_o;
corto_lang_method corto_lang_dispatcher_post_o;
corto_lang_class corto_lang_enum_o;
corto_lang_method corto_lang_enum_constant_o;
corto_lang_member corto_lang_enum_constants_o;
corto_lang_method corto_lang_enum_construct_o;
corto_lang_method corto_lang_enum_destruct_o;
corto_lang_method corto_lang_enum_init_o;
corto_lang_enum corto_lang_equalityKind_o;
corto_lang_constant ___ (*corto_lang_equalityKind_EQ_o);
corto_lang_constant ___ (*corto_lang_equalityKind_GT_o);
corto_lang_constant ___ (*corto_lang_equalityKind_LT_o);
corto_lang_constant ___ (*corto_lang_equalityKind_NEQ_o);
corto_lang_class corto_lang_event_o;
corto_lang_method corto_lang_event_handle_o;
corto_lang_member corto_lang_event_handled_o;
corto_lang_member corto_lang_event_kind_o;
corto_lang_function corto_lang_event_uniqueKind_o;
corto_lang_bitmask corto_lang_eventMask_o;
corto_lang_constant ___ (*corto_lang_eventMask_ON_DECLARE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_DEFINE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_DELETE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_INVALIDATE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_METAVALUE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_SCOPE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_SELF_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_TREE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_UPDATE_o);
corto_lang_constant ___ (*corto_lang_eventMask_ON_VALUE_o);
corto_lang_class corto_lang_float_o;
corto_lang_method corto_lang_float_init_o;
corto_lang_member corto_lang_float_max_o;
corto_lang_member corto_lang_float_min_o;
corto_lang_float corto_lang_float32_o;
corto_lang_float corto_lang_float64_o;
corto_lang_procedure corto_lang_function_o;
corto_lang_method corto_lang_function_bind_o;
corto_lang_member corto_lang_function_impl_o;
corto_lang_member corto_lang_function_implData_o;
corto_lang_method corto_lang_function_init_o;
corto_lang_member corto_lang_function_kind_o;
corto_lang_member corto_lang_function_nextParameterId_o;
corto_lang_member corto_lang_function_overloaded_o;
corto_lang_member corto_lang_function_parameters_o;
corto_lang_member corto_lang_function_resource_o;
corto_lang_member corto_lang_function_returnsReference_o;
corto_lang_member corto_lang_function_returnType_o;
corto_lang_member corto_lang_function_size_o;
corto_lang_function corto_lang_function_stringToParameterSeq_o;
corto_lang_function corto_lang_function_unbind_o;
corto_lang_delegate corto_lang_initAction_o;
corto_lang_class corto_lang_int_o;
corto_lang_method corto_lang_int_init_o;
corto_lang_member corto_lang_int_max_o;
corto_lang_member corto_lang_int_min_o;
corto_lang_int corto_lang_int16_o;
corto_lang_int corto_lang_int32_o;
corto_lang_int corto_lang_int64_o;
corto_lang_int corto_lang_int8_o;
corto_lang_class corto_lang_interface_o;
corto_lang_member corto_lang_interface_base_o;
corto_lang_method corto_lang_interface_baseof_o;
corto_lang_method corto_lang_interface_bindMethod_o;
corto_lang_method corto_lang_interface_compatible_o;
corto_lang_method corto_lang_interface_construct_o;
corto_lang_alias corto_lang_interface_defaultProcedureType_o;
corto_lang_alias corto_lang_interface_defaultType_o;
corto_lang_method corto_lang_interface_destruct_o;
corto_lang_method corto_lang_interface_init_o;
corto_lang_member corto_lang_interface_kind_o;
corto_lang_member corto_lang_interface_members_o;
corto_lang_member corto_lang_interface_methods_o;
corto_lang_member corto_lang_interface_nextMemberId_o;
corto_lang_alias corto_lang_interface_parentState_o;
corto_lang_alias corto_lang_interface_parentType_o;
corto_lang_method corto_lang_interface_resolveMember_o;
corto_lang_method corto_lang_interface_resolveMethod_o;
corto_lang_method corto_lang_interface_resolveMethodById_o;
corto_lang_method corto_lang_interface_resolveMethodId_o;
corto_lang_sequence corto_lang_interfaceseq_o;
corto_lang_struct corto_lang_interfaceVector_o;
corto_lang_member corto_lang_interfaceVector_interface_o;
corto_lang_member corto_lang_interfaceVector_vector_o;
corto_lang_sequence corto_lang_interfaceVectorseq_o;
corto_lang_delegate corto_lang_invokeAction_o;
corto_lang_class corto_lang_invokeEvent_o;
corto_lang_member corto_lang_invokeEvent_args_o;
corto_lang_member corto_lang_invokeEvent_function_o;
corto_lang_method corto_lang_invokeEvent_handle_o;
corto_lang_member corto_lang_invokeEvent_instance_o;
corto_lang_member corto_lang_invokeEvent_mount_o;
corto_lang_class corto_lang_iterator_o;
corto_lang_method corto_lang_iterator_castable_o;
corto_lang_method corto_lang_iterator_compatible_o;
corto_lang_member corto_lang_iterator_elementType_o;
corto_lang_method corto_lang_iterator_init_o;
corto_lang_class corto_lang_list_o;
corto_lang_metaprocedure corto_lang_list_append__o;
corto_lang_metaprocedure corto_lang_list_append_any_o;
corto_lang_metaprocedure corto_lang_list_clear_o;
corto_lang_method corto_lang_list_construct_o;
corto_lang_method corto_lang_list_init_o;
corto_lang_metaprocedure corto_lang_list_insert__o;
corto_lang_metaprocedure corto_lang_list_insert_any_o;
corto_lang_metaprocedure corto_lang_list_reverse_o;
corto_lang_class corto_lang_map_o;
corto_lang_method corto_lang_map_construct_o;
corto_lang_member corto_lang_map_elementType_o;
corto_lang_method corto_lang_map_init_o;
corto_lang_member corto_lang_map_keyType_o;
corto_lang_member corto_lang_map_max_o;
corto_lang_class corto_lang_member_o;
corto_lang_method corto_lang_member_construct_o;
corto_lang_member corto_lang_member_id_o;
corto_lang_method corto_lang_member_init_o;
corto_lang_member corto_lang_member_modifiers_o;
corto_lang_member corto_lang_member_offset_o;
corto_lang_member corto_lang_member_state_o;
corto_lang_member corto_lang_member_type_o;
corto_lang_member corto_lang_member_weak_o;
corto_lang_sequence corto_lang_memberseq_o;
corto_lang_procedure corto_lang_metaprocedure_o;
corto_lang_method corto_lang_metaprocedure_bind_o;
corto_lang_member corto_lang_metaprocedure_referenceOnly_o;
corto_lang_procedure corto_lang_method_o;
corto_lang_method corto_lang_method_bind_o;
corto_lang_method corto_lang_method_init_o;
corto_lang_member corto_lang_method_virtual_o;
corto_lang_bitmask corto_lang_modifier_o;
corto_lang_constant ___ (*corto_lang_modifier_CONST_o);
corto_lang_constant ___ (*corto_lang_modifier_GLOBAL_o);
corto_lang_constant ___ (*corto_lang_modifier_HIDDEN_o);
corto_lang_constant ___ (*corto_lang_modifier_LOCAL_o);
corto_lang_constant ___ (*corto_lang_modifier_PRIVATE_o);
corto_lang_constant ___ (*corto_lang_modifier_READONLY_o);
corto_lang_delegate corto_lang_notifyAction_o;
corto_lang_type corto_lang_object_o;
corto_lang_sequence corto_lang_objectseq_o;
corto_lang_class corto_lang_observableEvent_o;
corto_lang_method corto_lang_observableEvent_handle_o;
corto_lang_member corto_lang_observableEvent_me_o;
corto_lang_member corto_lang_observableEvent_observable_o;
corto_lang_member corto_lang_observableEvent_observer_o;
corto_lang_member corto_lang_observableEvent_source_o;
corto_lang_procedure corto_lang_observer_o;
corto_lang_method corto_lang_observer_bind_o;
corto_lang_member corto_lang_observer_delayedBinder_o;
corto_lang_member corto_lang_observer_dispatcher_o;
corto_lang_method corto_lang_observer_init_o;
corto_lang_method corto_lang_observer_listen_o;
corto_lang_member corto_lang_observer_mask_o;
corto_lang_member corto_lang_observer_me_o;
corto_lang_member corto_lang_observer_observable_o;
corto_lang_member corto_lang_observer_observing_o;
corto_lang_method corto_lang_observer_setDispatcher_o;
corto_lang_method corto_lang_observer_silence_o;
corto_lang_member corto_lang_observer_template_o;
corto_lang_function corto_lang_observer_unbind_o;
corto_lang_sequence corto_lang_observerseq_o;
corto_lang_binary corto_lang_octet_o;
corto_lang_sequence corto_lang_octetseq_o;
corto_lang_enum corto_lang_operatorKind_o;
corto_lang_constant ___ (*corto_lang_operatorKind_ADD_o);
corto_lang_constant ___ (*corto_lang_operatorKind_AND_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_ADD_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_AND_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_DIV_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_MOD_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_MUL_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_OR_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_SUB_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_UPDATE_o);
corto_lang_constant ___ (*corto_lang_operatorKind_ASSIGN_XOR_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_AND_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_EQ_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_GT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_GTEQ_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_LT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_LTEQ_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_NEQ_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_NOT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_COND_OR_o);
corto_lang_constant ___ (*corto_lang_operatorKind_DEC_o);
corto_lang_constant ___ (*corto_lang_operatorKind_DIV_o);
corto_lang_constant ___ (*corto_lang_operatorKind_INC_o);
corto_lang_constant ___ (*corto_lang_operatorKind_MOD_o);
corto_lang_constant ___ (*corto_lang_operatorKind_MUL_o);
corto_lang_constant ___ (*corto_lang_operatorKind_NOT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_OR_o);
corto_lang_constant ___ (*corto_lang_operatorKind_REF_o);
corto_lang_constant ___ (*corto_lang_operatorKind_SHIFT_LEFT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_SHIFT_RIGHT_o);
corto_lang_constant ___ (*corto_lang_operatorKind_SUB_o);
corto_lang_constant ___ (*corto_lang_operatorKind_XOR_o);
corto_lang_class corto_lang_package_o;
corto_lang_member corto_lang_package_url_o;
corto_lang_struct corto_lang_parameter_o;
corto_lang_member corto_lang_parameter_name_o;
corto_lang_member corto_lang_parameter_passByReference_o;
corto_lang_member corto_lang_parameter_type_o;
corto_lang_sequence corto_lang_parameterseq_o;
corto_lang_class corto_lang_primitive_o;
corto_lang_method corto_lang_primitive_castable_o;
corto_lang_method corto_lang_primitive_compatible_o;
corto_lang_method corto_lang_primitive_construct_o;
corto_lang_member corto_lang_primitive_convertId_o;
corto_lang_method corto_lang_primitive_init_o;
corto_lang_method corto_lang_primitive_isInteger_o;
corto_lang_method corto_lang_primitive_isNumber_o;
corto_lang_member corto_lang_primitive_kind_o;
corto_lang_member corto_lang_primitive_width_o;
corto_lang_enum corto_lang_primitiveKind_o;
corto_lang_constant ___ (*corto_lang_primitiveKind_BINARY_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_BITMASK_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_BOOLEAN_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_CHARACTER_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_ENUM_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_FLOAT_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_INTEGER_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_TEXT_o);
corto_lang_constant ___ (*corto_lang_primitiveKind_UINTEGER_o);
corto_lang_class corto_lang_procedure_o;
corto_lang_member corto_lang_procedure_bind_o;
corto_lang_method corto_lang_procedure_init_o;
corto_lang_member corto_lang_procedure_kind_o;
corto_lang_method corto_lang_procedure_unbind_o;
corto_lang_enum corto_lang_procedureKind_o;
corto_lang_constant ___ (*corto_lang_procedureKind_FUNCTION_o);
corto_lang_constant ___ (*corto_lang_procedureKind_METAPROCEDURE_o);
corto_lang_constant ___ (*corto_lang_procedureKind_METHOD_o);
corto_lang_constant ___ (*corto_lang_procedureKind_OBSERVER_o);
corto_lang_class corto_lang_query_o;
corto_lang_member corto_lang_query_from_o;
corto_lang_member corto_lang_query_mask_o;
corto_lang_class corto_lang_mount_o;
corto_lang_method corto_lang_mount_construct_o;
corto_lang_method corto_lang_mount_destruct_o;
corto_lang_method corto_lang_mount_invoke_o;
corto_lang_member corto_lang_mount_mount_o;
corto_lang_observer corto_lang_mount_on_declare_o;
corto_lang_observer corto_lang_mount_on_delete_o;
corto_lang_observer corto_lang_mount_on_update_o;
corto_lang_member corto_lang_mount_onDeclare_o;
corto_lang_member corto_lang_mount_onDelete_o;
corto_lang_member corto_lang_mount_onInvoke_o;
corto_lang_member corto_lang_mount_onUpdate_o;
corto_lang_method corto_lang_mount_post_o;
corto_lang_member corto_lang_mount_query_o;
corto_lang_class corto_lang_sequence_o;
corto_lang_method corto_lang_sequence_construct_o;
corto_lang_method corto_lang_sequence_init_o;
corto_lang_metaprocedure corto_lang_sequence_size_o;
corto_lang_bitmask corto_lang_state_o;
corto_lang_constant ___ (*corto_lang_state_DECLARED_o);
corto_lang_constant ___ (*corto_lang_state_DEFINED_o);
corto_lang_constant ___ (*corto_lang_state_DESTRUCTED_o);
corto_lang_constant ___ (*corto_lang_state_VALID_o);
corto_lang_text corto_lang_string_o;
corto_lang_class corto_lang_struct_o;
corto_lang_alias corto_lang_struct_base_o;
corto_lang_member corto_lang_struct_baseAccess_o;
corto_lang_method corto_lang_struct_castable_o;
corto_lang_method corto_lang_struct_compatible_o;
corto_lang_method corto_lang_struct_construct_o;
corto_lang_alias corto_lang_struct_defaultProcedureType_o;
corto_lang_alias corto_lang_struct_defaultType_o;
corto_lang_method corto_lang_struct_init_o;
corto_lang_alias corto_lang_struct_parentState_o;
corto_lang_alias corto_lang_struct_parentType_o;
corto_lang_method corto_lang_struct_resolveMember_o;
corto_lang_class corto_lang_text_o;
corto_lang_member corto_lang_text_charWidth_o;
corto_lang_method corto_lang_text_init_o;
corto_lang_member corto_lang_text_length_o;
corto_lang_class corto_lang_type_o;
corto_lang_member corto_lang_type_alignment_o;
corto_lang_method corto_lang_type_alignmentof_o;
corto_lang_method corto_lang_type_allocSize_o;
corto_lang_method corto_lang_type_castable_o;
corto_lang_metaprocedure corto_lang_type_checkAttr_o;
corto_lang_metaprocedure corto_lang_type_checkState_o;
corto_lang_metaprocedure corto_lang_type_compare_o;
corto_lang_method corto_lang_type_compatible_o;
corto_lang_method corto_lang_type_construct_o;
corto_lang_metaprocedure corto_lang_type_copy_o;
corto_lang_metaprocedure corto_lang_type_declare_o;
corto_lang_member corto_lang_type_defaultProcedureType_o;
corto_lang_member corto_lang_type_defaultType_o;
corto_lang_metaprocedure corto_lang_type_define_o;
corto_lang_metaprocedure corto_lang_type_delete_o;
corto_lang_method corto_lang_type_destruct_o;
corto_lang_metaprocedure corto_lang_type_fullname_o;
corto_lang_member corto_lang_type_hasResources_o;
corto_lang_member corto_lang_type_init_o;
corto_lang_method corto_lang_type_init_o;
corto_lang_metaprocedure corto_lang_type_instanceof_o;
corto_lang_metaprocedure corto_lang_type_invalidate_o;
corto_lang_member corto_lang_type_kind_o;
corto_lang_metaprocedure corto_lang_type_lookup_o;
corto_lang_member corto_lang_type_metaprocedures_o;
corto_lang_metaprocedure corto_lang_type_nameof_o;
corto_lang_metaprocedure corto_lang_type_parentof_o;
corto_lang_member corto_lang_type_parentState_o;
corto_lang_member corto_lang_type_parentType_o;
corto_lang_member corto_lang_type_reference_o;
corto_lang_metaprocedure corto_lang_type_relname_o;
corto_lang_metaprocedure corto_lang_type_resolve_o;
corto_lang_method corto_lang_type_resolveProcedure_o;
corto_lang_member corto_lang_type_size_o;
corto_lang_method corto_lang_type_sizeof_o;
corto_lang_member corto_lang_type_templateId_o;
corto_lang_metaprocedure corto_lang_type_toString_o;
corto_lang_metaprocedure corto_lang_type_typeof_o;
corto_lang_enum corto_lang_typeKind_o;
corto_lang_constant ___ (*corto_lang_typeKind_ANY_o);
corto_lang_constant ___ (*corto_lang_typeKind_COLLECTION_o);
corto_lang_constant ___ (*corto_lang_typeKind_COMPOSITE_o);
corto_lang_constant ___ (*corto_lang_typeKind_ITERATOR_o);
corto_lang_constant ___ (*corto_lang_typeKind_PRIMITIVE_o);
corto_lang_constant ___ (*corto_lang_typeKind_VOID_o);
corto_lang_class corto_lang_uint_o;
corto_lang_method corto_lang_uint_init_o;
corto_lang_member corto_lang_uint_max_o;
corto_lang_member corto_lang_uint_min_o;
corto_lang_uint corto_lang_uint16_o;
corto_lang_uint corto_lang_uint32_o;
corto_lang_uint corto_lang_uint64_o;
corto_lang_uint corto_lang_uint8_o;
corto_lang_procedure corto_lang_virtual_o;
corto_lang_method corto_lang_virtual_init_o;
corto_lang_type corto_lang_void_o;
corto_lang_sequence corto_lang_vtable_o;
corto_lang_enum corto_lang_width_o;
corto_lang_constant ___ (*corto_lang_width_WIDTH_16_o);
corto_lang_constant ___ (*corto_lang_width_WIDTH_32_o);
corto_lang_constant ___ (*corto_lang_width_WIDTH_64_o);
corto_lang_constant ___ (*corto_lang_width_WIDTH_8_o);
corto_lang_constant ___ (*corto_lang_width_WIDTH_WORD_o);
corto_lang_binary corto_lang_word_o;

/* Load objects in object store. */
int lang_load(void) {
    corto_object _a_; /* Used for resolving anonymous objects */
    _a_ = NULL;

    /* Declare ::corto::lang */
    corto_lang_o = corto_declareChild(_o, "lang", corto_lang_package_o);
    if (!corto_lang_o) {
        corto_error("lang_load: failed to declare '::corto::lang' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::alias */
    corto_lang_alias_o = corto_declareChild(corto_lang_o, "alias", corto_lang_class_o);
    if (!corto_lang_alias_o) {
        corto_error("lang_load: failed to declare '::corto::lang::alias' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::alias::construct() */
    corto_lang_alias_construct_o = corto_declareChild(corto_lang_alias_o, "construct()", corto_lang_method_o);
    if (!corto_lang_alias_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::alias::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::alias::init() */
    corto_lang_alias_init_o = corto_declareChild(corto_lang_alias_o, "init()", corto_lang_method_o);
    if (!corto_lang_alias_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::alias::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::alias::member */
    corto_lang_alias_member_o = corto_declareChild(corto_lang_alias_o, "member", corto_lang_member_o);
    if (!corto_lang_alias_member_o) {
        corto_error("lang_load: failed to declare '::corto::lang::alias::member' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::any */
    corto_lang_any_o = corto_declareChild(corto_lang_o, "any", corto_lang_type_o);
    if (!corto_lang_any_o) {
        corto_error("lang_load: failed to declare '::corto::lang::any' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::array */
    corto_lang_array_o = corto_declareChild(corto_lang_o, "array", corto_lang_class_o);
    if (!corto_lang_array_o) {
        corto_error("lang_load: failed to declare '::corto::lang::array' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::array::construct() */
    corto_lang_array_construct_o = corto_declareChild(corto_lang_array_o, "construct()", corto_lang_method_o);
    if (!corto_lang_array_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::array::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::array::destruct() */
    corto_lang_array_destruct_o = corto_declareChild(corto_lang_array_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_array_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::array::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::array::elementType */
    corto_lang_array_elementType_o = corto_declareChild(corto_lang_array_o, "elementType", corto_lang_member_o);
    if (!corto_lang_array_elementType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::array::elementType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::array::init() */
    corto_lang_array_init_o = corto_declareChild(corto_lang_array_o, "init()", corto_lang_method_o);
    if (!corto_lang_array_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::array::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr */
    corto_lang_attr_o = corto_declareChild(corto_lang_o, "attr", corto_lang_bitmask_o);
    if (!corto_lang_attr_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr::ATTR_DEFAULT */
    corto_lang_attr_ATTR_DEFAULT_o = corto_declareChild(corto_lang_attr_o, "ATTR_DEFAULT", corto_lang_constant_o);
    if (!corto_lang_attr_ATTR_DEFAULT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr::ATTR_DEFAULT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr::ATTR_OBSERVABLE */
    corto_lang_attr_ATTR_OBSERVABLE_o = corto_declareChild(corto_lang_attr_o, "ATTR_OBSERVABLE", corto_lang_constant_o);
    if (!corto_lang_attr_ATTR_OBSERVABLE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr::ATTR_OBSERVABLE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr::ATTR_PERSISTENT */
    corto_lang_attr_ATTR_PERSISTENT_o = corto_declareChild(corto_lang_attr_o, "ATTR_PERSISTENT", corto_lang_constant_o);
    if (!corto_lang_attr_ATTR_PERSISTENT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr::ATTR_PERSISTENT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr::ATTR_SCOPED */
    corto_lang_attr_ATTR_SCOPED_o = corto_declareChild(corto_lang_attr_o, "ATTR_SCOPED", corto_lang_constant_o);
    if (!corto_lang_attr_ATTR_SCOPED_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr::ATTR_SCOPED' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::attr::ATTR_WRITABLE */
    corto_lang_attr_ATTR_WRITABLE_o = corto_declareChild(corto_lang_attr_o, "ATTR_WRITABLE", corto_lang_constant_o);
    if (!corto_lang_attr_ATTR_WRITABLE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::attr::ATTR_WRITABLE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::binary */
    corto_lang_binary_o = corto_declareChild(corto_lang_o, "binary", corto_lang_class_o);
    if (!corto_lang_binary_o) {
        corto_error("lang_load: failed to declare '::corto::lang::binary' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::binary::init() */
    corto_lang_binary_init_o = corto_declareChild(corto_lang_binary_o, "init()", corto_lang_method_o);
    if (!corto_lang_binary_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::binary::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::bitmask */
    corto_lang_bitmask_o = corto_declareChild(corto_lang_o, "bitmask", corto_lang_class_o);
    if (!corto_lang_bitmask_o) {
        corto_error("lang_load: failed to declare '::corto::lang::bitmask' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::bitmask::init() */
    corto_lang_bitmask_init_o = corto_declareChild(corto_lang_bitmask_o, "init()", corto_lang_method_o);
    if (!corto_lang_bitmask_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::bitmask::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::bool */
    corto_lang_bool_o = corto_declareChild(corto_lang_o, "bool", corto_lang_boolean_o);
    if (!corto_lang_bool_o) {
        corto_error("lang_load: failed to declare '::corto::lang::bool' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::boolean */
    corto_lang_boolean_o = corto_declareChild(corto_lang_o, "boolean", corto_lang_class_o);
    if (!corto_lang_boolean_o) {
        corto_error("lang_load: failed to declare '::corto::lang::boolean' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::boolean::init() */
    corto_lang_boolean_init_o = corto_declareChild(corto_lang_boolean_o, "init()", corto_lang_method_o);
    if (!corto_lang_boolean_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::boolean::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::char */
    corto_lang_char_o = corto_declareChild(corto_lang_o, "char", corto_lang_character_o);
    if (!corto_lang_char_o) {
        corto_error("lang_load: failed to declare '::corto::lang::char' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::character */
    corto_lang_character_o = corto_declareChild(corto_lang_o, "character", corto_lang_class_o);
    if (!corto_lang_character_o) {
        corto_error("lang_load: failed to declare '::corto::lang::character' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::character::init() */
    corto_lang_character_init_o = corto_declareChild(corto_lang_character_o, "init()", corto_lang_method_o);
    if (!corto_lang_character_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::character::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class */
    corto_lang_class_o = corto_declareChild(corto_lang_o, "class", corto_lang_class_o);
    if (!corto_lang_class_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::allocSize() */
    corto_lang_class_allocSize_o = corto_declareChild(corto_lang_class_o, "allocSize()", corto_lang_method_o);
    if (!corto_lang_class_allocSize_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::allocSize()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::base */
    corto_lang_class_base_o = corto_declareChild(corto_lang_class_o, "base", corto_lang_alias_o);
    if (!corto_lang_class_base_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::base' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::baseAccess */
    corto_lang_class_baseAccess_o = corto_declareChild(corto_lang_class_o, "baseAccess", corto_lang_alias_o);
    if (!corto_lang_class_baseAccess_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::baseAccess' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::bindObserver(observer observer) */
    corto_lang_class_bindObserver_o = corto_declareChild(corto_lang_class_o, "bindObserver(observer observer)", corto_lang_method_o);
    if (!corto_lang_class_bindObserver_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::bindObserver(observer observer)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::construct */
    corto_lang_class_construct_o = corto_declareChild(corto_lang_class_o, "construct", corto_lang_member_o);
    if (!corto_lang_class_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::construct' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::construct() */
    corto_lang_class_construct_o = corto_declareChild(corto_lang_class_o, "construct()", corto_lang_method_o);
    if (!corto_lang_class_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::defaultProcedureType */
    corto_lang_class_defaultProcedureType_o = corto_declareChild(corto_lang_class_o, "defaultProcedureType", corto_lang_alias_o);
    if (!corto_lang_class_defaultProcedureType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::defaultProcedureType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::defaultType */
    corto_lang_class_defaultType_o = corto_declareChild(corto_lang_class_o, "defaultType", corto_lang_alias_o);
    if (!corto_lang_class_defaultType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::defaultType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::destruct */
    corto_lang_class_destruct_o = corto_declareChild(corto_lang_class_o, "destruct", corto_lang_member_o);
    if (!corto_lang_class_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::destruct' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::destruct() */
    corto_lang_class_destruct_o = corto_declareChild(corto_lang_class_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_class_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::eventMaskOf(observer observer) */
    corto_lang_class_eventMaskOf_o = corto_declareChild(corto_lang_class_o, "eventMaskOf(observer observer)", corto_lang_metaprocedure_o);
    if (!corto_lang_class_eventMaskOf_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::eventMaskOf(observer observer)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::findObserver(object observable) */
    corto_lang_class_findObserver_o = corto_declareChild(corto_lang_class_o, "findObserver(object observable)", corto_lang_method_o);
    if (!corto_lang_class_findObserver_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::findObserver(object observable)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::implements */
    corto_lang_class_implements_o = corto_declareChild(corto_lang_class_o, "implements", corto_lang_member_o);
    if (!corto_lang_class_implements_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::implements' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::init() */
    corto_lang_class_init_o = corto_declareChild(corto_lang_class_o, "init()", corto_lang_method_o);
    if (!corto_lang_class_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::instanceof(object object) */
    corto_lang_class_instanceof_o = corto_declareChild(corto_lang_class_o, "instanceof(object object)", corto_lang_method_o);
    if (!corto_lang_class_instanceof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::instanceof(object object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::interfaceVector */
    corto_lang_class_interfaceVector_o = corto_declareChild(corto_lang_class_o, "interfaceVector", corto_lang_member_o);
    if (!corto_lang_class_interfaceVector_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::interfaceVector' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::listen(observer observer,eventMask mask,object observable,dispatcher dispatcher) */
    corto_lang_class_listen_o = corto_declareChild(corto_lang_class_o, "listen(observer observer,eventMask mask,object observable,dispatcher dispatcher)", corto_lang_metaprocedure_o);
    if (!corto_lang_class_listen_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::listen(observer observer,eventMask mask,object observable,dispatcher dispatcher)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::observableOf(observer observer) */
    corto_lang_class_observableOf_o = corto_declareChild(corto_lang_class_o, "observableOf(observer observer)", corto_lang_metaprocedure_o);
    if (!corto_lang_class_observableOf_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::observableOf(observer observer)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::observers */
    corto_lang_class_observers_o = corto_declareChild(corto_lang_class_o, "observers", corto_lang_member_o);
    if (!corto_lang_class_observers_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::observers' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::parentState */
    corto_lang_class_parentState_o = corto_declareChild(corto_lang_class_o, "parentState", corto_lang_alias_o);
    if (!corto_lang_class_parentState_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::parentState' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::parentType */
    corto_lang_class_parentType_o = corto_declareChild(corto_lang_class_o, "parentType", corto_lang_alias_o);
    if (!corto_lang_class_parentType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::parentType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::privateObserver(object object,observer observer) */
    corto_lang_class_privateObserver_o = corto_declareChild(corto_lang_class_o, "privateObserver(object object,observer observer)", corto_lang_method_o);
    if (!corto_lang_class_privateObserver_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::privateObserver(object object,observer observer)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::resolveInterfaceMethod(interface interface,uint32 method) */
    corto_lang_class_resolveInterfaceMethod_o = corto_declareChild(corto_lang_class_o, "resolveInterfaceMethod(interface interface,uint32 method)", corto_lang_method_o);
    if (!corto_lang_class_resolveInterfaceMethod_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::resolveInterfaceMethod(interface interface,uint32 method)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::setDispatcher(observer observer,dispatcher dispatcher */
    corto_lang_class_setDispatcher_o = corto_declareChild(corto_lang_class_o, "setDispatcher(observer observer,dispatcher dispatcher", corto_lang_metaprocedure_o);
    if (!corto_lang_class_setDispatcher_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::setDispatcher(observer observer,dispatcher dispatcher' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::setMask(observer observer,eventMask mask) */
    corto_lang_class_setMask_o = corto_declareChild(corto_lang_class_o, "setMask(observer observer,eventMask mask)", corto_lang_metaprocedure_o);
    if (!corto_lang_class_setMask_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::setMask(observer observer,eventMask mask)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::class::setObservable(observer observer,object observable) */
    corto_lang_class_setObservable_o = corto_declareChild(corto_lang_class_o, "setObservable(observer observer,object observable)", corto_lang_metaprocedure_o);
    if (!corto_lang_class_setObservable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::class::setObservable(observer observer,object observable)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection */
    corto_lang_collection_o = corto_declareChild(corto_lang_o, "collection", corto_lang_class_o);
    if (!corto_lang_collection_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::castable(type type) */
    corto_lang_collection_castable_o = corto_declareChild(corto_lang_collection_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_collection_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::compatible(type type) */
    corto_lang_collection_compatible_o = corto_declareChild(corto_lang_collection_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_collection_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::elementRequiresAlloc() */
    corto_lang_collection_elementRequiresAlloc_o = corto_declareChild(corto_lang_collection_o, "elementRequiresAlloc()", corto_lang_method_o);
    if (!corto_lang_collection_elementRequiresAlloc_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::elementRequiresAlloc()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::elementType */
    corto_lang_collection_elementType_o = corto_declareChild(corto_lang_collection_o, "elementType", corto_lang_member_o);
    if (!corto_lang_collection_elementType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::elementType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::init() */
    corto_lang_collection_init_o = corto_declareChild(corto_lang_collection_o, "init()", corto_lang_method_o);
    if (!corto_lang_collection_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::kind */
    corto_lang_collection_kind_o = corto_declareChild(corto_lang_collection_o, "kind", corto_lang_member_o);
    if (!corto_lang_collection_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::max */
    corto_lang_collection_max_o = corto_declareChild(corto_lang_collection_o, "max", corto_lang_member_o);
    if (!corto_lang_collection_max_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::max' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collection::size() */
    corto_lang_collection_size_o = corto_declareChild(corto_lang_collection_o, "size()", corto_lang_metaprocedure_o);
    if (!corto_lang_collection_size_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collection::size()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collectionKind */
    corto_lang_collectionKind_o = corto_declareChild(corto_lang_o, "collectionKind", corto_lang_enum_o);
    if (!corto_lang_collectionKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collectionKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collectionKind::ARRAY */
    corto_lang_collectionKind_ARRAY_o = corto_declareChild(corto_lang_collectionKind_o, "ARRAY", corto_lang_constant_o);
    if (!corto_lang_collectionKind_ARRAY_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collectionKind::ARRAY' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collectionKind::LIST */
    corto_lang_collectionKind_LIST_o = corto_declareChild(corto_lang_collectionKind_o, "LIST", corto_lang_constant_o);
    if (!corto_lang_collectionKind_LIST_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collectionKind::LIST' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collectionKind::MAP */
    corto_lang_collectionKind_MAP_o = corto_declareChild(corto_lang_collectionKind_o, "MAP", corto_lang_constant_o);
    if (!corto_lang_collectionKind_MAP_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collectionKind::MAP' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::collectionKind::SEQUENCE */
    corto_lang_collectionKind_SEQUENCE_o = corto_declareChild(corto_lang_collectionKind_o, "SEQUENCE", corto_lang_constant_o);
    if (!corto_lang_collectionKind_SEQUENCE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::collectionKind::SEQUENCE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind */
    corto_lang_compositeKind_o = corto_declareChild(corto_lang_o, "compositeKind", corto_lang_enum_o);
    if (!corto_lang_compositeKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind::CLASS */
    corto_lang_compositeKind_CLASS_o = corto_declareChild(corto_lang_compositeKind_o, "CLASS", corto_lang_constant_o);
    if (!corto_lang_compositeKind_CLASS_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind::CLASS' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind::DELEGATE */
    corto_lang_compositeKind_DELEGATE_o = corto_declareChild(corto_lang_compositeKind_o, "DELEGATE", corto_lang_constant_o);
    if (!corto_lang_compositeKind_DELEGATE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind::DELEGATE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind::INTERFACE */
    corto_lang_compositeKind_INTERFACE_o = corto_declareChild(corto_lang_compositeKind_o, "INTERFACE", corto_lang_constant_o);
    if (!corto_lang_compositeKind_INTERFACE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind::INTERFACE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind::PROCEDURE */
    corto_lang_compositeKind_PROCEDURE_o = corto_declareChild(corto_lang_compositeKind_o, "PROCEDURE", corto_lang_constant_o);
    if (!corto_lang_compositeKind_PROCEDURE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind::PROCEDURE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::compositeKind::STRUCT */
    corto_lang_compositeKind_STRUCT_o = corto_declareChild(corto_lang_compositeKind_o, "STRUCT", corto_lang_constant_o);
    if (!corto_lang_compositeKind_STRUCT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::compositeKind::STRUCT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::constant */
    corto_lang_constant_o = corto_declareChild(corto_lang_o, "constant", corto_lang_int_o);
    if (!corto_lang_constant_o) {
        corto_error("lang_load: failed to declare '::corto::lang::constant' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::constant::init() */
    corto_lang_constant_init_o = corto_declareChild(corto_lang_constant_o, "init()", corto_lang_method_o);
    if (!corto_lang_constant_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::constant::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate */
    corto_lang_delegate_o = corto_declareChild(corto_lang_o, "delegate", corto_lang_class_o);
    if (!corto_lang_delegate_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::bind(function object) */
    corto_lang_delegate_bind_o = corto_declareChild(corto_lang_delegate_o, "bind(function object)", corto_lang_function_o);
    if (!corto_lang_delegate_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::bind(function object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::castable(type type) */
    corto_lang_delegate_castable_o = corto_declareChild(corto_lang_delegate_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_delegate_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::compatible(type type) */
    corto_lang_delegate_compatible_o = corto_declareChild(corto_lang_delegate_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_delegate_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::init() */
    corto_lang_delegate_init_o = corto_declareChild(corto_lang_delegate_o, "init()", corto_lang_method_o);
    if (!corto_lang_delegate_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::instanceof(object object) */
    corto_lang_delegate_instanceof_o = corto_declareChild(corto_lang_delegate_o, "instanceof(object object)", corto_lang_method_o);
    if (!corto_lang_delegate_instanceof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::instanceof(object object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::parameters */
    corto_lang_delegate_parameters_o = corto_declareChild(corto_lang_delegate_o, "parameters", corto_lang_member_o);
    if (!corto_lang_delegate_parameters_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::parameters' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::returnsReference */
    corto_lang_delegate_returnsReference_o = corto_declareChild(corto_lang_delegate_o, "returnsReference", corto_lang_member_o);
    if (!corto_lang_delegate_returnsReference_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::returnsReference' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegate::returnType */
    corto_lang_delegate_returnType_o = corto_declareChild(corto_lang_delegate_o, "returnType", corto_lang_member_o);
    if (!corto_lang_delegate_returnType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegate::returnType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegatedata */
    corto_lang_delegatedata_o = corto_declareChild(corto_lang_o, "delegatedata", corto_lang_struct_o);
    if (!corto_lang_delegatedata_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegatedata' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegatedata::instance */
    corto_lang_delegatedata_instance_o = corto_declareChild(corto_lang_delegatedata_o, "instance", corto_lang_member_o);
    if (!corto_lang_delegatedata_instance_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegatedata::instance' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::delegatedata::procedure */
    corto_lang_delegatedata_procedure_o = corto_declareChild(corto_lang_delegatedata_o, "procedure", corto_lang_member_o);
    if (!corto_lang_delegatedata_procedure_o) {
        corto_error("lang_load: failed to declare '::corto::lang::delegatedata::procedure' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::destructAction */
    corto_lang_destructAction_o = corto_declareChild(corto_lang_o, "destructAction", corto_lang_delegate_o);
    if (!corto_lang_destructAction_o) {
        corto_error("lang_load: failed to declare '::corto::lang::destructAction' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::dispatcher */
    corto_lang_dispatcher_o = corto_declareChild(corto_lang_o, "dispatcher", corto_lang_interface_o);
    if (!corto_lang_dispatcher_o) {
        corto_error("lang_load: failed to declare '::corto::lang::dispatcher' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::dispatcher::post(event e) */
    corto_lang_dispatcher_post_o = corto_declareChild(corto_lang_dispatcher_o, "post(event e)", corto_lang_method_o);
    if (!corto_lang_dispatcher_post_o) {
        corto_error("lang_load: failed to declare '::corto::lang::dispatcher::post(event e)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum */
    corto_lang_enum_o = corto_declareChild(corto_lang_o, "enum", corto_lang_class_o);
    if (!corto_lang_enum_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum::constant(int32 value) */
    corto_lang_enum_constant_o = corto_declareChild(corto_lang_enum_o, "constant(int32 value)", corto_lang_method_o);
    if (!corto_lang_enum_constant_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum::constant(int32 value)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum::constants */
    corto_lang_enum_constants_o = corto_declareChild(corto_lang_enum_o, "constants", corto_lang_member_o);
    if (!corto_lang_enum_constants_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum::constants' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum::construct() */
    corto_lang_enum_construct_o = corto_declareChild(corto_lang_enum_o, "construct()", corto_lang_method_o);
    if (!corto_lang_enum_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum::destruct() */
    corto_lang_enum_destruct_o = corto_declareChild(corto_lang_enum_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_enum_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::enum::init() */
    corto_lang_enum_init_o = corto_declareChild(corto_lang_enum_o, "init()", corto_lang_method_o);
    if (!corto_lang_enum_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::enum::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::equalityKind */
    corto_lang_equalityKind_o = corto_declareChild(corto_lang_o, "equalityKind", corto_lang_enum_o);
    if (!corto_lang_equalityKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::equalityKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::equalityKind::EQ */
    corto_lang_equalityKind_EQ_o = corto_declareChild(corto_lang_equalityKind_o, "EQ", corto_lang_constant_o);
    if (!corto_lang_equalityKind_EQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::equalityKind::EQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::equalityKind::GT */
    corto_lang_equalityKind_GT_o = corto_declareChild(corto_lang_equalityKind_o, "GT", corto_lang_constant_o);
    if (!corto_lang_equalityKind_GT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::equalityKind::GT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::equalityKind::LT */
    corto_lang_equalityKind_LT_o = corto_declareChild(corto_lang_equalityKind_o, "LT", corto_lang_constant_o);
    if (!corto_lang_equalityKind_LT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::equalityKind::LT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::equalityKind::NEQ */
    corto_lang_equalityKind_NEQ_o = corto_declareChild(corto_lang_equalityKind_o, "NEQ", corto_lang_constant_o);
    if (!corto_lang_equalityKind_NEQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::equalityKind::NEQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::event */
    corto_lang_event_o = corto_declareChild(corto_lang_o, "event", corto_lang_class_o);
    if (!corto_lang_event_o) {
        corto_error("lang_load: failed to declare '::corto::lang::event' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::event::ref() */
    corto_lang_event_handle_o = corto_declareChild(corto_lang_event_o, "ref()", corto_lang_method_o);
    if (!corto_lang_event_handle_o) {
        corto_error("lang_load: failed to declare '::corto::lang::event::ref()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::event::handled */
    corto_lang_event_handled_o = corto_declareChild(corto_lang_event_o, "handled", corto_lang_member_o);
    if (!corto_lang_event_handled_o) {
        corto_error("lang_load: failed to declare '::corto::lang::event::handled' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::event::kind */
    corto_lang_event_kind_o = corto_declareChild(corto_lang_event_o, "kind", corto_lang_member_o);
    if (!corto_lang_event_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::event::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::event::uniqueKind() */
    corto_lang_event_uniqueKind_o = corto_declareChild(corto_lang_event_o, "uniqueKind()", corto_lang_function_o);
    if (!corto_lang_event_uniqueKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::event::uniqueKind()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask */
    corto_lang_eventMask_o = corto_declareChild(corto_lang_o, "eventMask", corto_lang_bitmask_o);
    if (!corto_lang_eventMask_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_DECLARE */
    corto_lang_eventMask_ON_DECLARE_o = corto_declareChild(corto_lang_eventMask_o, "ON_DECLARE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_DECLARE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_DECLARE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_DEFINE */
    corto_lang_eventMask_ON_DEFINE_o = corto_declareChild(corto_lang_eventMask_o, "ON_DEFINE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_DEFINE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_DEFINE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_DELETE */
    corto_lang_eventMask_ON_DELETE_o = corto_declareChild(corto_lang_eventMask_o, "ON_DELETE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_DELETE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_DELETE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_INVALIDATE */
    corto_lang_eventMask_ON_INVALIDATE_o = corto_declareChild(corto_lang_eventMask_o, "ON_INVALIDATE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_INVALIDATE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_INVALIDATE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_METAVALUE */
    corto_lang_eventMask_ON_METAVALUE_o = corto_declareChild(corto_lang_eventMask_o, "ON_METAVALUE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_METAVALUE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_METAVALUE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_SCOPE */
    corto_lang_eventMask_ON_SCOPE_o = corto_declareChild(corto_lang_eventMask_o, "ON_SCOPE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_SCOPE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_SCOPE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_SELF */
    corto_lang_eventMask_ON_SELF_o = corto_declareChild(corto_lang_eventMask_o, "ON_SELF", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_SELF_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_SELF' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_TREE */
    corto_lang_eventMask_ON_TREE_o = corto_declareChild(corto_lang_eventMask_o, "ON_TREE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_TREE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_TREE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_UPDATE */
    corto_lang_eventMask_ON_UPDATE_o = corto_declareChild(corto_lang_eventMask_o, "ON_UPDATE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_UPDATE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_UPDATE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::eventMask::ON_VALUE */
    corto_lang_eventMask_ON_VALUE_o = corto_declareChild(corto_lang_eventMask_o, "ON_VALUE", corto_lang_constant_o);
    if (!corto_lang_eventMask_ON_VALUE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::eventMask::ON_VALUE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float */
    corto_lang_float_o = corto_declareChild(corto_lang_o, "float", corto_lang_class_o);
    if (!corto_lang_float_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float::init() */
    corto_lang_float_init_o = corto_declareChild(corto_lang_float_o, "init()", corto_lang_method_o);
    if (!corto_lang_float_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float::max */
    corto_lang_float_max_o = corto_declareChild(corto_lang_float_o, "max", corto_lang_member_o);
    if (!corto_lang_float_max_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float::max' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float::min */
    corto_lang_float_min_o = corto_declareChild(corto_lang_float_o, "min", corto_lang_member_o);
    if (!corto_lang_float_min_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float::min' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float32 */
    corto_lang_float32_o = corto_declareChild(corto_lang_o, "float32", corto_lang_float_o);
    if (!corto_lang_float32_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float32' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::float64 */
    corto_lang_float64_o = corto_declareChild(corto_lang_o, "float64", corto_lang_float_o);
    if (!corto_lang_float64_o) {
        corto_error("lang_load: failed to declare '::corto::lang::float64' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function */
    corto_lang_function_o = corto_declareChild(corto_lang_o, "function", corto_lang_procedure_o);
    if (!corto_lang_function_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::bind() */
    corto_lang_function_bind_o = corto_declareChild(corto_lang_function_o, "bind()", corto_lang_method_o);
    if (!corto_lang_function_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::bind()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::impl */
    corto_lang_function_impl_o = corto_declareChild(corto_lang_function_o, "impl", corto_lang_member_o);
    if (!corto_lang_function_impl_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::impl' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::implData */
    corto_lang_function_implData_o = corto_declareChild(corto_lang_function_o, "implData", corto_lang_member_o);
    if (!corto_lang_function_implData_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::implData' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::init() */
    corto_lang_function_init_o = corto_declareChild(corto_lang_function_o, "init()", corto_lang_method_o);
    if (!corto_lang_function_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::kind */
    corto_lang_function_kind_o = corto_declareChild(corto_lang_function_o, "kind", corto_lang_member_o);
    if (!corto_lang_function_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::nextParameterId */
    corto_lang_function_nextParameterId_o = corto_declareChild(corto_lang_function_o, "nextParameterId", corto_lang_member_o);
    if (!corto_lang_function_nextParameterId_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::nextParameterId' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::overloaded */
    corto_lang_function_overloaded_o = corto_declareChild(corto_lang_function_o, "overloaded", corto_lang_member_o);
    if (!corto_lang_function_overloaded_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::overloaded' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::parameters */
    corto_lang_function_parameters_o = corto_declareChild(corto_lang_function_o, "parameters", corto_lang_member_o);
    if (!corto_lang_function_parameters_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::parameters' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::resource */
    corto_lang_function_resource_o = corto_declareChild(corto_lang_function_o, "resource", corto_lang_member_o);
    if (!corto_lang_function_resource_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::resource' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::returnsReference */
    corto_lang_function_returnsReference_o = corto_declareChild(corto_lang_function_o, "returnsReference", corto_lang_member_o);
    if (!corto_lang_function_returnsReference_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::returnsReference' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::returnType */
    corto_lang_function_returnType_o = corto_declareChild(corto_lang_function_o, "returnType", corto_lang_member_o);
    if (!corto_lang_function_returnType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::returnType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::size */
    corto_lang_function_size_o = corto_declareChild(corto_lang_function_o, "size", corto_lang_member_o);
    if (!corto_lang_function_size_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::size' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::stringToParameterSeq(string name,object scope) */
    corto_lang_function_stringToParameterSeq_o = corto_declareChild(corto_lang_function_o, "stringToParameterSeq(string name,object scope)", corto_lang_function_o);
    if (!corto_lang_function_stringToParameterSeq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::stringToParameterSeq(string name,object scope)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::function::unbind(function object) */
    corto_lang_function_unbind_o = corto_declareChild(corto_lang_function_o, "unbind(function object)", corto_lang_function_o);
    if (!corto_lang_function_unbind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::function::unbind(function object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::initAction */
    corto_lang_initAction_o = corto_declareChild(corto_lang_o, "initAction", corto_lang_delegate_o);
    if (!corto_lang_initAction_o) {
        corto_error("lang_load: failed to declare '::corto::lang::initAction' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int */
    corto_lang_int_o = corto_declareChild(corto_lang_o, "int", corto_lang_class_o);
    if (!corto_lang_int_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int::init() */
    corto_lang_int_init_o = corto_declareChild(corto_lang_int_o, "init()", corto_lang_method_o);
    if (!corto_lang_int_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int::max */
    corto_lang_int_max_o = corto_declareChild(corto_lang_int_o, "max", corto_lang_member_o);
    if (!corto_lang_int_max_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int::max' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int::min */
    corto_lang_int_min_o = corto_declareChild(corto_lang_int_o, "min", corto_lang_member_o);
    if (!corto_lang_int_min_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int::min' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int16 */
    corto_lang_int16_o = corto_declareChild(corto_lang_o, "int16", corto_lang_int_o);
    if (!corto_lang_int16_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int16' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int32 */
    corto_lang_int32_o = corto_declareChild(corto_lang_o, "int32", corto_lang_int_o);
    if (!corto_lang_int32_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int32' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int64 */
    corto_lang_int64_o = corto_declareChild(corto_lang_o, "int64", corto_lang_int_o);
    if (!corto_lang_int64_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int64' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::int8 */
    corto_lang_int8_o = corto_declareChild(corto_lang_o, "int8", corto_lang_int_o);
    if (!corto_lang_int8_o) {
        corto_error("lang_load: failed to declare '::corto::lang::int8' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface */
    corto_lang_interface_o = corto_declareChild(corto_lang_o, "interface", corto_lang_class_o);
    if (!corto_lang_interface_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::base */
    corto_lang_interface_base_o = corto_declareChild(corto_lang_interface_o, "base", corto_lang_member_o);
    if (!corto_lang_interface_base_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::base' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::baseof(interface type) */
    corto_lang_interface_baseof_o = corto_declareChild(corto_lang_interface_o, "baseof(interface type)", corto_lang_method_o);
    if (!corto_lang_interface_baseof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::baseof(interface type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::bindMethod(method method) */
    corto_lang_interface_bindMethod_o = corto_declareChild(corto_lang_interface_o, "bindMethod(method method)", corto_lang_method_o);
    if (!corto_lang_interface_bindMethod_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::bindMethod(method method)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::compatible(type type) */
    corto_lang_interface_compatible_o = corto_declareChild(corto_lang_interface_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_interface_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::construct() */
    corto_lang_interface_construct_o = corto_declareChild(corto_lang_interface_o, "construct()", corto_lang_method_o);
    if (!corto_lang_interface_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::defaultProcedureType */
    corto_lang_interface_defaultProcedureType_o = corto_declareChild(corto_lang_interface_o, "defaultProcedureType", corto_lang_alias_o);
    if (!corto_lang_interface_defaultProcedureType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::defaultProcedureType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::defaultType */
    corto_lang_interface_defaultType_o = corto_declareChild(corto_lang_interface_o, "defaultType", corto_lang_alias_o);
    if (!corto_lang_interface_defaultType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::defaultType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::destruct() */
    corto_lang_interface_destruct_o = corto_declareChild(corto_lang_interface_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_interface_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::init() */
    corto_lang_interface_init_o = corto_declareChild(corto_lang_interface_o, "init()", corto_lang_method_o);
    if (!corto_lang_interface_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::kind */
    corto_lang_interface_kind_o = corto_declareChild(corto_lang_interface_o, "kind", corto_lang_member_o);
    if (!corto_lang_interface_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::members */
    corto_lang_interface_members_o = corto_declareChild(corto_lang_interface_o, "members", corto_lang_member_o);
    if (!corto_lang_interface_members_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::members' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::methods */
    corto_lang_interface_methods_o = corto_declareChild(corto_lang_interface_o, "methods", corto_lang_member_o);
    if (!corto_lang_interface_methods_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::methods' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::nextMemberId */
    corto_lang_interface_nextMemberId_o = corto_declareChild(corto_lang_interface_o, "nextMemberId", corto_lang_member_o);
    if (!corto_lang_interface_nextMemberId_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::nextMemberId' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::parentState */
    corto_lang_interface_parentState_o = corto_declareChild(corto_lang_interface_o, "parentState", corto_lang_alias_o);
    if (!corto_lang_interface_parentState_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::parentState' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::parentType */
    corto_lang_interface_parentType_o = corto_declareChild(corto_lang_interface_o, "parentType", corto_lang_alias_o);
    if (!corto_lang_interface_parentType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::parentType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::resolveMember(string name) */
    corto_lang_interface_resolveMember_o = corto_declareChild(corto_lang_interface_o, "resolveMember(string name)", corto_lang_method_o);
    if (!corto_lang_interface_resolveMember_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::resolveMember(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::resolveMethod(string name) */
    corto_lang_interface_resolveMethod_o = corto_declareChild(corto_lang_interface_o, "resolveMethod(string name)", corto_lang_method_o);
    if (!corto_lang_interface_resolveMethod_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::resolveMethod(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::resolveMethodById(uint32 id) */
    corto_lang_interface_resolveMethodById_o = corto_declareChild(corto_lang_interface_o, "resolveMethodById(uint32 id)", corto_lang_method_o);
    if (!corto_lang_interface_resolveMethodById_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::resolveMethodById(uint32 id)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interface::resolveMethodId(string name) */
    corto_lang_interface_resolveMethodId_o = corto_declareChild(corto_lang_interface_o, "resolveMethodId(string name)", corto_lang_method_o);
    if (!corto_lang_interface_resolveMethodId_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interface::resolveMethodId(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interfaceseq */
    corto_lang_interfaceseq_o = corto_declareChild(corto_lang_o, "interfaceseq", corto_lang_sequence_o);
    if (!corto_lang_interfaceseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interfaceseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interfaceVector */
    corto_lang_interfaceVector_o = corto_declareChild(corto_lang_o, "interfaceVector", corto_lang_struct_o);
    if (!corto_lang_interfaceVector_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interfaceVector' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interfaceVector::interface */
    corto_lang_interfaceVector_interface_o = corto_declareChild(corto_lang_interfaceVector_o, "interface", corto_lang_member_o);
    if (!corto_lang_interfaceVector_interface_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interfaceVector::interface' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interfaceVector::vector */
    corto_lang_interfaceVector_vector_o = corto_declareChild(corto_lang_interfaceVector_o, "vector", corto_lang_member_o);
    if (!corto_lang_interfaceVector_vector_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interfaceVector::vector' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::interfaceVectorseq */
    corto_lang_interfaceVectorseq_o = corto_declareChild(corto_lang_o, "interfaceVectorseq", corto_lang_sequence_o);
    if (!corto_lang_interfaceVectorseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::interfaceVectorseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeAction */
    corto_lang_invokeAction_o = corto_declareChild(corto_lang_o, "invokeAction", corto_lang_delegate_o);
    if (!corto_lang_invokeAction_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeAction' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent */
    corto_lang_invokeEvent_o = corto_declareChild(corto_lang_o, "invokeEvent", corto_lang_class_o);
    if (!corto_lang_invokeEvent_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent::args */
    corto_lang_invokeEvent_args_o = corto_declareChild(corto_lang_invokeEvent_o, "args", corto_lang_member_o);
    if (!corto_lang_invokeEvent_args_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent::args' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent::function */
    corto_lang_invokeEvent_function_o = corto_declareChild(corto_lang_invokeEvent_o, "function", corto_lang_member_o);
    if (!corto_lang_invokeEvent_function_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent::function' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent::ref() */
    corto_lang_invokeEvent_handle_o = corto_declareChild(corto_lang_invokeEvent_o, "ref()", corto_lang_method_o);
    if (!corto_lang_invokeEvent_handle_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent::ref()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent::instance */
    corto_lang_invokeEvent_instance_o = corto_declareChild(corto_lang_invokeEvent_o, "instance", corto_lang_member_o);
    if (!corto_lang_invokeEvent_instance_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent::instance' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::invokeEvent::mount */
    corto_lang_invokeEvent_mount_o = corto_declareChild(corto_lang_invokeEvent_o, "mount", corto_lang_member_o);
    if (!corto_lang_invokeEvent_mount_o) {
        corto_error("lang_load: failed to declare '::corto::lang::invokeEvent::mount' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::iterator */
    corto_lang_iterator_o = corto_declareChild(corto_lang_o, "iterator", corto_lang_class_o);
    if (!corto_lang_iterator_o) {
        corto_error("lang_load: failed to declare '::corto::lang::iterator' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::iterator::castable(type type) */
    corto_lang_iterator_castable_o = corto_declareChild(corto_lang_iterator_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_iterator_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::iterator::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::iterator::compatible(type type) */
    corto_lang_iterator_compatible_o = corto_declareChild(corto_lang_iterator_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_iterator_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::iterator::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::iterator::elementType */
    corto_lang_iterator_elementType_o = corto_declareChild(corto_lang_iterator_o, "elementType", corto_lang_member_o);
    if (!corto_lang_iterator_elementType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::iterator::elementType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::iterator::init() */
    corto_lang_iterator_init_o = corto_declareChild(corto_lang_iterator_o, "init()", corto_lang_method_o);
    if (!corto_lang_iterator_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::iterator::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list */
    corto_lang_list_o = corto_declareChild(corto_lang_o, "list", corto_lang_class_o);
    if (!corto_lang_list_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::append() */
    corto_lang_list_append__o = corto_declareChild(corto_lang_list_o, "append()", corto_lang_metaprocedure_o);
    if (!corto_lang_list_append__o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::append()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::append(any element) */
    corto_lang_list_append_any_o = corto_declareChild(corto_lang_list_o, "append(any element)", corto_lang_metaprocedure_o);
    if (!corto_lang_list_append_any_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::append(any element)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::clear() */
    corto_lang_list_clear_o = corto_declareChild(corto_lang_list_o, "clear()", corto_lang_metaprocedure_o);
    if (!corto_lang_list_clear_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::clear()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::construct() */
    corto_lang_list_construct_o = corto_declareChild(corto_lang_list_o, "construct()", corto_lang_method_o);
    if (!corto_lang_list_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::init() */
    corto_lang_list_init_o = corto_declareChild(corto_lang_list_o, "init()", corto_lang_method_o);
    if (!corto_lang_list_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::insert() */
    corto_lang_list_insert__o = corto_declareChild(corto_lang_list_o, "insert()", corto_lang_metaprocedure_o);
    if (!corto_lang_list_insert__o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::insert()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::insert(any element) */
    corto_lang_list_insert_any_o = corto_declareChild(corto_lang_list_o, "insert(any element)", corto_lang_metaprocedure_o);
    if (!corto_lang_list_insert_any_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::insert(any element)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::list::reverse() */
    corto_lang_list_reverse_o = corto_declareChild(corto_lang_list_o, "reverse()", corto_lang_metaprocedure_o);
    if (!corto_lang_list_reverse_o) {
        corto_error("lang_load: failed to declare '::corto::lang::list::reverse()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map */
    corto_lang_map_o = corto_declareChild(corto_lang_o, "map", corto_lang_class_o);
    if (!corto_lang_map_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map::construct() */
    corto_lang_map_construct_o = corto_declareChild(corto_lang_map_o, "construct()", corto_lang_method_o);
    if (!corto_lang_map_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map::elementType */
    corto_lang_map_elementType_o = corto_declareChild(corto_lang_map_o, "elementType", corto_lang_member_o);
    if (!corto_lang_map_elementType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map::elementType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map::init() */
    corto_lang_map_init_o = corto_declareChild(corto_lang_map_o, "init()", corto_lang_method_o);
    if (!corto_lang_map_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map::keyType */
    corto_lang_map_keyType_o = corto_declareChild(corto_lang_map_o, "keyType", corto_lang_member_o);
    if (!corto_lang_map_keyType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map::keyType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::map::max */
    corto_lang_map_max_o = corto_declareChild(corto_lang_map_o, "max", corto_lang_member_o);
    if (!corto_lang_map_max_o) {
        corto_error("lang_load: failed to declare '::corto::lang::map::max' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member */
    corto_lang_member_o = corto_declareChild(corto_lang_o, "member", corto_lang_class_o);
    if (!corto_lang_member_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::construct() */
    corto_lang_member_construct_o = corto_declareChild(corto_lang_member_o, "construct()", corto_lang_method_o);
    if (!corto_lang_member_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::id */
    corto_lang_member_id_o = corto_declareChild(corto_lang_member_o, "id", corto_lang_member_o);
    if (!corto_lang_member_id_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::id' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::init() */
    corto_lang_member_init_o = corto_declareChild(corto_lang_member_o, "init()", corto_lang_method_o);
    if (!corto_lang_member_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::modifiers */
    corto_lang_member_modifiers_o = corto_declareChild(corto_lang_member_o, "modifiers", corto_lang_member_o);
    if (!corto_lang_member_modifiers_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::modifiers' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::offset */
    corto_lang_member_offset_o = corto_declareChild(corto_lang_member_o, "offset", corto_lang_member_o);
    if (!corto_lang_member_offset_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::offset' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::state */
    corto_lang_member_state_o = corto_declareChild(corto_lang_member_o, "state", corto_lang_member_o);
    if (!corto_lang_member_state_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::state' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::type */
    corto_lang_member_type_o = corto_declareChild(corto_lang_member_o, "type", corto_lang_member_o);
    if (!corto_lang_member_type_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::type' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::member::weak */
    corto_lang_member_weak_o = corto_declareChild(corto_lang_member_o, "weak", corto_lang_member_o);
    if (!corto_lang_member_weak_o) {
        corto_error("lang_load: failed to declare '::corto::lang::member::weak' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::memberseq */
    corto_lang_memberseq_o = corto_declareChild(corto_lang_o, "memberseq", corto_lang_sequence_o);
    if (!corto_lang_memberseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::memberseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::metaprocedure */
    corto_lang_metaprocedure_o = corto_declareChild(corto_lang_o, "metaprocedure", corto_lang_procedure_o);
    if (!corto_lang_metaprocedure_o) {
        corto_error("lang_load: failed to declare '::corto::lang::metaprocedure' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::metaprocedure::bind() */
    corto_lang_metaprocedure_bind_o = corto_declareChild(corto_lang_metaprocedure_o, "bind()", corto_lang_method_o);
    if (!corto_lang_metaprocedure_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::metaprocedure::bind()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::metaprocedure::referenceOnly */
    corto_lang_metaprocedure_referenceOnly_o = corto_declareChild(corto_lang_metaprocedure_o, "referenceOnly", corto_lang_member_o);
    if (!corto_lang_metaprocedure_referenceOnly_o) {
        corto_error("lang_load: failed to declare '::corto::lang::metaprocedure::referenceOnly' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::method */
    corto_lang_method_o = corto_declareChild(corto_lang_o, "method", corto_lang_procedure_o);
    if (!corto_lang_method_o) {
        corto_error("lang_load: failed to declare '::corto::lang::method' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::method::bind() */
    corto_lang_method_bind_o = corto_declareChild(corto_lang_method_o, "bind()", corto_lang_method_o);
    if (!corto_lang_method_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::method::bind()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::method::init() */
    corto_lang_method_init_o = corto_declareChild(corto_lang_method_o, "init()", corto_lang_method_o);
    if (!corto_lang_method_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::method::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::method::virtual */
    corto_lang_method_virtual_o = corto_declareChild(corto_lang_method_o, "virtual", corto_lang_member_o);
    if (!corto_lang_method_virtual_o) {
        corto_error("lang_load: failed to declare '::corto::lang::method::virtual' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier */
    corto_lang_modifier_o = corto_declareChild(corto_lang_o, "modifier", corto_lang_bitmask_o);
    if (!corto_lang_modifier_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::CONST */
    corto_lang_modifier_CONST_o = corto_declareChild(corto_lang_modifier_o, "CONST", corto_lang_constant_o);
    if (!corto_lang_modifier_CONST_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::CONST' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::GLOBAL */
    corto_lang_modifier_GLOBAL_o = corto_declareChild(corto_lang_modifier_o, "GLOBAL", corto_lang_constant_o);
    if (!corto_lang_modifier_GLOBAL_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::GLOBAL' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::HIDDEN */
    corto_lang_modifier_HIDDEN_o = corto_declareChild(corto_lang_modifier_o, "HIDDEN", corto_lang_constant_o);
    if (!corto_lang_modifier_HIDDEN_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::HIDDEN' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::LOCAL */
    corto_lang_modifier_LOCAL_o = corto_declareChild(corto_lang_modifier_o, "LOCAL", corto_lang_constant_o);
    if (!corto_lang_modifier_LOCAL_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::LOCAL' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::PRIVATE */
    corto_lang_modifier_PRIVATE_o = corto_declareChild(corto_lang_modifier_o, "PRIVATE", corto_lang_constant_o);
    if (!corto_lang_modifier_PRIVATE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::PRIVATE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::modifier::READONLY */
    corto_lang_modifier_READONLY_o = corto_declareChild(corto_lang_modifier_o, "READONLY", corto_lang_constant_o);
    if (!corto_lang_modifier_READONLY_o) {
        corto_error("lang_load: failed to declare '::corto::lang::modifier::READONLY' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::notifyAction */
    corto_lang_notifyAction_o = corto_declareChild(corto_lang_o, "notifyAction", corto_lang_delegate_o);
    if (!corto_lang_notifyAction_o) {
        corto_error("lang_load: failed to declare '::corto::lang::notifyAction' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::object */
    corto_lang_object_o = corto_declareChild(corto_lang_o, "object", corto_lang_type_o);
    if (!corto_lang_object_o) {
        corto_error("lang_load: failed to declare '::corto::lang::object' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::objectseq */
    corto_lang_objectseq_o = corto_declareChild(corto_lang_o, "objectseq", corto_lang_sequence_o);
    if (!corto_lang_objectseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::objectseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent */
    corto_lang_observableEvent_o = corto_declareChild(corto_lang_o, "observableEvent", corto_lang_class_o);
    if (!corto_lang_observableEvent_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent::ref() */
    corto_lang_observableEvent_handle_o = corto_declareChild(corto_lang_observableEvent_o, "ref()", corto_lang_method_o);
    if (!corto_lang_observableEvent_handle_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent::ref()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent::me */
    corto_lang_observableEvent_me_o = corto_declareChild(corto_lang_observableEvent_o, "me", corto_lang_member_o);
    if (!corto_lang_observableEvent_me_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent::me' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent::observable */
    corto_lang_observableEvent_observable_o = corto_declareChild(corto_lang_observableEvent_o, "observable", corto_lang_member_o);
    if (!corto_lang_observableEvent_observable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent::observable' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent::observer */
    corto_lang_observableEvent_observer_o = corto_declareChild(corto_lang_observableEvent_o, "observer", corto_lang_member_o);
    if (!corto_lang_observableEvent_observer_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent::observer' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observableEvent::source */
    corto_lang_observableEvent_source_o = corto_declareChild(corto_lang_observableEvent_o, "source", corto_lang_member_o);
    if (!corto_lang_observableEvent_source_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observableEvent::source' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer */
    corto_lang_observer_o = corto_declareChild(corto_lang_o, "observer", corto_lang_procedure_o);
    if (!corto_lang_observer_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::bind() */
    corto_lang_observer_bind_o = corto_declareChild(corto_lang_observer_o, "bind()", corto_lang_method_o);
    if (!corto_lang_observer_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::bind()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::delayedBinder */
    corto_lang_observer_delayedBinder_o = corto_declareChild(corto_lang_observer_o, "delayedBinder", corto_lang_member_o);
    if (!corto_lang_observer_delayedBinder_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::delayedBinder' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::dispatcher */
    corto_lang_observer_dispatcher_o = corto_declareChild(corto_lang_observer_o, "dispatcher", corto_lang_member_o);
    if (!corto_lang_observer_dispatcher_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::dispatcher' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::init() */
    corto_lang_observer_init_o = corto_declareChild(corto_lang_observer_o, "init()", corto_lang_method_o);
    if (!corto_lang_observer_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::listen(object observable,object me) */
    corto_lang_observer_listen_o = corto_declareChild(corto_lang_observer_o, "listen(object observable,object me)", corto_lang_method_o);
    if (!corto_lang_observer_listen_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::listen(object observable,object me)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::mask */
    corto_lang_observer_mask_o = corto_declareChild(corto_lang_observer_o, "mask", corto_lang_member_o);
    if (!corto_lang_observer_mask_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::mask' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::me */
    corto_lang_observer_me_o = corto_declareChild(corto_lang_observer_o, "me", corto_lang_member_o);
    if (!corto_lang_observer_me_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::me' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::observable */
    corto_lang_observer_observable_o = corto_declareChild(corto_lang_observer_o, "observable", corto_lang_member_o);
    if (!corto_lang_observer_observable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::observable' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::observing */
    corto_lang_observer_observing_o = corto_declareChild(corto_lang_observer_o, "observing", corto_lang_member_o);
    if (!corto_lang_observer_observing_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::observing' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::setDispatcher(dispatcher dispatcher) */
    corto_lang_observer_setDispatcher_o = corto_declareChild(corto_lang_observer_o, "setDispatcher(dispatcher dispatcher)", corto_lang_method_o);
    if (!corto_lang_observer_setDispatcher_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::setDispatcher(dispatcher dispatcher)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::silence(object me) */
    corto_lang_observer_silence_o = corto_declareChild(corto_lang_observer_o, "silence(object me)", corto_lang_method_o);
    if (!corto_lang_observer_silence_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::silence(object me)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::template */
    corto_lang_observer_template_o = corto_declareChild(corto_lang_observer_o, "template", corto_lang_member_o);
    if (!corto_lang_observer_template_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::template' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observer::unbind(observer object) */
    corto_lang_observer_unbind_o = corto_declareChild(corto_lang_observer_o, "unbind(observer object)", corto_lang_function_o);
    if (!corto_lang_observer_unbind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observer::unbind(observer object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::observerseq */
    corto_lang_observerseq_o = corto_declareChild(corto_lang_o, "observerseq", corto_lang_sequence_o);
    if (!corto_lang_observerseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::observerseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::octet */
    corto_lang_octet_o = corto_declareChild(corto_lang_o, "octet", corto_lang_binary_o);
    if (!corto_lang_octet_o) {
        corto_error("lang_load: failed to declare '::corto::lang::octet' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::octetseq */
    corto_lang_octetseq_o = corto_declareChild(corto_lang_o, "octetseq", corto_lang_sequence_o);
    if (!corto_lang_octetseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::octetseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind */
    corto_lang_operatorKind_o = corto_declareChild(corto_lang_o, "operatorKind", corto_lang_enum_o);
    if (!corto_lang_operatorKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ADD */
    corto_lang_operatorKind_ADD_o = corto_declareChild(corto_lang_operatorKind_o, "ADD", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ADD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ADD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::AND */
    corto_lang_operatorKind_AND_o = corto_declareChild(corto_lang_operatorKind_o, "AND", corto_lang_constant_o);
    if (!corto_lang_operatorKind_AND_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::AND' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN */
    corto_lang_operatorKind_ASSIGN_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_ADD */
    corto_lang_operatorKind_ASSIGN_ADD_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_ADD", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_ADD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_ADD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_AND */
    corto_lang_operatorKind_ASSIGN_AND_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_AND", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_AND_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_AND' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_DIV */
    corto_lang_operatorKind_ASSIGN_DIV_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_DIV", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_DIV_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_DIV' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_MOD */
    corto_lang_operatorKind_ASSIGN_MOD_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_MOD", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_MOD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_MOD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_MUL */
    corto_lang_operatorKind_ASSIGN_MUL_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_MUL", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_MUL_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_MUL' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_OR */
    corto_lang_operatorKind_ASSIGN_OR_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_OR", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_OR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_OR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_SUB */
    corto_lang_operatorKind_ASSIGN_SUB_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_SUB", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_SUB_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_SUB' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_UPDATE */
    corto_lang_operatorKind_ASSIGN_UPDATE_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_UPDATE", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_UPDATE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_UPDATE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::ASSIGN_XOR */
    corto_lang_operatorKind_ASSIGN_XOR_o = corto_declareChild(corto_lang_operatorKind_o, "ASSIGN_XOR", corto_lang_constant_o);
    if (!corto_lang_operatorKind_ASSIGN_XOR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::ASSIGN_XOR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_AND */
    corto_lang_operatorKind_COND_AND_o = corto_declareChild(corto_lang_operatorKind_o, "COND_AND", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_AND_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_AND' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_EQ */
    corto_lang_operatorKind_COND_EQ_o = corto_declareChild(corto_lang_operatorKind_o, "COND_EQ", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_EQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_EQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_GT */
    corto_lang_operatorKind_COND_GT_o = corto_declareChild(corto_lang_operatorKind_o, "COND_GT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_GT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_GT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_GTEQ */
    corto_lang_operatorKind_COND_GTEQ_o = corto_declareChild(corto_lang_operatorKind_o, "COND_GTEQ", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_GTEQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_GTEQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_LT */
    corto_lang_operatorKind_COND_LT_o = corto_declareChild(corto_lang_operatorKind_o, "COND_LT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_LT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_LT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_LTEQ */
    corto_lang_operatorKind_COND_LTEQ_o = corto_declareChild(corto_lang_operatorKind_o, "COND_LTEQ", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_LTEQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_LTEQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_NEQ */
    corto_lang_operatorKind_COND_NEQ_o = corto_declareChild(corto_lang_operatorKind_o, "COND_NEQ", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_NEQ_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_NEQ' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_NOT */
    corto_lang_operatorKind_COND_NOT_o = corto_declareChild(corto_lang_operatorKind_o, "COND_NOT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_NOT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_NOT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::COND_OR */
    corto_lang_operatorKind_COND_OR_o = corto_declareChild(corto_lang_operatorKind_o, "COND_OR", corto_lang_constant_o);
    if (!corto_lang_operatorKind_COND_OR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::COND_OR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::DEC */
    corto_lang_operatorKind_DEC_o = corto_declareChild(corto_lang_operatorKind_o, "DEC", corto_lang_constant_o);
    if (!corto_lang_operatorKind_DEC_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::DEC' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::DIV */
    corto_lang_operatorKind_DIV_o = corto_declareChild(corto_lang_operatorKind_o, "DIV", corto_lang_constant_o);
    if (!corto_lang_operatorKind_DIV_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::DIV' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::INC */
    corto_lang_operatorKind_INC_o = corto_declareChild(corto_lang_operatorKind_o, "INC", corto_lang_constant_o);
    if (!corto_lang_operatorKind_INC_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::INC' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::MOD */
    corto_lang_operatorKind_MOD_o = corto_declareChild(corto_lang_operatorKind_o, "MOD", corto_lang_constant_o);
    if (!corto_lang_operatorKind_MOD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::MOD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::MUL */
    corto_lang_operatorKind_MUL_o = corto_declareChild(corto_lang_operatorKind_o, "MUL", corto_lang_constant_o);
    if (!corto_lang_operatorKind_MUL_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::MUL' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::NOT */
    corto_lang_operatorKind_NOT_o = corto_declareChild(corto_lang_operatorKind_o, "NOT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_NOT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::NOT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::OR */
    corto_lang_operatorKind_OR_o = corto_declareChild(corto_lang_operatorKind_o, "OR", corto_lang_constant_o);
    if (!corto_lang_operatorKind_OR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::OR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::REF */
    corto_lang_operatorKind_REF_o = corto_declareChild(corto_lang_operatorKind_o, "REF", corto_lang_constant_o);
    if (!corto_lang_operatorKind_REF_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::REF' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::SHIFT_LEFT */
    corto_lang_operatorKind_SHIFT_LEFT_o = corto_declareChild(corto_lang_operatorKind_o, "SHIFT_LEFT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_SHIFT_LEFT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::SHIFT_LEFT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::SHIFT_RIGHT */
    corto_lang_operatorKind_SHIFT_RIGHT_o = corto_declareChild(corto_lang_operatorKind_o, "SHIFT_RIGHT", corto_lang_constant_o);
    if (!corto_lang_operatorKind_SHIFT_RIGHT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::SHIFT_RIGHT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::SUB */
    corto_lang_operatorKind_SUB_o = corto_declareChild(corto_lang_operatorKind_o, "SUB", corto_lang_constant_o);
    if (!corto_lang_operatorKind_SUB_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::SUB' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::operatorKind::XOR */
    corto_lang_operatorKind_XOR_o = corto_declareChild(corto_lang_operatorKind_o, "XOR", corto_lang_constant_o);
    if (!corto_lang_operatorKind_XOR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::operatorKind::XOR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::package */
    corto_lang_package_o = corto_declareChild(corto_lang_o, "package", corto_lang_class_o);
    if (!corto_lang_package_o) {
        corto_error("lang_load: failed to declare '::corto::lang::package' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::package::url */
    corto_lang_package_url_o = corto_declareChild(corto_lang_package_o, "url", corto_lang_member_o);
    if (!corto_lang_package_url_o) {
        corto_error("lang_load: failed to declare '::corto::lang::package::url' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::parameter */
    corto_lang_parameter_o = corto_declareChild(corto_lang_o, "parameter", corto_lang_struct_o);
    if (!corto_lang_parameter_o) {
        corto_error("lang_load: failed to declare '::corto::lang::parameter' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::parameter::name */
    corto_lang_parameter_name_o = corto_declareChild(corto_lang_parameter_o, "name", corto_lang_member_o);
    if (!corto_lang_parameter_name_o) {
        corto_error("lang_load: failed to declare '::corto::lang::parameter::name' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::parameter::passByReference */
    corto_lang_parameter_passByReference_o = corto_declareChild(corto_lang_parameter_o, "passByReference", corto_lang_member_o);
    if (!corto_lang_parameter_passByReference_o) {
        corto_error("lang_load: failed to declare '::corto::lang::parameter::passByReference' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::parameter::type */
    corto_lang_parameter_type_o = corto_declareChild(corto_lang_parameter_o, "type", corto_lang_member_o);
    if (!corto_lang_parameter_type_o) {
        corto_error("lang_load: failed to declare '::corto::lang::parameter::type' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::parameterseq */
    corto_lang_parameterseq_o = corto_declareChild(corto_lang_o, "parameterseq", corto_lang_sequence_o);
    if (!corto_lang_parameterseq_o) {
        corto_error("lang_load: failed to declare '::corto::lang::parameterseq' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive */
    corto_lang_primitive_o = corto_declareChild(corto_lang_o, "primitive", corto_lang_class_o);
    if (!corto_lang_primitive_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::castable(type type) */
    corto_lang_primitive_castable_o = corto_declareChild(corto_lang_primitive_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_primitive_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::compatible(type type) */
    corto_lang_primitive_compatible_o = corto_declareChild(corto_lang_primitive_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_primitive_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::construct() */
    corto_lang_primitive_construct_o = corto_declareChild(corto_lang_primitive_o, "construct()", corto_lang_method_o);
    if (!corto_lang_primitive_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::convertId */
    corto_lang_primitive_convertId_o = corto_declareChild(corto_lang_primitive_o, "convertId", corto_lang_member_o);
    if (!corto_lang_primitive_convertId_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::convertId' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::init() */
    corto_lang_primitive_init_o = corto_declareChild(corto_lang_primitive_o, "init()", corto_lang_method_o);
    if (!corto_lang_primitive_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::isInteger() */
    corto_lang_primitive_isInteger_o = corto_declareChild(corto_lang_primitive_o, "isInteger()", corto_lang_method_o);
    if (!corto_lang_primitive_isInteger_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::isInteger()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::isNumber() */
    corto_lang_primitive_isNumber_o = corto_declareChild(corto_lang_primitive_o, "isNumber()", corto_lang_method_o);
    if (!corto_lang_primitive_isNumber_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::isNumber()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::kind */
    corto_lang_primitive_kind_o = corto_declareChild(corto_lang_primitive_o, "kind", corto_lang_member_o);
    if (!corto_lang_primitive_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitive::width */
    corto_lang_primitive_width_o = corto_declareChild(corto_lang_primitive_o, "width", corto_lang_member_o);
    if (!corto_lang_primitive_width_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitive::width' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind */
    corto_lang_primitiveKind_o = corto_declareChild(corto_lang_o, "primitiveKind", corto_lang_enum_o);
    if (!corto_lang_primitiveKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::BINARY */
    corto_lang_primitiveKind_BINARY_o = corto_declareChild(corto_lang_primitiveKind_o, "BINARY", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_BINARY_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::BINARY' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::BITMASK */
    corto_lang_primitiveKind_BITMASK_o = corto_declareChild(corto_lang_primitiveKind_o, "BITMASK", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_BITMASK_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::BITMASK' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::BOOLEAN */
    corto_lang_primitiveKind_BOOLEAN_o = corto_declareChild(corto_lang_primitiveKind_o, "BOOLEAN", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_BOOLEAN_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::BOOLEAN' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::CHARACTER */
    corto_lang_primitiveKind_CHARACTER_o = corto_declareChild(corto_lang_primitiveKind_o, "CHARACTER", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_CHARACTER_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::CHARACTER' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::ENUM */
    corto_lang_primitiveKind_ENUM_o = corto_declareChild(corto_lang_primitiveKind_o, "ENUM", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_ENUM_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::ENUM' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::FLOAT */
    corto_lang_primitiveKind_FLOAT_o = corto_declareChild(corto_lang_primitiveKind_o, "FLOAT", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_FLOAT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::FLOAT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::INTEGER */
    corto_lang_primitiveKind_INTEGER_o = corto_declareChild(corto_lang_primitiveKind_o, "INTEGER", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_INTEGER_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::INTEGER' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::TEXT */
    corto_lang_primitiveKind_TEXT_o = corto_declareChild(corto_lang_primitiveKind_o, "TEXT", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_TEXT_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::TEXT' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::primitiveKind::UINTEGER */
    corto_lang_primitiveKind_UINTEGER_o = corto_declareChild(corto_lang_primitiveKind_o, "UINTEGER", corto_lang_constant_o);
    if (!corto_lang_primitiveKind_UINTEGER_o) {
        corto_error("lang_load: failed to declare '::corto::lang::primitiveKind::UINTEGER' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedure */
    corto_lang_procedure_o = corto_declareChild(corto_lang_o, "procedure", corto_lang_class_o);
    if (!corto_lang_procedure_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedure' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedure::bind */
    corto_lang_procedure_bind_o = corto_declareChild(corto_lang_procedure_o, "bind", corto_lang_member_o);
    if (!corto_lang_procedure_bind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedure::bind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedure::init() */
    corto_lang_procedure_init_o = corto_declareChild(corto_lang_procedure_o, "init()", corto_lang_method_o);
    if (!corto_lang_procedure_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedure::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedure::kind */
    corto_lang_procedure_kind_o = corto_declareChild(corto_lang_procedure_o, "kind", corto_lang_member_o);
    if (!corto_lang_procedure_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedure::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedure::unbind(function object) */
    corto_lang_procedure_unbind_o = corto_declareChild(corto_lang_procedure_o, "unbind(function object)", corto_lang_method_o);
    if (!corto_lang_procedure_unbind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedure::unbind(function object)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedureKind */
    corto_lang_procedureKind_o = corto_declareChild(corto_lang_o, "procedureKind", corto_lang_enum_o);
    if (!corto_lang_procedureKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedureKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedureKind::FUNCTION */
    corto_lang_procedureKind_FUNCTION_o = corto_declareChild(corto_lang_procedureKind_o, "FUNCTION", corto_lang_constant_o);
    if (!corto_lang_procedureKind_FUNCTION_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedureKind::FUNCTION' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedureKind::METAPROCEDURE */
    corto_lang_procedureKind_METAPROCEDURE_o = corto_declareChild(corto_lang_procedureKind_o, "METAPROCEDURE", corto_lang_constant_o);
    if (!corto_lang_procedureKind_METAPROCEDURE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedureKind::METAPROCEDURE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedureKind::METHOD */
    corto_lang_procedureKind_METHOD_o = corto_declareChild(corto_lang_procedureKind_o, "METHOD", corto_lang_constant_o);
    if (!corto_lang_procedureKind_METHOD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedureKind::METHOD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::procedureKind::OBSERVER */
    corto_lang_procedureKind_OBSERVER_o = corto_declareChild(corto_lang_procedureKind_o, "OBSERVER", corto_lang_constant_o);
    if (!corto_lang_procedureKind_OBSERVER_o) {
        corto_error("lang_load: failed to declare '::corto::lang::procedureKind::OBSERVER' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::query */
    corto_lang_query_o = corto_declareChild(corto_lang_o, "query", corto_lang_class_o);
    if (!corto_lang_query_o) {
        corto_error("lang_load: failed to declare '::corto::lang::query' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::query::from */
    corto_lang_query_from_o = corto_declareChild(corto_lang_query_o, "from", corto_lang_member_o);
    if (!corto_lang_query_from_o) {
        corto_error("lang_load: failed to declare '::corto::lang::query::from' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::query::mask */
    corto_lang_query_mask_o = corto_declareChild(corto_lang_query_o, "mask", corto_lang_member_o);
    if (!corto_lang_query_mask_o) {
        corto_error("lang_load: failed to declare '::corto::lang::query::mask' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount */
    corto_lang_mount_o = corto_declareChild(corto_lang_o, "mount", corto_lang_class_o);
    if (!corto_lang_mount_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::construct() */
    corto_lang_mount_construct_o = corto_declareChild(corto_lang_mount_o, "construct()", corto_lang_method_o);
    if (!corto_lang_mount_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::destruct() */
    corto_lang_mount_destruct_o = corto_declareChild(corto_lang_mount_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_mount_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::invoke(object instance,function proc,octetseq args) */
    corto_lang_mount_invoke_o = corto_declareChild(corto_lang_mount_o, "invoke(object instance,function proc,octetseq args)", corto_lang_method_o);
    if (!corto_lang_mount_invoke_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::invoke(object instance,function proc,octetseq args)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::mount */
    corto_lang_mount_mount_o = corto_declareChild(corto_lang_mount_o, "mount", corto_lang_member_o);
    if (!corto_lang_mount_mount_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::mount' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::on_declare */
    corto_lang_mount_on_declare_o = corto_declareChild(corto_lang_mount_o, "on_declare", corto_lang_observer_o);
    if (!corto_lang_mount_on_declare_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::on_declare' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::on_delete */
    corto_lang_mount_on_delete_o = corto_declareChild(corto_lang_mount_o, "on_delete", corto_lang_observer_o);
    if (!corto_lang_mount_on_delete_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::on_delete' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::on_update */
    corto_lang_mount_on_update_o = corto_declareChild(corto_lang_mount_o, "on_update", corto_lang_observer_o);
    if (!corto_lang_mount_on_update_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::on_update' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::onDeclare */
    corto_lang_mount_onDeclare_o = corto_declareChild(corto_lang_mount_o, "onDeclare", corto_lang_member_o);
    if (!corto_lang_mount_onDeclare_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::onDeclare' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::onDelete */
    corto_lang_mount_onDelete_o = corto_declareChild(corto_lang_mount_o, "onDelete", corto_lang_member_o);
    if (!corto_lang_mount_onDelete_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::onDelete' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::onInvoke */
    corto_lang_mount_onInvoke_o = corto_declareChild(corto_lang_mount_o, "onInvoke", corto_lang_member_o);
    if (!corto_lang_mount_onInvoke_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::onInvoke' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::onUpdate */
    corto_lang_mount_onUpdate_o = corto_declareChild(corto_lang_mount_o, "onUpdate", corto_lang_member_o);
    if (!corto_lang_mount_onUpdate_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::onUpdate' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::post(event e) */
    corto_lang_mount_post_o = corto_declareChild(corto_lang_mount_o, "post(event e)", corto_lang_method_o);
    if (!corto_lang_mount_post_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::post(event e)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::mount::query */
    corto_lang_mount_query_o = corto_declareChild(corto_lang_mount_o, "query", corto_lang_member_o);
    if (!corto_lang_mount_query_o) {
        corto_error("lang_load: failed to declare '::corto::lang::mount::query' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::sequence */
    corto_lang_sequence_o = corto_declareChild(corto_lang_o, "sequence", corto_lang_class_o);
    if (!corto_lang_sequence_o) {
        corto_error("lang_load: failed to declare '::corto::lang::sequence' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::sequence::construct() */
    corto_lang_sequence_construct_o = corto_declareChild(corto_lang_sequence_o, "construct()", corto_lang_method_o);
    if (!corto_lang_sequence_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::sequence::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::sequence::init() */
    corto_lang_sequence_init_o = corto_declareChild(corto_lang_sequence_o, "init()", corto_lang_method_o);
    if (!corto_lang_sequence_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::sequence::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::sequence::size(uint32 size) */
    corto_lang_sequence_size_o = corto_declareChild(corto_lang_sequence_o, "size(uint32 size)", corto_lang_metaprocedure_o);
    if (!corto_lang_sequence_size_o) {
        corto_error("lang_load: failed to declare '::corto::lang::sequence::size(uint32 size)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::state */
    corto_lang_state_o = corto_declareChild(corto_lang_o, "state", corto_lang_bitmask_o);
    if (!corto_lang_state_o) {
        corto_error("lang_load: failed to declare '::corto::lang::state' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::state::DECLARED */
    corto_lang_state_DECLARED_o = corto_declareChild(corto_lang_state_o, "DECLARED", corto_lang_constant_o);
    if (!corto_lang_state_DECLARED_o) {
        corto_error("lang_load: failed to declare '::corto::lang::state::DECLARED' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::state::DEFINED */
    corto_lang_state_DEFINED_o = corto_declareChild(corto_lang_state_o, "DEFINED", corto_lang_constant_o);
    if (!corto_lang_state_DEFINED_o) {
        corto_error("lang_load: failed to declare '::corto::lang::state::DEFINED' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::state::DESTRUCTED */
    corto_lang_state_DESTRUCTED_o = corto_declareChild(corto_lang_state_o, "DESTRUCTED", corto_lang_constant_o);
    if (!corto_lang_state_DESTRUCTED_o) {
        corto_error("lang_load: failed to declare '::corto::lang::state::DESTRUCTED' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::state::VALID */
    corto_lang_state_VALID_o = corto_declareChild(corto_lang_state_o, "VALID", corto_lang_constant_o);
    if (!corto_lang_state_VALID_o) {
        corto_error("lang_load: failed to declare '::corto::lang::state::VALID' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::string */
    corto_lang_string_o = corto_declareChild(corto_lang_o, "string", corto_lang_text_o);
    if (!corto_lang_string_o) {
        corto_error("lang_load: failed to declare '::corto::lang::string' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct */
    corto_lang_struct_o = corto_declareChild(corto_lang_o, "struct", corto_lang_class_o);
    if (!corto_lang_struct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::base */
    corto_lang_struct_base_o = corto_declareChild(corto_lang_struct_o, "base", corto_lang_alias_o);
    if (!corto_lang_struct_base_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::base' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::baseAccess */
    corto_lang_struct_baseAccess_o = corto_declareChild(corto_lang_struct_o, "baseAccess", corto_lang_member_o);
    if (!corto_lang_struct_baseAccess_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::baseAccess' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::castable(type type) */
    corto_lang_struct_castable_o = corto_declareChild(corto_lang_struct_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_struct_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::compatible(type type) */
    corto_lang_struct_compatible_o = corto_declareChild(corto_lang_struct_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_struct_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::construct() */
    corto_lang_struct_construct_o = corto_declareChild(corto_lang_struct_o, "construct()", corto_lang_method_o);
    if (!corto_lang_struct_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::defaultProcedureType */
    corto_lang_struct_defaultProcedureType_o = corto_declareChild(corto_lang_struct_o, "defaultProcedureType", corto_lang_alias_o);
    if (!corto_lang_struct_defaultProcedureType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::defaultProcedureType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::defaultType */
    corto_lang_struct_defaultType_o = corto_declareChild(corto_lang_struct_o, "defaultType", corto_lang_alias_o);
    if (!corto_lang_struct_defaultType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::defaultType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::init() */
    corto_lang_struct_init_o = corto_declareChild(corto_lang_struct_o, "init()", corto_lang_method_o);
    if (!corto_lang_struct_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::parentState */
    corto_lang_struct_parentState_o = corto_declareChild(corto_lang_struct_o, "parentState", corto_lang_alias_o);
    if (!corto_lang_struct_parentState_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::parentState' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::parentType */
    corto_lang_struct_parentType_o = corto_declareChild(corto_lang_struct_o, "parentType", corto_lang_alias_o);
    if (!corto_lang_struct_parentType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::parentType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::struct::resolveMember(string name) */
    corto_lang_struct_resolveMember_o = corto_declareChild(corto_lang_struct_o, "resolveMember(string name)", corto_lang_method_o);
    if (!corto_lang_struct_resolveMember_o) {
        corto_error("lang_load: failed to declare '::corto::lang::struct::resolveMember(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::text */
    corto_lang_text_o = corto_declareChild(corto_lang_o, "text", corto_lang_class_o);
    if (!corto_lang_text_o) {
        corto_error("lang_load: failed to declare '::corto::lang::text' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::text::charWidth */
    corto_lang_text_charWidth_o = corto_declareChild(corto_lang_text_o, "charWidth", corto_lang_member_o);
    if (!corto_lang_text_charWidth_o) {
        corto_error("lang_load: failed to declare '::corto::lang::text::charWidth' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::text::init() */
    corto_lang_text_init_o = corto_declareChild(corto_lang_text_o, "init()", corto_lang_method_o);
    if (!corto_lang_text_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::text::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::text::length */
    corto_lang_text_length_o = corto_declareChild(corto_lang_text_o, "length", corto_lang_member_o);
    if (!corto_lang_text_length_o) {
        corto_error("lang_load: failed to declare '::corto::lang::text::length' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type */
    corto_lang_type_o = corto_declareChild(corto_lang_o, "type", corto_lang_class_o);
    if (!corto_lang_type_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::alignment */
    corto_lang_type_alignment_o = corto_declareChild(corto_lang_type_o, "alignment", corto_lang_member_o);
    if (!corto_lang_type_alignment_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::alignment' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::alignmentof() */
    corto_lang_type_alignmentof_o = corto_declareChild(corto_lang_type_o, "alignmentof()", corto_lang_method_o);
    if (!corto_lang_type_alignmentof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::alignmentof()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::allocSize() */
    corto_lang_type_allocSize_o = corto_declareChild(corto_lang_type_o, "allocSize()", corto_lang_method_o);
    if (!corto_lang_type_allocSize_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::allocSize()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::castable(type type) */
    corto_lang_type_castable_o = corto_declareChild(corto_lang_type_o, "castable(type type)", corto_lang_method_o);
    if (!corto_lang_type_castable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::castable(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::checkAttr(attr attributes) */
    corto_lang_type_checkAttr_o = corto_declareChild(corto_lang_type_o, "checkAttr(attr attributes)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_checkAttr_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::checkAttr(attr attributes)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::checkState(state state) */
    corto_lang_type_checkState_o = corto_declareChild(corto_lang_type_o, "checkState(state state)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_checkState_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::checkState(state state)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::compare(any value) */
    corto_lang_type_compare_o = corto_declareChild(corto_lang_type_o, "compare(any value)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_compare_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::compare(any value)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::compatible(type type) */
    corto_lang_type_compatible_o = corto_declareChild(corto_lang_type_o, "compatible(type type)", corto_lang_method_o);
    if (!corto_lang_type_compatible_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::compatible(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::construct() */
    corto_lang_type_construct_o = corto_declareChild(corto_lang_type_o, "construct()", corto_lang_method_o);
    if (!corto_lang_type_construct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::construct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::copy(any value) */
    corto_lang_type_copy_o = corto_declareChild(corto_lang_type_o, "copy(any value)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_copy_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::copy(any value)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::declare(string name,type type) */
    corto_lang_type_declare_o = corto_declareChild(corto_lang_type_o, "declare(string name,type type)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_declare_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::declare(string name,type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::defaultProcedureType */
    corto_lang_type_defaultProcedureType_o = corto_declareChild(corto_lang_type_o, "defaultProcedureType", corto_lang_member_o);
    if (!corto_lang_type_defaultProcedureType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::defaultProcedureType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::defaultType */
    corto_lang_type_defaultType_o = corto_declareChild(corto_lang_type_o, "defaultType", corto_lang_member_o);
    if (!corto_lang_type_defaultType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::defaultType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::define() */
    corto_lang_type_define_o = corto_declareChild(corto_lang_type_o, "define()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_define_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::define()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::delete() */
    corto_lang_type_delete_o = corto_declareChild(corto_lang_type_o, "delete()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_delete_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::delete()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::destruct() */
    corto_lang_type_destruct_o = corto_declareChild(corto_lang_type_o, "destruct()", corto_lang_method_o);
    if (!corto_lang_type_destruct_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::destruct()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::fullname() */
    corto_lang_type_fullname_o = corto_declareChild(corto_lang_type_o, "fullname()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_fullname_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::fullname()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::hasResources */
    corto_lang_type_hasResources_o = corto_declareChild(corto_lang_type_o, "hasResources", corto_lang_member_o);
    if (!corto_lang_type_hasResources_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::hasResources' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::init */
    corto_lang_type_init_o = corto_declareChild(corto_lang_type_o, "init", corto_lang_member_o);
    if (!corto_lang_type_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::init' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::init() */
    corto_lang_type_init_o = corto_declareChild(corto_lang_type_o, "init()", corto_lang_method_o);
    if (!corto_lang_type_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::instanceof(type type) */
    corto_lang_type_instanceof_o = corto_declareChild(corto_lang_type_o, "instanceof(type type)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_instanceof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::instanceof(type type)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::invalidate() */
    corto_lang_type_invalidate_o = corto_declareChild(corto_lang_type_o, "invalidate()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_invalidate_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::invalidate()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::kind */
    corto_lang_type_kind_o = corto_declareChild(corto_lang_type_o, "kind", corto_lang_member_o);
    if (!corto_lang_type_kind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::kind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::lookup(string name) */
    corto_lang_type_lookup_o = corto_declareChild(corto_lang_type_o, "lookup(string name)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_lookup_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::lookup(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::metaprocedures */
    corto_lang_type_metaprocedures_o = corto_declareChild(corto_lang_type_o, "metaprocedures", corto_lang_member_o);
    if (!corto_lang_type_metaprocedures_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::metaprocedures' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::nameof() */
    corto_lang_type_nameof_o = corto_declareChild(corto_lang_type_o, "nameof()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_nameof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::nameof()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::parentof() */
    corto_lang_type_parentof_o = corto_declareChild(corto_lang_type_o, "parentof()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_parentof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::parentof()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::parentState */
    corto_lang_type_parentState_o = corto_declareChild(corto_lang_type_o, "parentState", corto_lang_member_o);
    if (!corto_lang_type_parentState_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::parentState' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::parentType */
    corto_lang_type_parentType_o = corto_declareChild(corto_lang_type_o, "parentType", corto_lang_member_o);
    if (!corto_lang_type_parentType_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::parentType' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::reference */
    corto_lang_type_reference_o = corto_declareChild(corto_lang_type_o, "reference", corto_lang_member_o);
    if (!corto_lang_type_reference_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::reference' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::relname(object from) */
    corto_lang_type_relname_o = corto_declareChild(corto_lang_type_o, "relname(object from)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_relname_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::relname(object from)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::resolve(string name) */
    corto_lang_type_resolve_o = corto_declareChild(corto_lang_type_o, "resolve(string name)", corto_lang_metaprocedure_o);
    if (!corto_lang_type_resolve_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::resolve(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::resolveProcedure(string name) */
    corto_lang_type_resolveProcedure_o = corto_declareChild(corto_lang_type_o, "resolveProcedure(string name)", corto_lang_method_o);
    if (!corto_lang_type_resolveProcedure_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::resolveProcedure(string name)' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::size */
    corto_lang_type_size_o = corto_declareChild(corto_lang_type_o, "size", corto_lang_member_o);
    if (!corto_lang_type_size_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::size' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::sizeof() */
    corto_lang_type_sizeof_o = corto_declareChild(corto_lang_type_o, "sizeof()", corto_lang_method_o);
    if (!corto_lang_type_sizeof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::sizeof()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::templateId */
    corto_lang_type_templateId_o = corto_declareChild(corto_lang_type_o, "templateId", corto_lang_member_o);
    if (!corto_lang_type_templateId_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::templateId' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::toString() */
    corto_lang_type_toString_o = corto_declareChild(corto_lang_type_o, "toString()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_toString_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::toString()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::type::typeof() */
    corto_lang_type_typeof_o = corto_declareChild(corto_lang_type_o, "typeof()", corto_lang_metaprocedure_o);
    if (!corto_lang_type_typeof_o) {
        corto_error("lang_load: failed to declare '::corto::lang::type::typeof()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind */
    corto_lang_typeKind_o = corto_declareChild(corto_lang_o, "typeKind", corto_lang_enum_o);
    if (!corto_lang_typeKind_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::ANY */
    corto_lang_typeKind_ANY_o = corto_declareChild(corto_lang_typeKind_o, "ANY", corto_lang_constant_o);
    if (!corto_lang_typeKind_ANY_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::ANY' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::COLLECTION */
    corto_lang_typeKind_COLLECTION_o = corto_declareChild(corto_lang_typeKind_o, "COLLECTION", corto_lang_constant_o);
    if (!corto_lang_typeKind_COLLECTION_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::COLLECTION' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::COMPOSITE */
    corto_lang_typeKind_COMPOSITE_o = corto_declareChild(corto_lang_typeKind_o, "COMPOSITE", corto_lang_constant_o);
    if (!corto_lang_typeKind_COMPOSITE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::COMPOSITE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::ITERATOR */
    corto_lang_typeKind_ITERATOR_o = corto_declareChild(corto_lang_typeKind_o, "ITERATOR", corto_lang_constant_o);
    if (!corto_lang_typeKind_ITERATOR_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::ITERATOR' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::PRIMITIVE */
    corto_lang_typeKind_PRIMITIVE_o = corto_declareChild(corto_lang_typeKind_o, "PRIMITIVE", corto_lang_constant_o);
    if (!corto_lang_typeKind_PRIMITIVE_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::PRIMITIVE' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::typeKind::VOID */
    corto_lang_typeKind_VOID_o = corto_declareChild(corto_lang_typeKind_o, "VOID", corto_lang_constant_o);
    if (!corto_lang_typeKind_VOID_o) {
        corto_error("lang_load: failed to declare '::corto::lang::typeKind::VOID' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint */
    corto_lang_uint_o = corto_declareChild(corto_lang_o, "uint", corto_lang_class_o);
    if (!corto_lang_uint_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint::init() */
    corto_lang_uint_init_o = corto_declareChild(corto_lang_uint_o, "init()", corto_lang_method_o);
    if (!corto_lang_uint_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint::max */
    corto_lang_uint_max_o = corto_declareChild(corto_lang_uint_o, "max", corto_lang_member_o);
    if (!corto_lang_uint_max_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint::max' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint::min */
    corto_lang_uint_min_o = corto_declareChild(corto_lang_uint_o, "min", corto_lang_member_o);
    if (!corto_lang_uint_min_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint::min' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint16 */
    corto_lang_uint16_o = corto_declareChild(corto_lang_o, "uint16", corto_lang_uint_o);
    if (!corto_lang_uint16_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint16' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint32 */
    corto_lang_uint32_o = corto_declareChild(corto_lang_o, "uint32", corto_lang_uint_o);
    if (!corto_lang_uint32_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint32' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint64 */
    corto_lang_uint64_o = corto_declareChild(corto_lang_o, "uint64", corto_lang_uint_o);
    if (!corto_lang_uint64_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint64' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::uint8 */
    corto_lang_uint8_o = corto_declareChild(corto_lang_o, "uint8", corto_lang_uint_o);
    if (!corto_lang_uint8_o) {
        corto_error("lang_load: failed to declare '::corto::lang::uint8' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::virtual */
    corto_lang_virtual_o = corto_declareChild(corto_lang_o, "virtual", corto_lang_procedure_o);
    if (!corto_lang_virtual_o) {
        corto_error("lang_load: failed to declare '::corto::lang::virtual' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::virtual::init() */
    corto_lang_virtual_init_o = corto_declareChild(corto_lang_virtual_o, "init()", corto_lang_method_o);
    if (!corto_lang_virtual_init_o) {
        corto_error("lang_load: failed to declare '::corto::lang::virtual::init()' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::void */
    corto_lang_void_o = corto_declareChild(corto_lang_o, "void", corto_lang_type_o);
    if (!corto_lang_void_o) {
        corto_error("lang_load: failed to declare '::corto::lang::void' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::vtable */
    corto_lang_vtable_o = corto_declareChild(corto_lang_o, "vtable", corto_lang_sequence_o);
    if (!corto_lang_vtable_o) {
        corto_error("lang_load: failed to declare '::corto::lang::vtable' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width */
    corto_lang_width_o = corto_declareChild(corto_lang_o, "width", corto_lang_enum_o);
    if (!corto_lang_width_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width::WIDTH_16 */
    corto_lang_width_WIDTH_16_o = corto_declareChild(corto_lang_width_o, "WIDTH_16", corto_lang_constant_o);
    if (!corto_lang_width_WIDTH_16_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width::WIDTH_16' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width::WIDTH_32 */
    corto_lang_width_WIDTH_32_o = corto_declareChild(corto_lang_width_o, "WIDTH_32", corto_lang_constant_o);
    if (!corto_lang_width_WIDTH_32_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width::WIDTH_32' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width::WIDTH_64 */
    corto_lang_width_WIDTH_64_o = corto_declareChild(corto_lang_width_o, "WIDTH_64", corto_lang_constant_o);
    if (!corto_lang_width_WIDTH_64_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width::WIDTH_64' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width::WIDTH_8 */
    corto_lang_width_WIDTH_8_o = corto_declareChild(corto_lang_width_o, "WIDTH_8", corto_lang_constant_o);
    if (!corto_lang_width_WIDTH_8_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width::WIDTH_8' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::width::WIDTH_WORD */
    corto_lang_width_WIDTH_WORD_o = corto_declareChild(corto_lang_width_o, "WIDTH_WORD", corto_lang_constant_o);
    if (!corto_lang_width_WIDTH_WORD_o) {
        corto_error("lang_load: failed to declare '::corto::lang::width::WIDTH_WORD' (%s)", corto_lasterr());
        goto error;
    }

    /* Declare ::corto::lang::word */
    corto_lang_word_o = corto_declareChild(corto_lang_o, "word", corto_lang_binary_o);
    if (!corto_lang_word_o) {
        corto_error("lang_load: failed to declare '::corto::lang::word' (%s)", corto_lasterr());
        goto error;
    }

    /* Define ::corto::lang */
    if (!corto_checkState(corto_lang_o, CORTO_DEFINED)) {
        corto_lang_o->url = corto_strdup("http://corto.io/doc/corto/lang");
        if (corto_define(corto_lang_o)) {
            corto_error("lang_load: failed to define '::corto::lang' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::alias */
    if (!corto_checkState(corto_lang_alias_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_alias_o)->parentType = corto_resolve(NULL, "::corto::lang::struct");
        corto_lang_type(corto_lang_alias_o)->parentState = 0x2;
        corto_lang_type(corto_lang_alias_o)->defaultType = NULL;
        corto_lang_type(corto_lang_alias_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_alias_o)->base = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_struct(corto_lang_alias_o)->baseAccess = 0x10;
        corto_lang_alias_o->implements.length = 0;
        corto_lang_alias_o->implements.buffer = NULL;
        if (corto_define(corto_lang_alias_o)) {
            corto_error("lang_load: failed to define '::corto::lang::alias' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_alias_o)->size != sizeof(struct corto_lang_alias_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::alias' doesn't match C-type size '%d'", corto_type(corto_lang_alias_o)->size, sizeof(struct corto_lang_alias_s));
    }

    /* Define ::corto::lang::alias::construct() */
    if (!corto_checkState(corto_lang_alias_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_alias_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_alias_construct_o)->returnsReference = FALSE;
        corto_lang_alias_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_alias_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::alias::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::alias::init() */
    if (!corto_checkState(corto_lang_alias_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_alias_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_alias_init_o)->returnsReference = FALSE;
        corto_lang_alias_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_alias_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::alias::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::alias::member */
    if (!corto_checkState(corto_lang_alias_member_o, CORTO_DEFINED)) {
        corto_lang_alias_member_o->type = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_alias_member_o->modifiers = 0x0;
        corto_lang_alias_member_o->state = 0x4;
        corto_lang_alias_member_o->weak = FALSE;
        corto_lang_alias_member_o->id = 0;
        if (corto_define(corto_lang_alias_member_o)) {
            corto_error("lang_load: failed to define '::corto::lang::alias::member' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::any */
    if (!corto_checkState(corto_lang_any_o, CORTO_DEFINED)) {
        corto_lang_any_o->parentType = NULL;
        corto_lang_any_o->parentState = 0x6;
        corto_lang_any_o->defaultType = NULL;
        corto_lang_any_o->defaultProcedureType = NULL;
        if (corto_define(corto_lang_any_o)) {
            corto_error("lang_load: failed to define '::corto::lang::any' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_any_o)->size != sizeof(corto_lang_any)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::any' doesn't match C-type size '%d'", corto_type(corto_lang_any_o)->size, sizeof(corto_lang_any));
    }

    /* Define ::corto::lang::array */
    if (!corto_checkState(corto_lang_array_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_array_o)->parentType = NULL;
        corto_lang_type(corto_lang_array_o)->parentState = 0x6;
        corto_lang_type(corto_lang_array_o)->defaultType = NULL;
        corto_lang_type(corto_lang_array_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_array_o)->base = corto_resolve(NULL, "::corto::lang::collection");
        corto_lang_struct(corto_lang_array_o)->baseAccess = 0x0;
        corto_lang_array_o->implements.length = 0;
        corto_lang_array_o->implements.buffer = NULL;
        if (corto_define(corto_lang_array_o)) {
            corto_error("lang_load: failed to define '::corto::lang::array' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_array_o)->size != sizeof(struct corto_lang_array_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::array' doesn't match C-type size '%d'", corto_type(corto_lang_array_o)->size, sizeof(struct corto_lang_array_s));
    }

    /* Define ::corto::lang::array::construct() */
    if (!corto_checkState(corto_lang_array_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_array_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_array_construct_o)->returnsReference = FALSE;
        corto_lang_array_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_array_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::array::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::array::destruct() */
    if (!corto_checkState(corto_lang_array_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_array_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_array_destruct_o)->returnsReference = FALSE;
        corto_lang_array_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_array_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::array::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::array::elementType */
    if (!corto_checkState(corto_lang_array_elementType_o, CORTO_DEFINED)) {
        corto_lang_array_elementType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_array_elementType_o->modifiers = 0x2;
        corto_lang_array_elementType_o->state = 0x4;
        corto_lang_array_elementType_o->weak = FALSE;
        corto_lang_array_elementType_o->id = 0;
        if (corto_define(corto_lang_array_elementType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::array::elementType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::array::init() */
    if (!corto_checkState(corto_lang_array_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_array_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_array_init_o)->returnsReference = FALSE;
        corto_lang_array_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_array_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::array::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::attr */
    if (!corto_checkState(corto_lang_attr_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_attr_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_attr_o)->size != sizeof(corto_lang_attr)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::attr' doesn't match C-type size '%d'", corto_type(corto_lang_attr_o)->size, sizeof(corto_lang_attr));
    }

    /* Define ::corto::lang::attr::ATTR_DEFAULT */
    if (!corto_checkState(corto_lang_attr_ATTR_DEFAULT_o, CORTO_DEFINED)) {
        (*corto_lang_attr_ATTR_DEFAULT_o) = 16;
        if (corto_define(corto_lang_attr_ATTR_DEFAULT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr::ATTR_DEFAULT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::attr::ATTR_OBSERVABLE */
    if (!corto_checkState(corto_lang_attr_ATTR_OBSERVABLE_o, CORTO_DEFINED)) {
        (*corto_lang_attr_ATTR_OBSERVABLE_o) = 4;
        if (corto_define(corto_lang_attr_ATTR_OBSERVABLE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr::ATTR_OBSERVABLE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::attr::ATTR_PERSISTENT */
    if (!corto_checkState(corto_lang_attr_ATTR_PERSISTENT_o, CORTO_DEFINED)) {
        (*corto_lang_attr_ATTR_PERSISTENT_o) = 8;
        if (corto_define(corto_lang_attr_ATTR_PERSISTENT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr::ATTR_PERSISTENT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::attr::ATTR_SCOPED */
    if (!corto_checkState(corto_lang_attr_ATTR_SCOPED_o, CORTO_DEFINED)) {
        (*corto_lang_attr_ATTR_SCOPED_o) = 1;
        if (corto_define(corto_lang_attr_ATTR_SCOPED_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr::ATTR_SCOPED' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::attr::ATTR_WRITABLE */
    if (!corto_checkState(corto_lang_attr_ATTR_WRITABLE_o, CORTO_DEFINED)) {
        (*corto_lang_attr_ATTR_WRITABLE_o) = 2;
        if (corto_define(corto_lang_attr_ATTR_WRITABLE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::attr::ATTR_WRITABLE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::binary */
    if (!corto_checkState(corto_lang_binary_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_binary_o)->parentType = NULL;
        corto_lang_type(corto_lang_binary_o)->parentState = 0x6;
        corto_lang_type(corto_lang_binary_o)->defaultType = NULL;
        corto_lang_type(corto_lang_binary_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_binary_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_binary_o)->baseAccess = 0x0;
        corto_lang_binary_o->implements.length = 0;
        corto_lang_binary_o->implements.buffer = NULL;
        if (corto_define(corto_lang_binary_o)) {
            corto_error("lang_load: failed to define '::corto::lang::binary' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_binary_o)->size != sizeof(struct corto_lang_binary_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::binary' doesn't match C-type size '%d'", corto_type(corto_lang_binary_o)->size, sizeof(struct corto_lang_binary_s));
    }

    /* Define ::corto::lang::binary::init() */
    if (!corto_checkState(corto_lang_binary_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_binary_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_binary_init_o)->returnsReference = FALSE;
        corto_lang_binary_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_binary_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::binary::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::bitmask */
    if (!corto_checkState(corto_lang_bitmask_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_bitmask_o)->parentType = NULL;
        corto_lang_type(corto_lang_bitmask_o)->parentState = 0x6;
        corto_lang_type(corto_lang_bitmask_o)->defaultType = corto_resolve(NULL, "::corto::lang::constant");
        corto_lang_type(corto_lang_bitmask_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_bitmask_o)->base = corto_resolve(NULL, "::corto::lang::enum");
        corto_lang_struct(corto_lang_bitmask_o)->baseAccess = 0x5;
        corto_lang_bitmask_o->implements.length = 0;
        corto_lang_bitmask_o->implements.buffer = NULL;
        if (corto_define(corto_lang_bitmask_o)) {
            corto_error("lang_load: failed to define '::corto::lang::bitmask' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_bitmask_o)->size != sizeof(struct corto_lang_bitmask_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::bitmask' doesn't match C-type size '%d'", corto_type(corto_lang_bitmask_o)->size, sizeof(struct corto_lang_bitmask_s));
    }

    /* Define ::corto::lang::bitmask::init() */
    if (!corto_checkState(corto_lang_bitmask_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_bitmask_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_bitmask_init_o)->returnsReference = FALSE;
        corto_lang_bitmask_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_bitmask_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::bitmask::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::bool */
    if (!corto_checkState(corto_lang_bool_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_bool_o)->width = LANG_WIDTH_8;
        if (corto_define(corto_lang_bool_o)) {
            corto_error("lang_load: failed to define '::corto::lang::bool' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_bool_o)->size != sizeof(corto_lang_bool)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::bool' doesn't match C-type size '%d'", corto_type(corto_lang_bool_o)->size, sizeof(corto_lang_bool));
    }

    /* Define ::corto::lang::boolean */
    if (!corto_checkState(corto_lang_boolean_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_boolean_o)->parentType = NULL;
        corto_lang_type(corto_lang_boolean_o)->parentState = 0x6;
        corto_lang_type(corto_lang_boolean_o)->defaultType = NULL;
        corto_lang_type(corto_lang_boolean_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_boolean_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_boolean_o)->baseAccess = 0x4;
        corto_lang_boolean_o->implements.length = 0;
        corto_lang_boolean_o->implements.buffer = NULL;
        if (corto_define(corto_lang_boolean_o)) {
            corto_error("lang_load: failed to define '::corto::lang::boolean' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_boolean_o)->size != sizeof(struct corto_lang_boolean_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::boolean' doesn't match C-type size '%d'", corto_type(corto_lang_boolean_o)->size, sizeof(struct corto_lang_boolean_s));
    }

    /* Define ::corto::lang::boolean::init() */
    if (!corto_checkState(corto_lang_boolean_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_boolean_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_boolean_init_o)->returnsReference = FALSE;
        corto_lang_boolean_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_boolean_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::boolean::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::char */
    if (!corto_checkState(corto_lang_char_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_char_o)->width = LANG_WIDTH_8;
        if (corto_define(corto_lang_char_o)) {
            corto_error("lang_load: failed to define '::corto::lang::char' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_char_o)->size != sizeof(corto_lang_char)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::char' doesn't match C-type size '%d'", corto_type(corto_lang_char_o)->size, sizeof(corto_lang_char));
    }

    /* Define ::corto::lang::character */
    if (!corto_checkState(corto_lang_character_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_character_o)->parentType = NULL;
        corto_lang_type(corto_lang_character_o)->parentState = 0x6;
        corto_lang_type(corto_lang_character_o)->defaultType = NULL;
        corto_lang_type(corto_lang_character_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_character_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_character_o)->baseAccess = 0x0;
        corto_lang_character_o->implements.length = 0;
        corto_lang_character_o->implements.buffer = NULL;
        if (corto_define(corto_lang_character_o)) {
            corto_error("lang_load: failed to define '::corto::lang::character' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_character_o)->size != sizeof(struct corto_lang_character_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::character' doesn't match C-type size '%d'", corto_type(corto_lang_character_o)->size, sizeof(struct corto_lang_character_s));
    }

    /* Define ::corto::lang::character::init() */
    if (!corto_checkState(corto_lang_character_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_character_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_character_init_o)->returnsReference = FALSE;
        corto_lang_character_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_character_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::character::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class */
    if (!corto_checkState(corto_lang_class_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_class_o)->parentType = NULL;
        corto_lang_type(corto_lang_class_o)->parentState = 0x6;
        corto_lang_type(corto_lang_class_o)->defaultType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_type(corto_lang_class_o)->defaultProcedureType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_interface(corto_lang_class_o)->base = corto_resolve(NULL, "::corto::lang::struct");
        corto_lang_struct(corto_lang_class_o)->baseAccess = 0x10;
        corto_lang_class_o->implements.length = 0;
        corto_lang_class_o->implements.buffer = NULL;
        if (corto_define(corto_lang_class_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_class_o)->size != sizeof(struct corto_lang_class_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::class' doesn't match C-type size '%d'", corto_type(corto_lang_class_o)->size, sizeof(struct corto_lang_class_s));
    }

    /* Define ::corto::lang::class::allocSize() */
    if (!corto_checkState(corto_lang_class_allocSize_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_allocSize_o)->returnType = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function(corto_lang_class_allocSize_o)->returnsReference = FALSE;
        corto_lang_class_allocSize_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_class_allocSize_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::allocSize()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::base */
    if (!corto_checkState(corto_lang_class_base_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_base_o)->type = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_member(corto_lang_class_base_o)->modifiers = 0x0;
        corto_lang_member(corto_lang_class_base_o)->state = 0x4;
        corto_lang_member(corto_lang_class_base_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_base_o)->id = 0;
        corto_lang_class_base_o->member = corto_resolve(NULL, "::corto::lang::struct::base");
        if (corto_define(corto_lang_class_base_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::base' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::baseAccess */
    if (!corto_checkState(corto_lang_class_baseAccess_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_baseAccess_o)->type = corto_resolve(NULL, "::corto::lang::modifier");
        corto_lang_member(corto_lang_class_baseAccess_o)->modifiers = 0x0;
        corto_lang_member(corto_lang_class_baseAccess_o)->state = 0x6;
        corto_lang_member(corto_lang_class_baseAccess_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_baseAccess_o)->id = 1;
        corto_lang_class_baseAccess_o->member = corto_resolve(NULL, "::corto::lang::struct::baseAccess");
        if (corto_define(corto_lang_class_baseAccess_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::baseAccess' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::bindObserver(observer observer) */
    if (!corto_checkState(corto_lang_class_bindObserver_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_bindObserver_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_bindObserver_o)->returnsReference = FALSE;
        corto_lang_class_bindObserver_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_bindObserver_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::bindObserver(observer observer)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::construct */
    if (!corto_checkState(corto_lang_class_construct_o, CORTO_DEFINED)) {
        corto_lang_class_construct_o->type = corto_resolve(NULL, "::corto::lang::initAction");
        corto_lang_class_construct_o->modifiers = 0x3;
        corto_lang_class_construct_o->state = 0x6;
        corto_lang_class_construct_o->weak = FALSE;
        corto_lang_class_construct_o->id = 9;
        if (corto_define(corto_lang_class_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::construct' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::construct() */
    if (!corto_checkState(corto_lang_class_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_class_construct_o)->returnsReference = FALSE;
        corto_lang_class_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::defaultProcedureType */
    if (!corto_checkState(corto_lang_class_defaultProcedureType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_defaultProcedureType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_class_defaultProcedureType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_class_defaultProcedureType_o)->state = 0x4;
        corto_lang_member(corto_lang_class_defaultProcedureType_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_defaultProcedureType_o)->id = 6;
        corto_lang_class_defaultProcedureType_o->member = corto_resolve(NULL, "::corto::lang::struct::defaultProcedureType");
        if (corto_define(corto_lang_class_defaultProcedureType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::defaultProcedureType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::defaultType */
    if (!corto_checkState(corto_lang_class_defaultType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_defaultType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_class_defaultType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_class_defaultType_o)->state = 0x4;
        corto_lang_member(corto_lang_class_defaultType_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_defaultType_o)->id = 5;
        corto_lang_class_defaultType_o->member = corto_resolve(NULL, "::corto::lang::struct::defaultType");
        if (corto_define(corto_lang_class_defaultType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::defaultType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::destruct */
    if (!corto_checkState(corto_lang_class_destruct_o, CORTO_DEFINED)) {
        corto_lang_class_destruct_o->type = corto_resolve(NULL, "::corto::lang::destructAction");
        corto_lang_class_destruct_o->modifiers = 0x3;
        corto_lang_class_destruct_o->state = 0x6;
        corto_lang_class_destruct_o->weak = FALSE;
        corto_lang_class_destruct_o->id = 10;
        if (corto_define(corto_lang_class_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::destruct' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::destruct() */
    if (!corto_checkState(corto_lang_class_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_destruct_o)->returnsReference = FALSE;
        corto_lang_class_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::eventMaskOf(observer observer) */
    if (!corto_checkState(corto_lang_class_eventMaskOf_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_eventMaskOf_o)->returnType = corto_resolve(NULL, "::corto::lang::eventMask");
        corto_lang_function(corto_lang_class_eventMaskOf_o)->returnsReference = FALSE;
        corto_lang_class_eventMaskOf_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_eventMaskOf_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::eventMaskOf(observer observer)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::findObserver(object observable) */
    if (!corto_checkState(corto_lang_class_findObserver_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_findObserver_o)->returnType = corto_resolve(NULL, "::corto::lang::observer");
        corto_lang_function(corto_lang_class_findObserver_o)->returnsReference = TRUE;
        corto_lang_class_findObserver_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_findObserver_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::findObserver(object observable)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::implements */
    if (!corto_checkState(corto_lang_class_implements_o, CORTO_DEFINED)) {
        corto_lang_class_implements_o->type = corto_resolve(NULL, "::corto::lang::interfaceseq");
        corto_lang_class_implements_o->modifiers = 0x0;
        corto_lang_class_implements_o->state = 0x6;
        corto_lang_class_implements_o->weak = FALSE;
        corto_lang_class_implements_o->id = 2;
        if (corto_define(corto_lang_class_implements_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::implements' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::init() */
    if (!corto_checkState(corto_lang_class_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_class_init_o)->returnsReference = FALSE;
        corto_lang_class_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::instanceof(object object) */
    if (!corto_checkState(corto_lang_class_instanceof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_instanceof_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_class_instanceof_o)->returnsReference = FALSE;
        corto_lang_class_instanceof_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_instanceof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::instanceof(object object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::interfaceVector */
    if (!corto_checkState(corto_lang_class_interfaceVector_o, CORTO_DEFINED)) {
        corto_lang_class_interfaceVector_o->type = corto_resolve(NULL, "::corto::lang::interfaceVectorseq");
        corto_lang_class_interfaceVector_o->modifiers = 0x3;
        corto_lang_class_interfaceVector_o->state = 0x6;
        corto_lang_class_interfaceVector_o->weak = FALSE;
        corto_lang_class_interfaceVector_o->id = 7;
        if (corto_define(corto_lang_class_interfaceVector_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::interfaceVector' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::listen(observer observer,eventMask mask,object observable,dispatcher dispatcher) */
    if (!corto_checkState(corto_lang_class_listen_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_listen_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_listen_o)->returnsReference = FALSE;
        corto_lang_class_listen_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_listen_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::listen(observer observer,eventMask mask,object observable,dispatcher dispatcher)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::observableOf(observer observer) */
    if (!corto_checkState(corto_lang_class_observableOf_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_observableOf_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_class_observableOf_o)->returnsReference = TRUE;
        corto_lang_class_observableOf_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_observableOf_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::observableOf(observer observer)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::observers */
    if (!corto_checkState(corto_lang_class_observers_o, CORTO_DEFINED)) {
        corto_lang_class_observers_o->type = corto_resolve(NULL, "::corto::lang::observerseq");
        corto_lang_class_observers_o->modifiers = 0x3;
        corto_lang_class_observers_o->state = 0x6;
        corto_lang_class_observers_o->weak = FALSE;
        corto_lang_class_observers_o->id = 8;
        if (corto_define(corto_lang_class_observers_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::observers' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::parentState */
    if (!corto_checkState(corto_lang_class_parentState_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_parentState_o)->type = corto_resolve(NULL, "::corto::lang::state");
        corto_lang_member(corto_lang_class_parentState_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_class_parentState_o)->state = 0x6;
        corto_lang_member(corto_lang_class_parentState_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_parentState_o)->id = 4;
        corto_lang_class_parentState_o->member = corto_resolve(NULL, "::corto::lang::struct::parentState");
        if (corto_define(corto_lang_class_parentState_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::parentState' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::parentType */
    if (!corto_checkState(corto_lang_class_parentType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_class_parentType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_class_parentType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_class_parentType_o)->state = 0x4;
        corto_lang_member(corto_lang_class_parentType_o)->weak = FALSE;
        corto_lang_member(corto_lang_class_parentType_o)->id = 3;
        corto_lang_class_parentType_o->member = corto_resolve(NULL, "::corto::lang::struct::parentType");
        if (corto_define(corto_lang_class_parentType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::parentType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::privateObserver(object object,observer observer) */
    if (!corto_checkState(corto_lang_class_privateObserver_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_privateObserver_o)->returnType = corto_resolve(NULL, "::corto::lang::observer");
        corto_lang_function(corto_lang_class_privateObserver_o)->returnsReference = TRUE;
        corto_lang_class_privateObserver_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_privateObserver_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::privateObserver(object object,observer observer)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::resolveInterfaceMethod(interface interface,uint32 method) */
    if (!corto_checkState(corto_lang_class_resolveInterfaceMethod_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_resolveInterfaceMethod_o)->returnType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_function(corto_lang_class_resolveInterfaceMethod_o)->returnsReference = TRUE;
        corto_lang_class_resolveInterfaceMethod_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_class_resolveInterfaceMethod_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::resolveInterfaceMethod(interface interface,uint32 method)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::setDispatcher(observer observer,dispatcher dispatcher */
    if (!corto_checkState(corto_lang_class_setDispatcher_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_setDispatcher_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_setDispatcher_o)->returnsReference = FALSE;
        corto_lang_class_setDispatcher_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_setDispatcher_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::setDispatcher(observer observer,dispatcher dispatcher' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::setMask(observer observer,eventMask mask) */
    if (!corto_checkState(corto_lang_class_setMask_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_setMask_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_setMask_o)->returnsReference = FALSE;
        corto_lang_class_setMask_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_setMask_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::setMask(observer observer,eventMask mask)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::class::setObservable(observer observer,object observable) */
    if (!corto_checkState(corto_lang_class_setObservable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_class_setObservable_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_class_setObservable_o)->returnsReference = FALSE;
        corto_lang_class_setObservable_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_class_setObservable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::class::setObservable(observer observer,object observable)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection */
    if (!corto_checkState(corto_lang_collection_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_collection_o)->parentType = NULL;
        corto_lang_type(corto_lang_collection_o)->parentState = 0x6;
        corto_lang_type(corto_lang_collection_o)->defaultType = NULL;
        corto_lang_type(corto_lang_collection_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_collection_o)->base = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_struct(corto_lang_collection_o)->baseAccess = 0x5;
        corto_lang_collection_o->implements.length = 0;
        corto_lang_collection_o->implements.buffer = NULL;
        if (corto_define(corto_lang_collection_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_collection_o)->size != sizeof(struct corto_lang_collection_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::collection' doesn't match C-type size '%d'", corto_type(corto_lang_collection_o)->size, sizeof(struct corto_lang_collection_s));
    }

    /* Define ::corto::lang::collection::castable(type type) */
    if (!corto_checkState(corto_lang_collection_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_collection_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_collection_castable_o)->returnsReference = FALSE;
        corto_lang_collection_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_collection_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::compatible(type type) */
    if (!corto_checkState(corto_lang_collection_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_collection_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_collection_compatible_o)->returnsReference = FALSE;
        corto_lang_collection_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_collection_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::elementRequiresAlloc() */
    if (!corto_checkState(corto_lang_collection_elementRequiresAlloc_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_collection_elementRequiresAlloc_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_collection_elementRequiresAlloc_o)->returnsReference = FALSE;
        corto_lang_collection_elementRequiresAlloc_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_collection_elementRequiresAlloc_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::elementRequiresAlloc()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::elementType */
    if (!corto_checkState(corto_lang_collection_elementType_o, CORTO_DEFINED)) {
        corto_lang_collection_elementType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_collection_elementType_o->modifiers = 0x0;
        corto_lang_collection_elementType_o->state = 0x2;
        corto_lang_collection_elementType_o->weak = FALSE;
        corto_lang_collection_elementType_o->id = 1;
        if (corto_define(corto_lang_collection_elementType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::elementType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::init() */
    if (!corto_checkState(corto_lang_collection_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_collection_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_collection_init_o)->returnsReference = FALSE;
        corto_lang_collection_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_collection_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::kind */
    if (!corto_checkState(corto_lang_collection_kind_o, CORTO_DEFINED)) {
        corto_lang_collection_kind_o->type = corto_resolve(NULL, "::corto::lang::collectionKind");
        corto_lang_collection_kind_o->modifiers = 0x5;
        corto_lang_collection_kind_o->state = 0x6;
        corto_lang_collection_kind_o->weak = FALSE;
        corto_lang_collection_kind_o->id = 0;
        if (corto_define(corto_lang_collection_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::max */
    if (!corto_checkState(corto_lang_collection_max_o, CORTO_DEFINED)) {
        corto_lang_collection_max_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_collection_max_o->modifiers = 0x0;
        corto_lang_collection_max_o->state = 0x6;
        corto_lang_collection_max_o->weak = FALSE;
        corto_lang_collection_max_o->id = 2;
        if (corto_define(corto_lang_collection_max_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::max' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collection::size() */
    if (!corto_checkState(corto_lang_collection_size_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_collection_size_o)->returnType = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function(corto_lang_collection_size_o)->returnsReference = FALSE;
        corto_lang_collection_size_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_collection_size_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collection::size()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collectionKind */
    if (!corto_checkState(corto_lang_collectionKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_collectionKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collectionKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_collectionKind_o)->size != sizeof(corto_lang_collectionKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::collectionKind' doesn't match C-type size '%d'", corto_type(corto_lang_collectionKind_o)->size, sizeof(corto_lang_collectionKind));
    }

    /* Define ::corto::lang::collectionKind::ARRAY */
    if (!corto_checkState(corto_lang_collectionKind_ARRAY_o, CORTO_DEFINED)) {
        (*corto_lang_collectionKind_ARRAY_o) = 0;
        if (corto_define(corto_lang_collectionKind_ARRAY_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collectionKind::ARRAY' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collectionKind::LIST */
    if (!corto_checkState(corto_lang_collectionKind_LIST_o, CORTO_DEFINED)) {
        (*corto_lang_collectionKind_LIST_o) = 2;
        if (corto_define(corto_lang_collectionKind_LIST_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collectionKind::LIST' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collectionKind::MAP */
    if (!corto_checkState(corto_lang_collectionKind_MAP_o, CORTO_DEFINED)) {
        (*corto_lang_collectionKind_MAP_o) = 3;
        if (corto_define(corto_lang_collectionKind_MAP_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collectionKind::MAP' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::collectionKind::SEQUENCE */
    if (!corto_checkState(corto_lang_collectionKind_SEQUENCE_o, CORTO_DEFINED)) {
        (*corto_lang_collectionKind_SEQUENCE_o) = 1;
        if (corto_define(corto_lang_collectionKind_SEQUENCE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::collectionKind::SEQUENCE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::compositeKind */
    if (!corto_checkState(corto_lang_compositeKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_compositeKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_compositeKind_o)->size != sizeof(corto_lang_compositeKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::compositeKind' doesn't match C-type size '%d'", corto_type(corto_lang_compositeKind_o)->size, sizeof(corto_lang_compositeKind));
    }

    /* Define ::corto::lang::compositeKind::CLASS */
    if (!corto_checkState(corto_lang_compositeKind_CLASS_o, CORTO_DEFINED)) {
        (*corto_lang_compositeKind_CLASS_o) = 2;
        if (corto_define(corto_lang_compositeKind_CLASS_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind::CLASS' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::compositeKind::DELEGATE */
    if (!corto_checkState(corto_lang_compositeKind_DELEGATE_o, CORTO_DEFINED)) {
        (*corto_lang_compositeKind_DELEGATE_o) = 3;
        if (corto_define(corto_lang_compositeKind_DELEGATE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind::DELEGATE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::compositeKind::INTERFACE */
    if (!corto_checkState(corto_lang_compositeKind_INTERFACE_o, CORTO_DEFINED)) {
        (*corto_lang_compositeKind_INTERFACE_o) = 0;
        if (corto_define(corto_lang_compositeKind_INTERFACE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind::INTERFACE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::compositeKind::PROCEDURE */
    if (!corto_checkState(corto_lang_compositeKind_PROCEDURE_o, CORTO_DEFINED)) {
        (*corto_lang_compositeKind_PROCEDURE_o) = 4;
        if (corto_define(corto_lang_compositeKind_PROCEDURE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind::PROCEDURE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::compositeKind::STRUCT */
    if (!corto_checkState(corto_lang_compositeKind_STRUCT_o, CORTO_DEFINED)) {
        (*corto_lang_compositeKind_STRUCT_o) = 1;
        if (corto_define(corto_lang_compositeKind_STRUCT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::compositeKind::STRUCT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::constant */
    if (!corto_checkState(corto_lang_constant_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_constant_o)->width = LANG_WIDTH_32;
        corto_lang_constant_o->min = 0;
        corto_lang_constant_o->max = 2147483647;
        if (corto_define(corto_lang_constant_o)) {
            corto_error("lang_load: failed to define '::corto::lang::constant' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_constant_o)->size != sizeof(corto_lang_constant)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::constant' doesn't match C-type size '%d'", corto_type(corto_lang_constant_o)->size, sizeof(corto_lang_constant));
    }

    /* Define ::corto::lang::constant::init() */
    if (!corto_checkState(corto_lang_constant_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_constant_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_constant_init_o)->returnsReference = FALSE;
        corto_lang_constant_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_constant_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::constant::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate */
    if (!corto_checkState(corto_lang_delegate_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_delegate_o)->parentType = NULL;
        corto_lang_type(corto_lang_delegate_o)->parentState = 0x6;
        corto_lang_type(corto_lang_delegate_o)->defaultType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_type(corto_lang_delegate_o)->defaultProcedureType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_interface(corto_lang_delegate_o)->base = corto_resolve(NULL, "::corto::lang::struct");
        corto_lang_struct(corto_lang_delegate_o)->baseAccess = 0x4;
        corto_lang_delegate_o->implements.length = 0;
        corto_lang_delegate_o->implements.buffer = NULL;
        if (corto_define(corto_lang_delegate_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_delegate_o)->size != sizeof(struct corto_lang_delegate_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::delegate' doesn't match C-type size '%d'", corto_type(corto_lang_delegate_o)->size, sizeof(struct corto_lang_delegate_s));
    }

    /* Define ::corto::lang::delegate::bind(function object) */
    if (!corto_checkState(corto_lang_delegate_bind_o, CORTO_DEFINED)) {
        corto_lang_delegate_bind_o->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_delegate_bind_o->returnsReference = FALSE;
        
        if (corto_define(corto_lang_delegate_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::bind(function object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::castable(type type) */
    if (!corto_checkState(corto_lang_delegate_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_delegate_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_delegate_castable_o)->returnsReference = FALSE;
        corto_lang_delegate_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_delegate_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::compatible(type type) */
    if (!corto_checkState(corto_lang_delegate_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_delegate_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_delegate_compatible_o)->returnsReference = FALSE;
        corto_lang_delegate_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_delegate_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::init() */
    if (!corto_checkState(corto_lang_delegate_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_delegate_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_delegate_init_o)->returnsReference = FALSE;
        corto_lang_delegate_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_delegate_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::instanceof(object object) */
    if (!corto_checkState(corto_lang_delegate_instanceof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_delegate_instanceof_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_delegate_instanceof_o)->returnsReference = FALSE;
        corto_lang_delegate_instanceof_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_delegate_instanceof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::instanceof(object object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::parameters */
    if (!corto_checkState(corto_lang_delegate_parameters_o, CORTO_DEFINED)) {
        corto_lang_delegate_parameters_o->type = corto_resolve(NULL, "::corto::lang::parameterseq");
        corto_lang_delegate_parameters_o->modifiers = 0x0;
        corto_lang_delegate_parameters_o->state = 0x6;
        corto_lang_delegate_parameters_o->weak = FALSE;
        corto_lang_delegate_parameters_o->id = 2;
        if (corto_define(corto_lang_delegate_parameters_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::parameters' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::returnsReference */
    if (!corto_checkState(corto_lang_delegate_returnsReference_o, CORTO_DEFINED)) {
        corto_lang_delegate_returnsReference_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_delegate_returnsReference_o->modifiers = 0x0;
        corto_lang_delegate_returnsReference_o->state = 0x6;
        corto_lang_delegate_returnsReference_o->weak = FALSE;
        corto_lang_delegate_returnsReference_o->id = 1;
        if (corto_define(corto_lang_delegate_returnsReference_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::returnsReference' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegate::returnType */
    if (!corto_checkState(corto_lang_delegate_returnType_o, CORTO_DEFINED)) {
        corto_lang_delegate_returnType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_delegate_returnType_o->modifiers = 0x0;
        corto_lang_delegate_returnType_o->state = 0x6;
        corto_lang_delegate_returnType_o->weak = FALSE;
        corto_lang_delegate_returnType_o->id = 0;
        if (corto_define(corto_lang_delegate_returnType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegate::returnType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegatedata */
    if (!corto_checkState(corto_lang_delegatedata_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_delegatedata_o)->parentType = NULL;
        corto_lang_type(corto_lang_delegatedata_o)->parentState = 0x6;
        corto_lang_type(corto_lang_delegatedata_o)->defaultType = NULL;
        corto_lang_type(corto_lang_delegatedata_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_delegatedata_o)->base = NULL;
        corto_lang_delegatedata_o->baseAccess = 0x1;
        if (corto_define(corto_lang_delegatedata_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegatedata' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_delegatedata_o)->size != sizeof(corto_lang_delegatedata)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::delegatedata' doesn't match C-type size '%d'", corto_type(corto_lang_delegatedata_o)->size, sizeof(corto_lang_delegatedata));
    }

    /* Define ::corto::lang::delegatedata::instance */
    if (!corto_checkState(corto_lang_delegatedata_instance_o, CORTO_DEFINED)) {
        corto_lang_delegatedata_instance_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_delegatedata_instance_o->modifiers = 0x0;
        corto_lang_delegatedata_instance_o->state = 0x6;
        corto_lang_delegatedata_instance_o->weak = FALSE;
        corto_lang_delegatedata_instance_o->id = 0;
        if (corto_define(corto_lang_delegatedata_instance_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegatedata::instance' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::delegatedata::procedure */
    if (!corto_checkState(corto_lang_delegatedata_procedure_o, CORTO_DEFINED)) {
        corto_lang_delegatedata_procedure_o->type = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_delegatedata_procedure_o->modifiers = 0x0;
        corto_lang_delegatedata_procedure_o->state = 0x6;
        corto_lang_delegatedata_procedure_o->weak = FALSE;
        corto_lang_delegatedata_procedure_o->id = 1;
        if (corto_define(corto_lang_delegatedata_procedure_o)) {
            corto_error("lang_load: failed to define '::corto::lang::delegatedata::procedure' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::destructAction */
    if (!corto_checkState(corto_lang_destructAction_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_destructAction_o)->parentType = NULL;
        corto_lang_type(corto_lang_destructAction_o)->parentState = 0x6;
        corto_lang_type(corto_lang_destructAction_o)->defaultType = NULL;
        corto_lang_type(corto_lang_destructAction_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_destructAction_o)->base = corto_resolve(NULL, "::corto::lang::delegatedata");
        corto_lang_struct(corto_lang_destructAction_o)->baseAccess = 0x0;
        corto_lang_destructAction_o->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_destructAction_o->returnsReference = FALSE;
        corto_lang_destructAction_o->parameters.length = 0;
        corto_lang_destructAction_o->parameters.buffer = NULL;
        if (corto_define(corto_lang_destructAction_o)) {
            corto_error("lang_load: failed to define '::corto::lang::destructAction' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_destructAction_o)->size != sizeof(corto_lang_destructAction)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::destructAction' doesn't match C-type size '%d'", corto_type(corto_lang_destructAction_o)->size, sizeof(corto_lang_destructAction));
    }

    /* Define ::corto::lang::dispatcher */
    if (!corto_checkState(corto_lang_dispatcher_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_dispatcher_o)->parentType = NULL;
        corto_lang_type(corto_lang_dispatcher_o)->parentState = 0x6;
        corto_lang_type(corto_lang_dispatcher_o)->defaultType = NULL;
        corto_lang_type(corto_lang_dispatcher_o)->defaultProcedureType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_dispatcher_o->base = NULL;
        if (corto_define(corto_lang_dispatcher_o)) {
            corto_error("lang_load: failed to define '::corto::lang::dispatcher' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_dispatcher_o)->size != sizeof(struct corto_lang_dispatcher_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::dispatcher' doesn't match C-type size '%d'", corto_type(corto_lang_dispatcher_o)->size, sizeof(struct corto_lang_dispatcher_s));
    }

    /* Define ::corto::lang::dispatcher::post(event e) */
    if (!corto_checkState(corto_lang_dispatcher_post_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_dispatcher_post_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_dispatcher_post_o)->returnsReference = FALSE;
        corto_lang_dispatcher_post_o->_virtual = TRUE;
        
        /* Bind ::corto::lang::dispatcher::post(event e) with C-function */
        corto_function(corto_lang_dispatcher_post_o)->kind = CORTO_PROCEDURE_CDECL;
        void __corto_lang_dispatcher_post_v(void *args, void *result);
        corto_function(corto_lang_dispatcher_post_o)->impl = (corto_word)__corto_lang_dispatcher_post_v;
        if (corto_define(corto_lang_dispatcher_post_o)) {
            corto_error("lang_load: failed to define '::corto::lang::dispatcher::post(event e)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::enum */
    if (!corto_checkState(corto_lang_enum_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_enum_o)->parentType = NULL;
        corto_lang_type(corto_lang_enum_o)->parentState = 0x6;
        corto_lang_type(corto_lang_enum_o)->defaultType = corto_resolve(NULL, "::corto::lang::constant");
        corto_lang_type(corto_lang_enum_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_enum_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_enum_o)->baseAccess = 0x5;
        corto_lang_enum_o->implements.length = 0;
        corto_lang_enum_o->implements.buffer = NULL;
        if (corto_define(corto_lang_enum_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_enum_o)->size != sizeof(struct corto_lang_enum_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::enum' doesn't match C-type size '%d'", corto_type(corto_lang_enum_o)->size, sizeof(struct corto_lang_enum_s));
    }

    /* Define ::corto::lang::enum::constant(int32 value) */
    if (!corto_checkState(corto_lang_enum_constant_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_enum_constant_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_enum_constant_o)->returnsReference = TRUE;
        corto_lang_enum_constant_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_enum_constant_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum::constant(int32 value)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::enum::constants */
    if (!corto_checkState(corto_lang_enum_constants_o, CORTO_DEFINED)) {
        corto_lang_enum_constants_o->type = corto_resolve(NULL, "::corto::lang::objectseq");
        corto_lang_enum_constants_o->modifiers = 0x3;
        corto_lang_enum_constants_o->state = 0x6;
        corto_lang_enum_constants_o->weak = FALSE;
        corto_lang_enum_constants_o->id = 0;
        if (corto_define(corto_lang_enum_constants_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum::constants' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::enum::construct() */
    if (!corto_checkState(corto_lang_enum_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_enum_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_enum_construct_o)->returnsReference = FALSE;
        corto_lang_enum_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_enum_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::enum::destruct() */
    if (!corto_checkState(corto_lang_enum_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_enum_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_enum_destruct_o)->returnsReference = FALSE;
        corto_lang_enum_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_enum_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::enum::init() */
    if (!corto_checkState(corto_lang_enum_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_enum_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_enum_init_o)->returnsReference = FALSE;
        corto_lang_enum_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_enum_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::enum::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::equalityKind */
    if (!corto_checkState(corto_lang_equalityKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_equalityKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::equalityKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_equalityKind_o)->size != sizeof(corto_lang_equalityKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::equalityKind' doesn't match C-type size '%d'", corto_type(corto_lang_equalityKind_o)->size, sizeof(corto_lang_equalityKind));
    }

    /* Define ::corto::lang::equalityKind::EQ */
    if (!corto_checkState(corto_lang_equalityKind_EQ_o, CORTO_DEFINED)) {
        (*corto_lang_equalityKind_EQ_o) = 0;
        if (corto_define(corto_lang_equalityKind_EQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::equalityKind::EQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::equalityKind::GT */
    if (!corto_checkState(corto_lang_equalityKind_GT_o, CORTO_DEFINED)) {
        (*corto_lang_equalityKind_GT_o) = 1;
        if (corto_define(corto_lang_equalityKind_GT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::equalityKind::GT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::equalityKind::LT */
    if (!corto_checkState(corto_lang_equalityKind_LT_o, CORTO_DEFINED)) {
        (*corto_lang_equalityKind_LT_o) = -1;
        if (corto_define(corto_lang_equalityKind_LT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::equalityKind::LT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::equalityKind::NEQ */
    if (!corto_checkState(corto_lang_equalityKind_NEQ_o, CORTO_DEFINED)) {
        (*corto_lang_equalityKind_NEQ_o) = 2;
        if (corto_define(corto_lang_equalityKind_NEQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::equalityKind::NEQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::event */
    if (!corto_checkState(corto_lang_event_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_event_o)->parentType = NULL;
        corto_lang_type(corto_lang_event_o)->parentState = 0x6;
        corto_lang_type(corto_lang_event_o)->defaultType = NULL;
        corto_lang_type(corto_lang_event_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_event_o)->base = NULL;
        corto_lang_struct(corto_lang_event_o)->baseAccess = 0x1;
        corto_lang_event_o->implements.length = 0;
        corto_lang_event_o->implements.buffer = NULL;
        if (corto_define(corto_lang_event_o)) {
            corto_error("lang_load: failed to define '::corto::lang::event' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_event_o)->size != sizeof(struct corto_lang_event_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::event' doesn't match C-type size '%d'", corto_type(corto_lang_event_o)->size, sizeof(struct corto_lang_event_s));
    }

    /* Define ::corto::lang::event::ref() */
    if (!corto_checkState(corto_lang_event_handle_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_event_handle_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_event_handle_o)->returnsReference = FALSE;
        corto_lang_event_handle_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_event_handle_o)) {
            corto_error("lang_load: failed to define '::corto::lang::event::ref()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::event::handled */
    if (!corto_checkState(corto_lang_event_handled_o, CORTO_DEFINED)) {
        corto_lang_event_handled_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_event_handled_o->modifiers = 0x5;
        corto_lang_event_handled_o->state = 0x6;
        corto_lang_event_handled_o->weak = FALSE;
        corto_lang_event_handled_o->id = 1;
        if (corto_define(corto_lang_event_handled_o)) {
            corto_error("lang_load: failed to define '::corto::lang::event::handled' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::event::kind */
    if (!corto_checkState(corto_lang_event_kind_o, CORTO_DEFINED)) {
        corto_lang_event_kind_o->type = corto_resolve(NULL, "::corto::lang::uint16");
        corto_lang_event_kind_o->modifiers = 0x0;
        corto_lang_event_kind_o->state = 0x6;
        corto_lang_event_kind_o->weak = FALSE;
        corto_lang_event_kind_o->id = 0;
        if (corto_define(corto_lang_event_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::event::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::event::uniqueKind() */
    if (!corto_checkState(corto_lang_event_uniqueKind_o, CORTO_DEFINED)) {
        corto_lang_event_uniqueKind_o->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_event_uniqueKind_o->returnsReference = FALSE;
        
        if (corto_define(corto_lang_event_uniqueKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::event::uniqueKind()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask */
    if (!corto_checkState(corto_lang_eventMask_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_eventMask_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_eventMask_o)->size != sizeof(corto_lang_eventMask)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::eventMask' doesn't match C-type size '%d'", corto_type(corto_lang_eventMask_o)->size, sizeof(corto_lang_eventMask));
    }

    /* Define ::corto::lang::eventMask::ON_DECLARE */
    if (!corto_checkState(corto_lang_eventMask_ON_DECLARE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_DECLARE_o) = 1;
        if (corto_define(corto_lang_eventMask_ON_DECLARE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_DECLARE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_DEFINE */
    if (!corto_checkState(corto_lang_eventMask_ON_DEFINE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_DEFINE_o) = 2;
        if (corto_define(corto_lang_eventMask_ON_DEFINE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_DEFINE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_DELETE */
    if (!corto_checkState(corto_lang_eventMask_ON_DELETE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_DELETE_o) = 4;
        if (corto_define(corto_lang_eventMask_ON_DELETE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_DELETE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_INVALIDATE */
    if (!corto_checkState(corto_lang_eventMask_ON_INVALIDATE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_INVALIDATE_o) = 8;
        if (corto_define(corto_lang_eventMask_ON_INVALIDATE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_INVALIDATE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_METAVALUE */
    if (!corto_checkState(corto_lang_eventMask_ON_METAVALUE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_METAVALUE_o) = 512;
        if (corto_define(corto_lang_eventMask_ON_METAVALUE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_METAVALUE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_SCOPE */
    if (!corto_checkState(corto_lang_eventMask_ON_SCOPE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_SCOPE_o) = 64;
        if (corto_define(corto_lang_eventMask_ON_SCOPE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_SCOPE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_SELF */
    if (!corto_checkState(corto_lang_eventMask_ON_SELF_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_SELF_o) = 32;
        if (corto_define(corto_lang_eventMask_ON_SELF_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_SELF' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_TREE */
    if (!corto_checkState(corto_lang_eventMask_ON_TREE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_TREE_o) = 128;
        if (corto_define(corto_lang_eventMask_ON_TREE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_TREE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_UPDATE */
    if (!corto_checkState(corto_lang_eventMask_ON_UPDATE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_UPDATE_o) = 16;
        if (corto_define(corto_lang_eventMask_ON_UPDATE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_UPDATE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::eventMask::ON_VALUE */
    if (!corto_checkState(corto_lang_eventMask_ON_VALUE_o, CORTO_DEFINED)) {
        (*corto_lang_eventMask_ON_VALUE_o) = 256;
        if (corto_define(corto_lang_eventMask_ON_VALUE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::eventMask::ON_VALUE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::float */
    if (!corto_checkState(corto_lang_float_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_float_o)->parentType = NULL;
        corto_lang_type(corto_lang_float_o)->parentState = 0x6;
        corto_lang_type(corto_lang_float_o)->defaultType = NULL;
        corto_lang_type(corto_lang_float_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_float_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_float_o)->baseAccess = 0x0;
        corto_lang_float_o->implements.length = 0;
        corto_lang_float_o->implements.buffer = NULL;
        if (corto_define(corto_lang_float_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_float_o)->size != sizeof(struct corto_lang_float_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::float' doesn't match C-type size '%d'", corto_type(corto_lang_float_o)->size, sizeof(struct corto_lang_float_s));
    }

    /* Define ::corto::lang::float::init() */
    if (!corto_checkState(corto_lang_float_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_float_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_float_init_o)->returnsReference = FALSE;
        corto_lang_float_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_float_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::float::max */
    if (!corto_checkState(corto_lang_float_max_o, CORTO_DEFINED)) {
        corto_lang_float_max_o->type = corto_resolve(NULL, "::corto::lang::float64");
        corto_lang_float_max_o->modifiers = 0x0;
        corto_lang_float_max_o->state = 0x6;
        corto_lang_float_max_o->weak = FALSE;
        corto_lang_float_max_o->id = 1;
        if (corto_define(corto_lang_float_max_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float::max' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::float::min */
    if (!corto_checkState(corto_lang_float_min_o, CORTO_DEFINED)) {
        corto_lang_float_min_o->type = corto_resolve(NULL, "::corto::lang::float64");
        corto_lang_float_min_o->modifiers = 0x0;
        corto_lang_float_min_o->state = 0x6;
        corto_lang_float_min_o->weak = FALSE;
        corto_lang_float_min_o->id = 0;
        if (corto_define(corto_lang_float_min_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float::min' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::float32 */
    if (!corto_checkState(corto_lang_float32_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_float32_o)->width = LANG_WIDTH_32;
        corto_lang_float32_o->min = 0.000000;
        corto_lang_float32_o->max = 0.000000;
        if (corto_define(corto_lang_float32_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float32' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_float32_o)->size != sizeof(corto_lang_float32)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::float32' doesn't match C-type size '%d'", corto_type(corto_lang_float32_o)->size, sizeof(corto_lang_float32));
    }

    /* Define ::corto::lang::float64 */
    if (!corto_checkState(corto_lang_float64_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_float64_o)->width = LANG_WIDTH_64;
        corto_lang_float64_o->min = 0.000000;
        corto_lang_float64_o->max = 0.000000;
        if (corto_define(corto_lang_float64_o)) {
            corto_error("lang_load: failed to define '::corto::lang::float64' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_float64_o)->size != sizeof(corto_lang_float64)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::float64' doesn't match C-type size '%d'", corto_type(corto_lang_float64_o)->size, sizeof(corto_lang_float64));
    }

    /* Define ::corto::lang::function */
    if (!corto_checkState(corto_lang_function_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_function_o)->parentType = NULL;
        corto_lang_type(corto_lang_function_o)->parentState = 0x6;
        corto_lang_type(corto_lang_function_o)->defaultType = NULL;
        corto_lang_type(corto_lang_function_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_function_o)->base = NULL;
        corto_lang_struct(corto_lang_function_o)->baseAccess = 0x1;
        corto_lang_function_o->kind = LANG_FUNCTION;
        if (corto_define(corto_lang_function_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_function_o)->size != sizeof(struct corto_lang_function_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::function' doesn't match C-type size '%d'", corto_type(corto_lang_function_o)->size, sizeof(struct corto_lang_function_s));
    }

    /* Define ::corto::lang::function::bind() */
    if (!corto_checkState(corto_lang_function_bind_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_function_bind_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_function_bind_o)->returnsReference = FALSE;
        corto_lang_function_bind_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_function_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::bind()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::impl */
    if (!corto_checkState(corto_lang_function_impl_o, CORTO_DEFINED)) {
        corto_lang_function_impl_o->type = corto_resolve(NULL, "::corto::lang::word");
        corto_lang_function_impl_o->modifiers = 0x3;
        corto_lang_function_impl_o->state = 0x6;
        corto_lang_function_impl_o->weak = FALSE;
        corto_lang_function_impl_o->id = 4;
        if (corto_define(corto_lang_function_impl_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::impl' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::implData */
    if (!corto_checkState(corto_lang_function_implData_o, CORTO_DEFINED)) {
        corto_lang_function_implData_o->type = corto_resolve(NULL, "::corto::lang::word");
        corto_lang_function_implData_o->modifiers = 0x3;
        corto_lang_function_implData_o->state = 0x6;
        corto_lang_function_implData_o->weak = FALSE;
        corto_lang_function_implData_o->id = 5;
        if (corto_define(corto_lang_function_implData_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::implData' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::init() */
    if (!corto_checkState(corto_lang_function_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_function_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_function_init_o)->returnsReference = FALSE;
        corto_lang_function_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_function_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::kind */
    if (!corto_checkState(corto_lang_function_kind_o, CORTO_DEFINED)) {
        corto_lang_function_kind_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function_kind_o->modifiers = 0x3;
        corto_lang_function_kind_o->state = 0x6;
        corto_lang_function_kind_o->weak = FALSE;
        corto_lang_function_kind_o->id = 3;
        if (corto_define(corto_lang_function_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::nextParameterId */
    if (!corto_checkState(corto_lang_function_nextParameterId_o, CORTO_DEFINED)) {
        corto_lang_function_nextParameterId_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function_nextParameterId_o->modifiers = 0x3;
        corto_lang_function_nextParameterId_o->state = 0x6;
        corto_lang_function_nextParameterId_o->weak = FALSE;
        corto_lang_function_nextParameterId_o->id = 9;
        if (corto_define(corto_lang_function_nextParameterId_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::nextParameterId' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::overloaded */
    if (!corto_checkState(corto_lang_function_overloaded_o, CORTO_DEFINED)) {
        corto_lang_function_overloaded_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function_overloaded_o->modifiers = 0x5;
        corto_lang_function_overloaded_o->state = 0x6;
        corto_lang_function_overloaded_o->weak = FALSE;
        corto_lang_function_overloaded_o->id = 2;
        if (corto_define(corto_lang_function_overloaded_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::overloaded' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::parameters */
    if (!corto_checkState(corto_lang_function_parameters_o, CORTO_DEFINED)) {
        corto_lang_function_parameters_o->type = corto_resolve(NULL, "::corto::lang::parameterseq");
        corto_lang_function_parameters_o->modifiers = 0x5;
        corto_lang_function_parameters_o->state = 0x6;
        corto_lang_function_parameters_o->weak = FALSE;
        corto_lang_function_parameters_o->id = 8;
        if (corto_define(corto_lang_function_parameters_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::parameters' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::resource */
    if (!corto_checkState(corto_lang_function_resource_o, CORTO_DEFINED)) {
        corto_lang_function_resource_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function_resource_o->modifiers = 0x3;
        corto_lang_function_resource_o->state = 0x6;
        corto_lang_function_resource_o->weak = FALSE;
        corto_lang_function_resource_o->id = 6;
        if (corto_define(corto_lang_function_resource_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::resource' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::returnsReference */
    if (!corto_checkState(corto_lang_function_returnsReference_o, CORTO_DEFINED)) {
        corto_lang_function_returnsReference_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function_returnsReference_o->modifiers = 0x0;
        corto_lang_function_returnsReference_o->state = 0x6;
        corto_lang_function_returnsReference_o->weak = FALSE;
        corto_lang_function_returnsReference_o->id = 1;
        if (corto_define(corto_lang_function_returnsReference_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::returnsReference' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::returnType */
    if (!corto_checkState(corto_lang_function_returnType_o, CORTO_DEFINED)) {
        corto_lang_function_returnType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_function_returnType_o->modifiers = 0x0;
        corto_lang_function_returnType_o->state = 0x2;
        corto_lang_function_returnType_o->weak = FALSE;
        corto_lang_function_returnType_o->id = 0;
        if (corto_define(corto_lang_function_returnType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::returnType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::size */
    if (!corto_checkState(corto_lang_function_size_o, CORTO_DEFINED)) {
        corto_lang_function_size_o->type = corto_resolve(NULL, "::corto::lang::uint16");
        corto_lang_function_size_o->modifiers = 0x3;
        corto_lang_function_size_o->state = 0x6;
        corto_lang_function_size_o->weak = FALSE;
        corto_lang_function_size_o->id = 7;
        if (corto_define(corto_lang_function_size_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::size' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::stringToParameterSeq(string name,object scope) */
    if (!corto_checkState(corto_lang_function_stringToParameterSeq_o, CORTO_DEFINED)) {
        corto_lang_function_stringToParameterSeq_o->returnType = corto_resolve(NULL, "::corto::lang::parameterseq");
        corto_lang_function_stringToParameterSeq_o->returnsReference = FALSE;
        
        if (corto_define(corto_lang_function_stringToParameterSeq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::stringToParameterSeq(string name,object scope)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::function::unbind(function object) */
    if (!corto_checkState(corto_lang_function_unbind_o, CORTO_DEFINED)) {
        corto_lang_function_unbind_o->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function_unbind_o->returnsReference = FALSE;
        
        if (corto_define(corto_lang_function_unbind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::function::unbind(function object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::initAction */
    if (!corto_checkState(corto_lang_initAction_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_initAction_o)->parentType = NULL;
        corto_lang_type(corto_lang_initAction_o)->parentState = 0x6;
        corto_lang_type(corto_lang_initAction_o)->defaultType = NULL;
        corto_lang_type(corto_lang_initAction_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_initAction_o)->base = corto_resolve(NULL, "::corto::lang::delegatedata");
        corto_lang_struct(corto_lang_initAction_o)->baseAccess = 0x0;
        corto_lang_initAction_o->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_initAction_o->returnsReference = FALSE;
        corto_lang_initAction_o->parameters.length = 0;
        corto_lang_initAction_o->parameters.buffer = NULL;
        if (corto_define(corto_lang_initAction_o)) {
            corto_error("lang_load: failed to define '::corto::lang::initAction' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_initAction_o)->size != sizeof(corto_lang_initAction)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::initAction' doesn't match C-type size '%d'", corto_type(corto_lang_initAction_o)->size, sizeof(corto_lang_initAction));
    }

    /* Define ::corto::lang::int */
    if (!corto_checkState(corto_lang_int_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_int_o)->parentType = NULL;
        corto_lang_type(corto_lang_int_o)->parentState = 0x6;
        corto_lang_type(corto_lang_int_o)->defaultType = NULL;
        corto_lang_type(corto_lang_int_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_int_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_int_o)->baseAccess = 0x0;
        corto_lang_int_o->implements.length = 0;
        corto_lang_int_o->implements.buffer = NULL;
        if (corto_define(corto_lang_int_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_int_o)->size != sizeof(struct corto_lang_int_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::int' doesn't match C-type size '%d'", corto_type(corto_lang_int_o)->size, sizeof(struct corto_lang_int_s));
    }

    /* Define ::corto::lang::int::init() */
    if (!corto_checkState(corto_lang_int_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_int_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_int_init_o)->returnsReference = FALSE;
        corto_lang_int_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_int_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::int::max */
    if (!corto_checkState(corto_lang_int_max_o, CORTO_DEFINED)) {
        corto_lang_int_max_o->type = corto_resolve(NULL, "::corto::lang::int64");
        corto_lang_int_max_o->modifiers = 0x0;
        corto_lang_int_max_o->state = 0x6;
        corto_lang_int_max_o->weak = FALSE;
        corto_lang_int_max_o->id = 1;
        if (corto_define(corto_lang_int_max_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int::max' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::int::min */
    if (!corto_checkState(corto_lang_int_min_o, CORTO_DEFINED)) {
        corto_lang_int_min_o->type = corto_resolve(NULL, "::corto::lang::int64");
        corto_lang_int_min_o->modifiers = 0x0;
        corto_lang_int_min_o->state = 0x6;
        corto_lang_int_min_o->weak = FALSE;
        corto_lang_int_min_o->id = 0;
        if (corto_define(corto_lang_int_min_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int::min' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::int16 */
    if (!corto_checkState(corto_lang_int16_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_int16_o)->width = LANG_WIDTH_16;
        corto_lang_int16_o->min = -32768;
        corto_lang_int16_o->max = 32767;
        if (corto_define(corto_lang_int16_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int16' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_int16_o)->size != sizeof(corto_lang_int16)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::int16' doesn't match C-type size '%d'", corto_type(corto_lang_int16_o)->size, sizeof(corto_lang_int16));
    }

    /* Define ::corto::lang::int32 */
    if (!corto_checkState(corto_lang_int32_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_int32_o)->width = LANG_WIDTH_32;
        corto_lang_int32_o->min = 2147483648;
        corto_lang_int32_o->max = 2147483647;
        if (corto_define(corto_lang_int32_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int32' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_int32_o)->size != sizeof(corto_lang_int32)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::int32' doesn't match C-type size '%d'", corto_type(corto_lang_int32_o)->size, sizeof(corto_lang_int32));
    }

    /* Define ::corto::lang::int64 */
    if (!corto_checkState(corto_lang_int64_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_int64_o)->width = LANG_WIDTH_64;
        corto_lang_int64_o->min = -9223372036854775808;
        corto_lang_int64_o->max = 9223372036854775807;
        if (corto_define(corto_lang_int64_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int64' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_int64_o)->size != sizeof(corto_lang_int64)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::int64' doesn't match C-type size '%d'", corto_type(corto_lang_int64_o)->size, sizeof(corto_lang_int64));
    }

    /* Define ::corto::lang::int8 */
    if (!corto_checkState(corto_lang_int8_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_int8_o)->width = LANG_WIDTH_8;
        corto_lang_int8_o->min = -128;
        corto_lang_int8_o->max = 127;
        if (corto_define(corto_lang_int8_o)) {
            corto_error("lang_load: failed to define '::corto::lang::int8' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_int8_o)->size != sizeof(corto_lang_int8)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::int8' doesn't match C-type size '%d'", corto_type(corto_lang_int8_o)->size, sizeof(corto_lang_int8));
    }

    /* Define ::corto::lang::interface */
    if (!corto_checkState(corto_lang_interface_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_interface_o)->parentType = NULL;
        corto_lang_type(corto_lang_interface_o)->parentState = 0x6;
        corto_lang_type(corto_lang_interface_o)->defaultType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_type(corto_lang_interface_o)->defaultProcedureType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_interface(corto_lang_interface_o)->base = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_struct(corto_lang_interface_o)->baseAccess = 0x10;
        corto_lang_interface_o->implements.length = 0;
        corto_lang_interface_o->implements.buffer = NULL;
        if (corto_define(corto_lang_interface_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_interface_o)->size != sizeof(struct corto_lang_interface_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::interface' doesn't match C-type size '%d'", corto_type(corto_lang_interface_o)->size, sizeof(struct corto_lang_interface_s));
    }

    /* Define ::corto::lang::interface::base */
    if (!corto_checkState(corto_lang_interface_base_o, CORTO_DEFINED)) {
        corto_lang_interface_base_o->type = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_interface_base_o->modifiers = 0x0;
        corto_lang_interface_base_o->state = 0x4;
        corto_lang_interface_base_o->weak = FALSE;
        corto_lang_interface_base_o->id = 4;
        if (corto_define(corto_lang_interface_base_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::base' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::baseof(interface type) */
    if (!corto_checkState(corto_lang_interface_baseof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_baseof_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_interface_baseof_o)->returnsReference = FALSE;
        corto_lang_interface_baseof_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_baseof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::baseof(interface type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::bindMethod(method method) */
    if (!corto_checkState(corto_lang_interface_bindMethod_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_bindMethod_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_interface_bindMethod_o)->returnsReference = FALSE;
        corto_lang_interface_bindMethod_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_bindMethod_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::bindMethod(method method)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::compatible(type type) */
    if (!corto_checkState(corto_lang_interface_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_interface_compatible_o)->returnsReference = FALSE;
        corto_lang_interface_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_interface_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::construct() */
    if (!corto_checkState(corto_lang_interface_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_interface_construct_o)->returnsReference = FALSE;
        corto_lang_interface_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::defaultProcedureType */
    if (!corto_checkState(corto_lang_interface_defaultProcedureType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_interface_defaultProcedureType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_interface_defaultProcedureType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_interface_defaultProcedureType_o)->state = 0x4;
        corto_lang_member(corto_lang_interface_defaultProcedureType_o)->weak = FALSE;
        corto_lang_member(corto_lang_interface_defaultProcedureType_o)->id = 8;
        corto_lang_interface_defaultProcedureType_o->member = corto_resolve(NULL, "::corto::lang::type::defaultProcedureType");
        if (corto_define(corto_lang_interface_defaultProcedureType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::defaultProcedureType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::defaultType */
    if (!corto_checkState(corto_lang_interface_defaultType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_interface_defaultType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_interface_defaultType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_interface_defaultType_o)->state = 0x4;
        corto_lang_member(corto_lang_interface_defaultType_o)->weak = FALSE;
        corto_lang_member(corto_lang_interface_defaultType_o)->id = 7;
        corto_lang_interface_defaultType_o->member = corto_resolve(NULL, "::corto::lang::type::defaultType");
        if (corto_define(corto_lang_interface_defaultType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::defaultType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::destruct() */
    if (!corto_checkState(corto_lang_interface_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_interface_destruct_o)->returnsReference = FALSE;
        corto_lang_interface_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::init() */
    if (!corto_checkState(corto_lang_interface_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_interface_init_o)->returnsReference = FALSE;
        corto_lang_interface_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::kind */
    if (!corto_checkState(corto_lang_interface_kind_o, CORTO_DEFINED)) {
        corto_lang_interface_kind_o->type = corto_resolve(NULL, "::corto::lang::compositeKind");
        corto_lang_interface_kind_o->modifiers = 0x5;
        corto_lang_interface_kind_o->state = 0x6;
        corto_lang_interface_kind_o->weak = FALSE;
        corto_lang_interface_kind_o->id = 0;
        if (corto_define(corto_lang_interface_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::members */
    if (!corto_checkState(corto_lang_interface_members_o, CORTO_DEFINED)) {
        corto_lang_interface_members_o->type = corto_resolve(NULL, "::corto::lang::memberseq");
        corto_lang_interface_members_o->modifiers = 0x3;
        corto_lang_interface_members_o->state = 0x6;
        corto_lang_interface_members_o->weak = FALSE;
        corto_lang_interface_members_o->id = 2;
        if (corto_define(corto_lang_interface_members_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::members' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::methods */
    if (!corto_checkState(corto_lang_interface_methods_o, CORTO_DEFINED)) {
        corto_lang_interface_methods_o->type = corto_resolve(NULL, "::corto::lang::vtable");
        corto_lang_interface_methods_o->modifiers = 0x3;
        corto_lang_interface_methods_o->state = 0x6;
        corto_lang_interface_methods_o->weak = FALSE;
        corto_lang_interface_methods_o->id = 3;
        if (corto_define(corto_lang_interface_methods_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::methods' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::nextMemberId */
    if (!corto_checkState(corto_lang_interface_nextMemberId_o, CORTO_DEFINED)) {
        corto_lang_interface_nextMemberId_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_interface_nextMemberId_o->modifiers = 0x3;
        corto_lang_interface_nextMemberId_o->state = 0x6;
        corto_lang_interface_nextMemberId_o->weak = FALSE;
        corto_lang_interface_nextMemberId_o->id = 1;
        if (corto_define(corto_lang_interface_nextMemberId_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::nextMemberId' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::parentState */
    if (!corto_checkState(corto_lang_interface_parentState_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_interface_parentState_o)->type = corto_resolve(NULL, "::corto::lang::state");
        corto_lang_member(corto_lang_interface_parentState_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_interface_parentState_o)->state = 0x6;
        corto_lang_member(corto_lang_interface_parentState_o)->weak = FALSE;
        corto_lang_member(corto_lang_interface_parentState_o)->id = 6;
        corto_lang_interface_parentState_o->member = corto_resolve(NULL, "::corto::lang::type::parentState");
        if (corto_define(corto_lang_interface_parentState_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::parentState' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::parentType */
    if (!corto_checkState(corto_lang_interface_parentType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_interface_parentType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_interface_parentType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_interface_parentType_o)->state = 0x4;
        corto_lang_member(corto_lang_interface_parentType_o)->weak = FALSE;
        corto_lang_member(corto_lang_interface_parentType_o)->id = 5;
        corto_lang_interface_parentType_o->member = corto_resolve(NULL, "::corto::lang::type::parentType");
        if (corto_define(corto_lang_interface_parentType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::parentType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::resolveMember(string name) */
    if (!corto_checkState(corto_lang_interface_resolveMember_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_resolveMember_o)->returnType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_function(corto_lang_interface_resolveMember_o)->returnsReference = TRUE;
        corto_lang_interface_resolveMember_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_interface_resolveMember_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::resolveMember(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::resolveMethod(string name) */
    if (!corto_checkState(corto_lang_interface_resolveMethod_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_resolveMethod_o)->returnType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_function(corto_lang_interface_resolveMethod_o)->returnsReference = TRUE;
        corto_lang_interface_resolveMethod_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_resolveMethod_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::resolveMethod(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::resolveMethodById(uint32 id) */
    if (!corto_checkState(corto_lang_interface_resolveMethodById_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_resolveMethodById_o)->returnType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_function(corto_lang_interface_resolveMethodById_o)->returnsReference = TRUE;
        corto_lang_interface_resolveMethodById_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_resolveMethodById_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::resolveMethodById(uint32 id)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interface::resolveMethodId(string name) */
    if (!corto_checkState(corto_lang_interface_resolveMethodId_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_interface_resolveMethodId_o)->returnType = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function(corto_lang_interface_resolveMethodId_o)->returnsReference = FALSE;
        corto_lang_interface_resolveMethodId_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_interface_resolveMethodId_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interface::resolveMethodId(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interfaceseq */
    if (!corto_checkState(corto_lang_interfaceseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_interfaceseq_o)->elementType = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_collection(corto_lang_interfaceseq_o)->max = 0;
        if (corto_define(corto_lang_interfaceseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interfaceseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_interfaceseq_o)->size != sizeof(corto_lang_interfaceseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::interfaceseq' doesn't match C-type size '%d'", corto_type(corto_lang_interfaceseq_o)->size, sizeof(corto_lang_interfaceseq));
    }

    /* Define ::corto::lang::interfaceVector */
    if (!corto_checkState(corto_lang_interfaceVector_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_interfaceVector_o)->parentType = NULL;
        corto_lang_type(corto_lang_interfaceVector_o)->parentState = 0x6;
        corto_lang_type(corto_lang_interfaceVector_o)->defaultType = NULL;
        corto_lang_type(corto_lang_interfaceVector_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_interfaceVector_o)->base = NULL;
        corto_lang_interfaceVector_o->baseAccess = 0x1;
        if (corto_define(corto_lang_interfaceVector_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interfaceVector' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_interfaceVector_o)->size != sizeof(corto_lang_interfaceVector)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::interfaceVector' doesn't match C-type size '%d'", corto_type(corto_lang_interfaceVector_o)->size, sizeof(corto_lang_interfaceVector));
    }

    /* Define ::corto::lang::interfaceVector::interface */
    if (!corto_checkState(corto_lang_interfaceVector_interface_o, CORTO_DEFINED)) {
        corto_lang_interfaceVector_interface_o->type = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_interfaceVector_interface_o->modifiers = 0x0;
        corto_lang_interfaceVector_interface_o->state = 0x6;
        corto_lang_interfaceVector_interface_o->weak = FALSE;
        corto_lang_interfaceVector_interface_o->id = 0;
        if (corto_define(corto_lang_interfaceVector_interface_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interfaceVector::interface' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interfaceVector::vector */
    if (!corto_checkState(corto_lang_interfaceVector_vector_o, CORTO_DEFINED)) {
        corto_lang_interfaceVector_vector_o->type = corto_resolve(NULL, "::corto::lang::vtable");
        corto_lang_interfaceVector_vector_o->modifiers = 0x0;
        corto_lang_interfaceVector_vector_o->state = 0x6;
        corto_lang_interfaceVector_vector_o->weak = FALSE;
        corto_lang_interfaceVector_vector_o->id = 1;
        if (corto_define(corto_lang_interfaceVector_vector_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interfaceVector::vector' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::interfaceVectorseq */
    if (!corto_checkState(corto_lang_interfaceVectorseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_interfaceVectorseq_o)->elementType = corto_resolve(NULL, "::corto::lang::interfaceVector");
        corto_lang_collection(corto_lang_interfaceVectorseq_o)->max = 0;
        if (corto_define(corto_lang_interfaceVectorseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::interfaceVectorseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_interfaceVectorseq_o)->size != sizeof(corto_lang_interfaceVectorseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::interfaceVectorseq' doesn't match C-type size '%d'", corto_type(corto_lang_interfaceVectorseq_o)->size, sizeof(corto_lang_interfaceVectorseq));
    }

    /* Define ::corto::lang::invokeAction */
    if (!corto_checkState(corto_lang_invokeAction_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_invokeAction_o)->parentType = NULL;
        corto_lang_type(corto_lang_invokeAction_o)->parentState = 0x6;
        corto_lang_type(corto_lang_invokeAction_o)->defaultType = NULL;
        corto_lang_type(corto_lang_invokeAction_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_invokeAction_o)->base = corto_resolve(NULL, "::corto::lang::delegatedata");
        corto_lang_struct(corto_lang_invokeAction_o)->baseAccess = 0x0;
        corto_lang_invokeAction_o->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_invokeAction_o->returnsReference = FALSE;
        corto_lang_invokeAction_o->parameters.length = 3;
        corto_lang_invokeAction_o->parameters.buffer = corto_alloc(sizeof(corto_lang_parameter) * 3);
        corto_lang_invokeAction_o->parameters.buffer[0].name = corto_strdup("instance");
        corto_lang_invokeAction_o->parameters.buffer[0].type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_invokeAction_o->parameters.buffer[0].passByReference = FALSE;
        corto_lang_invokeAction_o->parameters.buffer[1].name = corto_strdup("function");
        corto_lang_invokeAction_o->parameters.buffer[1].type = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_invokeAction_o->parameters.buffer[1].passByReference = FALSE;
        corto_lang_invokeAction_o->parameters.buffer[2].name = corto_strdup("args");
        corto_lang_invokeAction_o->parameters.buffer[2].type = corto_resolve(NULL, "::corto::lang::octetseq");
        corto_lang_invokeAction_o->parameters.buffer[2].passByReference = FALSE;
        if (corto_define(corto_lang_invokeAction_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeAction' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_invokeAction_o)->size != sizeof(corto_lang_invokeAction)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::invokeAction' doesn't match C-type size '%d'", corto_type(corto_lang_invokeAction_o)->size, sizeof(corto_lang_invokeAction));
    }

    /* Define ::corto::lang::invokeEvent */
    if (!corto_checkState(corto_lang_invokeEvent_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_invokeEvent_o)->parentType = NULL;
        corto_lang_type(corto_lang_invokeEvent_o)->parentState = 0x6;
        corto_lang_type(corto_lang_invokeEvent_o)->defaultType = NULL;
        corto_lang_type(corto_lang_invokeEvent_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_invokeEvent_o)->base = corto_resolve(NULL, "::corto::lang::event");
        corto_lang_struct(corto_lang_invokeEvent_o)->baseAccess = 0x4;
        corto_lang_invokeEvent_o->implements.length = 0;
        corto_lang_invokeEvent_o->implements.buffer = NULL;
        if (corto_define(corto_lang_invokeEvent_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_invokeEvent_o)->size != sizeof(struct corto_lang_invokeEvent_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::invokeEvent' doesn't match C-type size '%d'", corto_type(corto_lang_invokeEvent_o)->size, sizeof(struct corto_lang_invokeEvent_s));
    }

    /* Define ::corto::lang::invokeEvent::args */
    if (!corto_checkState(corto_lang_invokeEvent_args_o, CORTO_DEFINED)) {
        corto_lang_invokeEvent_args_o->type = corto_resolve(NULL, "::corto::lang::octetseq");
        corto_lang_invokeEvent_args_o->modifiers = 0x0;
        corto_lang_invokeEvent_args_o->state = 0x6;
        corto_lang_invokeEvent_args_o->weak = FALSE;
        corto_lang_invokeEvent_args_o->id = 3;
        if (corto_define(corto_lang_invokeEvent_args_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent::args' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::invokeEvent::function */
    if (!corto_checkState(corto_lang_invokeEvent_function_o, CORTO_DEFINED)) {
        corto_lang_invokeEvent_function_o->type = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_invokeEvent_function_o->modifiers = 0x0;
        corto_lang_invokeEvent_function_o->state = 0x6;
        corto_lang_invokeEvent_function_o->weak = FALSE;
        corto_lang_invokeEvent_function_o->id = 2;
        if (corto_define(corto_lang_invokeEvent_function_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent::function' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::invokeEvent::ref() */
    if (!corto_checkState(corto_lang_invokeEvent_handle_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_invokeEvent_handle_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_invokeEvent_handle_o)->returnsReference = FALSE;
        corto_lang_invokeEvent_handle_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_invokeEvent_handle_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent::ref()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::invokeEvent::instance */
    if (!corto_checkState(corto_lang_invokeEvent_instance_o, CORTO_DEFINED)) {
        corto_lang_invokeEvent_instance_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_invokeEvent_instance_o->modifiers = 0x0;
        corto_lang_invokeEvent_instance_o->state = 0x6;
        corto_lang_invokeEvent_instance_o->weak = FALSE;
        corto_lang_invokeEvent_instance_o->id = 1;
        if (corto_define(corto_lang_invokeEvent_instance_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent::instance' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::invokeEvent::mount */
    if (!corto_checkState(corto_lang_invokeEvent_mount_o, CORTO_DEFINED)) {
        corto_lang_invokeEvent_mount_o->type = corto_resolve(NULL, "::corto::lang::mount");
        corto_lang_invokeEvent_mount_o->modifiers = 0x0;
        corto_lang_invokeEvent_mount_o->state = 0x6;
        corto_lang_invokeEvent_mount_o->weak = FALSE;
        corto_lang_invokeEvent_mount_o->id = 0;
        if (corto_define(corto_lang_invokeEvent_mount_o)) {
            corto_error("lang_load: failed to define '::corto::lang::invokeEvent::mount' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::iterator */
    if (!corto_checkState(corto_lang_iterator_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_iterator_o)->parentType = NULL;
        corto_lang_type(corto_lang_iterator_o)->parentState = 0x6;
        corto_lang_type(corto_lang_iterator_o)->defaultType = NULL;
        corto_lang_type(corto_lang_iterator_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_iterator_o)->base = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_struct(corto_lang_iterator_o)->baseAccess = 0x5;
        corto_lang_iterator_o->implements.length = 0;
        corto_lang_iterator_o->implements.buffer = NULL;
        if (corto_define(corto_lang_iterator_o)) {
            corto_error("lang_load: failed to define '::corto::lang::iterator' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_iterator_o)->size != sizeof(struct corto_lang_iterator_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::iterator' doesn't match C-type size '%d'", corto_type(corto_lang_iterator_o)->size, sizeof(struct corto_lang_iterator_s));
    }

    /* Define ::corto::lang::iterator::castable(type type) */
    if (!corto_checkState(corto_lang_iterator_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_iterator_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_iterator_castable_o)->returnsReference = FALSE;
        corto_lang_iterator_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_iterator_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::iterator::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::iterator::compatible(type type) */
    if (!corto_checkState(corto_lang_iterator_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_iterator_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_iterator_compatible_o)->returnsReference = FALSE;
        corto_lang_iterator_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_iterator_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::iterator::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::iterator::elementType */
    if (!corto_checkState(corto_lang_iterator_elementType_o, CORTO_DEFINED)) {
        corto_lang_iterator_elementType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_iterator_elementType_o->modifiers = 0x0;
        corto_lang_iterator_elementType_o->state = 0x2;
        corto_lang_iterator_elementType_o->weak = FALSE;
        corto_lang_iterator_elementType_o->id = 0;
        if (corto_define(corto_lang_iterator_elementType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::iterator::elementType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::iterator::init() */
    if (!corto_checkState(corto_lang_iterator_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_iterator_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_iterator_init_o)->returnsReference = FALSE;
        corto_lang_iterator_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_iterator_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::iterator::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list */
    if (!corto_checkState(corto_lang_list_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_list_o)->parentType = NULL;
        corto_lang_type(corto_lang_list_o)->parentState = 0x6;
        corto_lang_type(corto_lang_list_o)->defaultType = NULL;
        corto_lang_type(corto_lang_list_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_list_o)->base = corto_resolve(NULL, "::corto::lang::collection");
        corto_lang_struct(corto_lang_list_o)->baseAccess = 0x0;
        corto_lang_list_o->implements.length = 0;
        corto_lang_list_o->implements.buffer = NULL;
        if (corto_define(corto_lang_list_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_list_o)->size != sizeof(struct corto_lang_list_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::list' doesn't match C-type size '%d'", corto_type(corto_lang_list_o)->size, sizeof(struct corto_lang_list_s));
    }

    /* Define ::corto::lang::list::append() */
    if (!corto_checkState(corto_lang_list_append__o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_append__o)->returnType = corto_resolve(NULL, "::corto::lang::any");
        corto_lang_function(corto_lang_list_append__o)->returnsReference = FALSE;
        corto_lang_list_append__o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_append__o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::append()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::append(any element) */
    if (!corto_checkState(corto_lang_list_append_any_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_append_any_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_list_append_any_o)->returnsReference = FALSE;
        corto_lang_list_append_any_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_append_any_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::append(any element)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::clear() */
    if (!corto_checkState(corto_lang_list_clear_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_clear_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_list_clear_o)->returnsReference = FALSE;
        corto_lang_list_clear_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_clear_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::clear()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::construct() */
    if (!corto_checkState(corto_lang_list_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_list_construct_o)->returnsReference = FALSE;
        corto_lang_list_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_list_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::init() */
    if (!corto_checkState(corto_lang_list_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_list_init_o)->returnsReference = FALSE;
        corto_lang_list_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_list_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::insert() */
    if (!corto_checkState(corto_lang_list_insert__o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_insert__o)->returnType = corto_resolve(NULL, "::corto::lang::any");
        corto_lang_function(corto_lang_list_insert__o)->returnsReference = FALSE;
        corto_lang_list_insert__o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_insert__o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::insert()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::insert(any element) */
    if (!corto_checkState(corto_lang_list_insert_any_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_insert_any_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_list_insert_any_o)->returnsReference = FALSE;
        corto_lang_list_insert_any_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_insert_any_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::insert(any element)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::list::reverse() */
    if (!corto_checkState(corto_lang_list_reverse_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_list_reverse_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_list_reverse_o)->returnsReference = FALSE;
        corto_lang_list_reverse_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_list_reverse_o)) {
            corto_error("lang_load: failed to define '::corto::lang::list::reverse()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::map */
    if (!corto_checkState(corto_lang_map_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_map_o)->parentType = NULL;
        corto_lang_type(corto_lang_map_o)->parentState = 0x6;
        corto_lang_type(corto_lang_map_o)->defaultType = NULL;
        corto_lang_type(corto_lang_map_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_map_o)->base = corto_resolve(NULL, "::corto::lang::collection");
        corto_lang_struct(corto_lang_map_o)->baseAccess = 0x1;
        corto_lang_map_o->implements.length = 0;
        corto_lang_map_o->implements.buffer = NULL;
        if (corto_define(corto_lang_map_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_map_o)->size != sizeof(struct corto_lang_map_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::map' doesn't match C-type size '%d'", corto_type(corto_lang_map_o)->size, sizeof(struct corto_lang_map_s));
    }

    /* Define ::corto::lang::map::construct() */
    if (!corto_checkState(corto_lang_map_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_map_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_map_construct_o)->returnsReference = FALSE;
        corto_lang_map_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_map_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::map::elementType */
    if (!corto_checkState(corto_lang_map_elementType_o, CORTO_DEFINED)) {
        corto_lang_map_elementType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_map_elementType_o->modifiers = 0x0;
        corto_lang_map_elementType_o->state = 0x6;
        corto_lang_map_elementType_o->weak = FALSE;
        corto_lang_map_elementType_o->id = 0;
        if (corto_define(corto_lang_map_elementType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map::elementType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::map::init() */
    if (!corto_checkState(corto_lang_map_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_map_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_map_init_o)->returnsReference = FALSE;
        corto_lang_map_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_map_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::map::keyType */
    if (!corto_checkState(corto_lang_map_keyType_o, CORTO_DEFINED)) {
        corto_lang_map_keyType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_map_keyType_o->modifiers = 0x0;
        corto_lang_map_keyType_o->state = 0x6;
        corto_lang_map_keyType_o->weak = FALSE;
        corto_lang_map_keyType_o->id = 1;
        if (corto_define(corto_lang_map_keyType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map::keyType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::map::max */
    if (!corto_checkState(corto_lang_map_max_o, CORTO_DEFINED)) {
        corto_lang_map_max_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_map_max_o->modifiers = 0x0;
        corto_lang_map_max_o->state = 0x6;
        corto_lang_map_max_o->weak = FALSE;
        corto_lang_map_max_o->id = 2;
        if (corto_define(corto_lang_map_max_o)) {
            corto_error("lang_load: failed to define '::corto::lang::map::max' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member */
    if (!corto_checkState(corto_lang_member_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_member_o)->parentType = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_type(corto_lang_member_o)->parentState = 0x2;
        corto_lang_type(corto_lang_member_o)->defaultType = NULL;
        corto_lang_type(corto_lang_member_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_member_o)->base = NULL;
        corto_lang_struct(corto_lang_member_o)->baseAccess = 0x1;
        corto_lang_member_o->implements.length = 0;
        corto_lang_member_o->implements.buffer = NULL;
        if (corto_define(corto_lang_member_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_member_o)->size != sizeof(struct corto_lang_member_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::member' doesn't match C-type size '%d'", corto_type(corto_lang_member_o)->size, sizeof(struct corto_lang_member_s));
    }

    /* Define ::corto::lang::member::construct() */
    if (!corto_checkState(corto_lang_member_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_member_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_member_construct_o)->returnsReference = FALSE;
        corto_lang_member_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_member_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::id */
    if (!corto_checkState(corto_lang_member_id_o, CORTO_DEFINED)) {
        corto_lang_member_id_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_member_id_o->modifiers = 0x2;
        corto_lang_member_id_o->state = 0x6;
        corto_lang_member_id_o->weak = FALSE;
        corto_lang_member_id_o->id = 4;
        if (corto_define(corto_lang_member_id_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::id' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::init() */
    if (!corto_checkState(corto_lang_member_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_member_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_member_init_o)->returnsReference = FALSE;
        corto_lang_member_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_member_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::modifiers */
    if (!corto_checkState(corto_lang_member_modifiers_o, CORTO_DEFINED)) {
        corto_lang_member_modifiers_o->type = corto_resolve(NULL, "::corto::lang::modifier");
        corto_lang_member_modifiers_o->modifiers = 0x0;
        corto_lang_member_modifiers_o->state = 0x6;
        corto_lang_member_modifiers_o->weak = FALSE;
        corto_lang_member_modifiers_o->id = 1;
        if (corto_define(corto_lang_member_modifiers_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::modifiers' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::offset */
    if (!corto_checkState(corto_lang_member_offset_o, CORTO_DEFINED)) {
        corto_lang_member_offset_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_member_offset_o->modifiers = 0x3;
        corto_lang_member_offset_o->state = 0x6;
        corto_lang_member_offset_o->weak = FALSE;
        corto_lang_member_offset_o->id = 5;
        if (corto_define(corto_lang_member_offset_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::offset' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::state */
    if (!corto_checkState(corto_lang_member_state_o, CORTO_DEFINED)) {
        corto_lang_member_state_o->type = corto_resolve(NULL, "::corto::lang::state");
        corto_lang_member_state_o->modifiers = 0x10;
        corto_lang_member_state_o->state = 0x6;
        corto_lang_member_state_o->weak = FALSE;
        corto_lang_member_state_o->id = 2;
        if (corto_define(corto_lang_member_state_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::state' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::type */
    if (!corto_checkState(corto_lang_member_type_o, CORTO_DEFINED)) {
        corto_lang_member_type_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member_type_o->modifiers = 0x0;
        corto_lang_member_type_o->state = 0x6;
        corto_lang_member_type_o->weak = FALSE;
        corto_lang_member_type_o->id = 0;
        if (corto_define(corto_lang_member_type_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::type' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::member::weak */
    if (!corto_checkState(corto_lang_member_weak_o, CORTO_DEFINED)) {
        corto_lang_member_weak_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_member_weak_o->modifiers = 0x10;
        corto_lang_member_weak_o->state = 0x6;
        corto_lang_member_weak_o->weak = FALSE;
        corto_lang_member_weak_o->id = 3;
        if (corto_define(corto_lang_member_weak_o)) {
            corto_error("lang_load: failed to define '::corto::lang::member::weak' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::memberseq */
    if (!corto_checkState(corto_lang_memberseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_memberseq_o)->elementType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_collection(corto_lang_memberseq_o)->max = 0;
        if (corto_define(corto_lang_memberseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::memberseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_memberseq_o)->size != sizeof(corto_lang_memberseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::memberseq' doesn't match C-type size '%d'", corto_type(corto_lang_memberseq_o)->size, sizeof(corto_lang_memberseq));
    }

    /* Define ::corto::lang::metaprocedure */
    if (!corto_checkState(corto_lang_metaprocedure_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_metaprocedure_o)->parentType = NULL;
        corto_lang_type(corto_lang_metaprocedure_o)->parentState = 0x2;
        corto_lang_type(corto_lang_metaprocedure_o)->defaultType = NULL;
        corto_lang_type(corto_lang_metaprocedure_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_metaprocedure_o)->base = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_struct(corto_lang_metaprocedure_o)->baseAccess = 0x0;
        corto_lang_metaprocedure_o->kind = LANG_METAPROCEDURE;
        if (corto_define(corto_lang_metaprocedure_o)) {
            corto_error("lang_load: failed to define '::corto::lang::metaprocedure' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_metaprocedure_o)->size != sizeof(struct corto_lang_metaprocedure_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::metaprocedure' doesn't match C-type size '%d'", corto_type(corto_lang_metaprocedure_o)->size, sizeof(struct corto_lang_metaprocedure_s));
    }

    /* Define ::corto::lang::metaprocedure::bind() */
    if (!corto_checkState(corto_lang_metaprocedure_bind_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_metaprocedure_bind_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_metaprocedure_bind_o)->returnsReference = FALSE;
        corto_lang_metaprocedure_bind_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_metaprocedure_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::metaprocedure::bind()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::metaprocedure::referenceOnly */
    if (!corto_checkState(corto_lang_metaprocedure_referenceOnly_o, CORTO_DEFINED)) {
        corto_lang_metaprocedure_referenceOnly_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_metaprocedure_referenceOnly_o->modifiers = 0x0;
        corto_lang_metaprocedure_referenceOnly_o->state = 0x6;
        corto_lang_metaprocedure_referenceOnly_o->weak = FALSE;
        corto_lang_metaprocedure_referenceOnly_o->id = 0;
        if (corto_define(corto_lang_metaprocedure_referenceOnly_o)) {
            corto_error("lang_load: failed to define '::corto::lang::metaprocedure::referenceOnly' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::method */
    if (!corto_checkState(corto_lang_method_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_method_o)->parentType = NULL;
        corto_lang_type(corto_lang_method_o)->parentState = 0x2;
        corto_lang_type(corto_lang_method_o)->defaultType = NULL;
        corto_lang_type(corto_lang_method_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_method_o)->base = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_struct(corto_lang_method_o)->baseAccess = 0x0;
        corto_lang_method_o->kind = LANG_METHOD;
        if (corto_define(corto_lang_method_o)) {
            corto_error("lang_load: failed to define '::corto::lang::method' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_method_o)->size != sizeof(struct corto_lang_method_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::method' doesn't match C-type size '%d'", corto_type(corto_lang_method_o)->size, sizeof(struct corto_lang_method_s));
    }

    /* Define ::corto::lang::method::bind() */
    if (!corto_checkState(corto_lang_method_bind_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_method_bind_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_method_bind_o)->returnsReference = FALSE;
        corto_lang_method_bind_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_method_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::method::bind()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::method::init() */
    if (!corto_checkState(corto_lang_method_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_method_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_method_init_o)->returnsReference = FALSE;
        corto_lang_method_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_method_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::method::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::method::virtual */
    if (!corto_checkState(corto_lang_method_virtual_o, CORTO_DEFINED)) {
        corto_lang_method_virtual_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_method_virtual_o->modifiers = 0x0;
        corto_lang_method_virtual_o->state = 0x6;
        corto_lang_method_virtual_o->weak = FALSE;
        corto_lang_method_virtual_o->id = 0;
        if (corto_define(corto_lang_method_virtual_o)) {
            corto_error("lang_load: failed to define '::corto::lang::method::virtual' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier */
    if (!corto_checkState(corto_lang_modifier_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_modifier_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_modifier_o)->size != sizeof(corto_lang_modifier)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::modifier' doesn't match C-type size '%d'", corto_type(corto_lang_modifier_o)->size, sizeof(corto_lang_modifier));
    }

    /* Define ::corto::lang::modifier::CONST */
    if (!corto_checkState(corto_lang_modifier_CONST_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_CONST_o) = 8;
        if (corto_define(corto_lang_modifier_CONST_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::CONST' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier::GLOBAL */
    if (!corto_checkState(corto_lang_modifier_GLOBAL_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_GLOBAL_o) = 0;
        if (corto_define(corto_lang_modifier_GLOBAL_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::GLOBAL' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier::HIDDEN */
    if (!corto_checkState(corto_lang_modifier_HIDDEN_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_HIDDEN_o) = 16;
        if (corto_define(corto_lang_modifier_HIDDEN_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::HIDDEN' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier::LOCAL */
    if (!corto_checkState(corto_lang_modifier_LOCAL_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_LOCAL_o) = 1;
        if (corto_define(corto_lang_modifier_LOCAL_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::LOCAL' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier::PRIVATE */
    if (!corto_checkState(corto_lang_modifier_PRIVATE_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_PRIVATE_o) = 2;
        if (corto_define(corto_lang_modifier_PRIVATE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::PRIVATE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::modifier::READONLY */
    if (!corto_checkState(corto_lang_modifier_READONLY_o, CORTO_DEFINED)) {
        (*corto_lang_modifier_READONLY_o) = 4;
        if (corto_define(corto_lang_modifier_READONLY_o)) {
            corto_error("lang_load: failed to define '::corto::lang::modifier::READONLY' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::notifyAction */
    if (!corto_checkState(corto_lang_notifyAction_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_notifyAction_o)->parentType = NULL;
        corto_lang_type(corto_lang_notifyAction_o)->parentState = 0x6;
        corto_lang_type(corto_lang_notifyAction_o)->defaultType = NULL;
        corto_lang_type(corto_lang_notifyAction_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_notifyAction_o)->base = corto_resolve(NULL, "::corto::lang::delegatedata");
        corto_lang_struct(corto_lang_notifyAction_o)->baseAccess = 0x0;
        corto_lang_notifyAction_o->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_notifyAction_o->returnsReference = FALSE;
        corto_lang_notifyAction_o->parameters.length = 1;
        corto_lang_notifyAction_o->parameters.buffer = corto_alloc(sizeof(corto_lang_parameter));
        corto_lang_notifyAction_o->parameters.buffer[0].name = corto_strdup("observable");
        corto_lang_notifyAction_o->parameters.buffer[0].type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_notifyAction_o->parameters.buffer[0].passByReference = FALSE;
        if (corto_define(corto_lang_notifyAction_o)) {
            corto_error("lang_load: failed to define '::corto::lang::notifyAction' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_notifyAction_o)->size != sizeof(corto_lang_notifyAction)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::notifyAction' doesn't match C-type size '%d'", corto_type(corto_lang_notifyAction_o)->size, sizeof(corto_lang_notifyAction));
    }

    /* Define ::corto::lang::object */
    if (!corto_checkState(corto_lang_object_o, CORTO_DEFINED)) {
        corto_lang_object_o->parentType = NULL;
        corto_lang_object_o->parentState = 0x6;
        corto_lang_object_o->defaultType = NULL;
        corto_lang_object_o->defaultProcedureType = NULL;
        if (corto_define(corto_lang_object_o)) {
            corto_error("lang_load: failed to define '::corto::lang::object' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_object_o)->size != sizeof(struct corto_lang_object_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::object' doesn't match C-type size '%d'", corto_type(corto_lang_object_o)->size, sizeof(struct corto_lang_object_s));
    }

    /* Define ::corto::lang::objectseq */
    if (!corto_checkState(corto_lang_objectseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_objectseq_o)->elementType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_collection(corto_lang_objectseq_o)->max = 0;
        if (corto_define(corto_lang_objectseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::objectseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_objectseq_o)->size != sizeof(corto_lang_objectseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::objectseq' doesn't match C-type size '%d'", corto_type(corto_lang_objectseq_o)->size, sizeof(corto_lang_objectseq));
    }

    /* Define ::corto::lang::observableEvent */
    if (!corto_checkState(corto_lang_observableEvent_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_observableEvent_o)->parentType = NULL;
        corto_lang_type(corto_lang_observableEvent_o)->parentState = 0x6;
        corto_lang_type(corto_lang_observableEvent_o)->defaultType = NULL;
        corto_lang_type(corto_lang_observableEvent_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_observableEvent_o)->base = corto_resolve(NULL, "::corto::lang::event");
        corto_lang_struct(corto_lang_observableEvent_o)->baseAccess = 0x4;
        corto_lang_observableEvent_o->implements.length = 0;
        corto_lang_observableEvent_o->implements.buffer = NULL;
        if (corto_define(corto_lang_observableEvent_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_observableEvent_o)->size != sizeof(struct corto_lang_observableEvent_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::observableEvent' doesn't match C-type size '%d'", corto_type(corto_lang_observableEvent_o)->size, sizeof(struct corto_lang_observableEvent_s));
    }

    /* Define ::corto::lang::observableEvent::ref() */
    if (!corto_checkState(corto_lang_observableEvent_handle_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observableEvent_handle_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_observableEvent_handle_o)->returnsReference = FALSE;
        corto_lang_observableEvent_handle_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_observableEvent_handle_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent::ref()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observableEvent::me */
    if (!corto_checkState(corto_lang_observableEvent_me_o, CORTO_DEFINED)) {
        corto_lang_observableEvent_me_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observableEvent_me_o->modifiers = 0x0;
        corto_lang_observableEvent_me_o->state = 0x6;
        corto_lang_observableEvent_me_o->weak = FALSE;
        corto_lang_observableEvent_me_o->id = 1;
        if (corto_define(corto_lang_observableEvent_me_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent::me' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observableEvent::observable */
    if (!corto_checkState(corto_lang_observableEvent_observable_o, CORTO_DEFINED)) {
        corto_lang_observableEvent_observable_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observableEvent_observable_o->modifiers = 0x0;
        corto_lang_observableEvent_observable_o->state = 0x6;
        corto_lang_observableEvent_observable_o->weak = FALSE;
        corto_lang_observableEvent_observable_o->id = 3;
        if (corto_define(corto_lang_observableEvent_observable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent::observable' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observableEvent::observer */
    if (!corto_checkState(corto_lang_observableEvent_observer_o, CORTO_DEFINED)) {
        corto_lang_observableEvent_observer_o->type = corto_resolve(NULL, "::corto::lang::observer");
        corto_lang_observableEvent_observer_o->modifiers = 0x0;
        corto_lang_observableEvent_observer_o->state = 0x6;
        corto_lang_observableEvent_observer_o->weak = FALSE;
        corto_lang_observableEvent_observer_o->id = 0;
        if (corto_define(corto_lang_observableEvent_observer_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent::observer' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observableEvent::source */
    if (!corto_checkState(corto_lang_observableEvent_source_o, CORTO_DEFINED)) {
        corto_lang_observableEvent_source_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observableEvent_source_o->modifiers = 0x0;
        corto_lang_observableEvent_source_o->state = 0x6;
        corto_lang_observableEvent_source_o->weak = FALSE;
        corto_lang_observableEvent_source_o->id = 2;
        if (corto_define(corto_lang_observableEvent_source_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observableEvent::source' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer */
    if (!corto_checkState(corto_lang_observer_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_observer_o)->parentType = NULL;
        corto_lang_type(corto_lang_observer_o)->parentState = 0x6;
        corto_lang_type(corto_lang_observer_o)->defaultType = NULL;
        corto_lang_type(corto_lang_observer_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_observer_o)->base = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_struct(corto_lang_observer_o)->baseAccess = 0x5;
        corto_lang_observer_o->kind = LANG_OBSERVER;
        if (corto_define(corto_lang_observer_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_observer_o)->size != sizeof(struct corto_lang_observer_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::observer' doesn't match C-type size '%d'", corto_type(corto_lang_observer_o)->size, sizeof(struct corto_lang_observer_s));
    }

    /* Define ::corto::lang::observer::bind() */
    if (!corto_checkState(corto_lang_observer_bind_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observer_bind_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_observer_bind_o)->returnsReference = FALSE;
        corto_lang_observer_bind_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_observer_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::bind()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::delayedBinder */
    if (!corto_checkState(corto_lang_observer_delayedBinder_o, CORTO_DEFINED)) {
        corto_lang_observer_delayedBinder_o->type = corto_resolve(NULL, "::corto::lang::observer");
        corto_lang_observer_delayedBinder_o->modifiers = 0x3;
        corto_lang_observer_delayedBinder_o->state = 0x6;
        corto_lang_observer_delayedBinder_o->weak = FALSE;
        corto_lang_observer_delayedBinder_o->id = 6;
        if (corto_define(corto_lang_observer_delayedBinder_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::delayedBinder' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::dispatcher */
    if (!corto_checkState(corto_lang_observer_dispatcher_o, CORTO_DEFINED)) {
        corto_lang_observer_dispatcher_o->type = corto_resolve(NULL, "::corto::lang::dispatcher");
        corto_lang_observer_dispatcher_o->modifiers = 0x10;
        corto_lang_observer_dispatcher_o->state = 0x6;
        corto_lang_observer_dispatcher_o->weak = FALSE;
        corto_lang_observer_dispatcher_o->id = 3;
        if (corto_define(corto_lang_observer_dispatcher_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::dispatcher' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::init() */
    if (!corto_checkState(corto_lang_observer_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observer_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_observer_init_o)->returnsReference = FALSE;
        corto_lang_observer_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_observer_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::listen(object observable,object me) */
    if (!corto_checkState(corto_lang_observer_listen_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observer_listen_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_observer_listen_o)->returnsReference = FALSE;
        corto_lang_observer_listen_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_observer_listen_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::listen(object observable,object me)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::mask */
    if (!corto_checkState(corto_lang_observer_mask_o, CORTO_DEFINED)) {
        corto_lang_observer_mask_o->type = corto_resolve(NULL, "::corto::lang::eventMask");
        corto_lang_observer_mask_o->modifiers = 0x0;
        corto_lang_observer_mask_o->state = 0x6;
        corto_lang_observer_mask_o->weak = FALSE;
        corto_lang_observer_mask_o->id = 0;
        if (corto_define(corto_lang_observer_mask_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::mask' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::me */
    if (!corto_checkState(corto_lang_observer_me_o, CORTO_DEFINED)) {
        corto_lang_observer_me_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observer_me_o->modifiers = 0x10;
        corto_lang_observer_me_o->state = 0x6;
        corto_lang_observer_me_o->weak = FALSE;
        corto_lang_observer_me_o->id = 4;
        if (corto_define(corto_lang_observer_me_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::me' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::observable */
    if (!corto_checkState(corto_lang_observer_observable_o, CORTO_DEFINED)) {
        corto_lang_observer_observable_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observer_observable_o->modifiers = 0x0;
        corto_lang_observer_observable_o->state = 0x6;
        corto_lang_observer_observable_o->weak = FALSE;
        corto_lang_observer_observable_o->id = 1;
        if (corto_define(corto_lang_observer_observable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::observable' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::observing */
    if (!corto_checkState(corto_lang_observer_observing_o, CORTO_DEFINED)) {
        corto_lang_observer_observing_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_observer_observing_o->modifiers = 0x3;
        corto_lang_observer_observing_o->state = 0x6;
        corto_lang_observer_observing_o->weak = FALSE;
        corto_lang_observer_observing_o->id = 5;
        if (corto_define(corto_lang_observer_observing_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::observing' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::setDispatcher(dispatcher dispatcher) */
    if (!corto_checkState(corto_lang_observer_setDispatcher_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observer_setDispatcher_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_observer_setDispatcher_o)->returnsReference = FALSE;
        corto_lang_observer_setDispatcher_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_observer_setDispatcher_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::setDispatcher(dispatcher dispatcher)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::silence(object me) */
    if (!corto_checkState(corto_lang_observer_silence_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_observer_silence_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_observer_silence_o)->returnsReference = FALSE;
        corto_lang_observer_silence_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_observer_silence_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::silence(object me)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::template */
    if (!corto_checkState(corto_lang_observer_template_o, CORTO_DEFINED)) {
        corto_lang_observer_template_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_observer_template_o->modifiers = 0x4;
        corto_lang_observer_template_o->state = 0x6;
        corto_lang_observer_template_o->weak = FALSE;
        corto_lang_observer_template_o->id = 2;
        if (corto_define(corto_lang_observer_template_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::template' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observer::unbind(observer object) */
    if (!corto_checkState(corto_lang_observer_unbind_o, CORTO_DEFINED)) {
        corto_lang_observer_unbind_o->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_observer_unbind_o->returnsReference = FALSE;
        
        if (corto_define(corto_lang_observer_unbind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observer::unbind(observer object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::observerseq */
    if (!corto_checkState(corto_lang_observerseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_observerseq_o)->elementType = corto_resolve(NULL, "::corto::lang::observer");
        corto_lang_collection(corto_lang_observerseq_o)->max = 0;
        if (corto_define(corto_lang_observerseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::observerseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_observerseq_o)->size != sizeof(corto_lang_observerseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::observerseq' doesn't match C-type size '%d'", corto_type(corto_lang_observerseq_o)->size, sizeof(corto_lang_observerseq));
    }

    /* Define ::corto::lang::octet */
    if (!corto_checkState(corto_lang_octet_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_octet_o)->width = LANG_WIDTH_8;
        if (corto_define(corto_lang_octet_o)) {
            corto_error("lang_load: failed to define '::corto::lang::octet' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_octet_o)->size != sizeof(corto_lang_octet)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::octet' doesn't match C-type size '%d'", corto_type(corto_lang_octet_o)->size, sizeof(corto_lang_octet));
    }

    /* Define ::corto::lang::octetseq */
    if (!corto_checkState(corto_lang_octetseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_octetseq_o)->elementType = corto_resolve(NULL, "::corto::lang::octet");
        corto_lang_collection(corto_lang_octetseq_o)->max = 0;
        if (corto_define(corto_lang_octetseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::octetseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_octetseq_o)->size != sizeof(corto_lang_octetseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::octetseq' doesn't match C-type size '%d'", corto_type(corto_lang_octetseq_o)->size, sizeof(corto_lang_octetseq));
    }

    /* Define ::corto::lang::operatorKind */
    if (!corto_checkState(corto_lang_operatorKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_operatorKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_operatorKind_o)->size != sizeof(corto_lang_operatorKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::operatorKind' doesn't match C-type size '%d'", corto_type(corto_lang_operatorKind_o)->size, sizeof(corto_lang_operatorKind));
    }

    /* Define ::corto::lang::operatorKind::ADD */
    if (!corto_checkState(corto_lang_operatorKind_ADD_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ADD_o) = 10;
        if (corto_define(corto_lang_operatorKind_ADD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ADD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::AND */
    if (!corto_checkState(corto_lang_operatorKind_AND_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_AND_o) = 19;
        if (corto_define(corto_lang_operatorKind_AND_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::AND' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_o) = 0;
        if (corto_define(corto_lang_operatorKind_ASSIGN_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_ADD */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_ADD_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_ADD_o) = 1;
        if (corto_define(corto_lang_operatorKind_ASSIGN_ADD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_ADD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_AND */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_AND_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_AND_o) = 8;
        if (corto_define(corto_lang_operatorKind_ASSIGN_AND_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_AND' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_DIV */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_DIV_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_DIV_o) = 4;
        if (corto_define(corto_lang_operatorKind_ASSIGN_DIV_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_DIV' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_MOD */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_MOD_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_MOD_o) = 5;
        if (corto_define(corto_lang_operatorKind_ASSIGN_MOD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_MOD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_MUL */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_MUL_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_MUL_o) = 3;
        if (corto_define(corto_lang_operatorKind_ASSIGN_MUL_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_MUL' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_OR */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_OR_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_OR_o) = 7;
        if (corto_define(corto_lang_operatorKind_ASSIGN_OR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_OR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_SUB */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_SUB_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_SUB_o) = 2;
        if (corto_define(corto_lang_operatorKind_ASSIGN_SUB_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_SUB' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_UPDATE */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_UPDATE_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_UPDATE_o) = 9;
        if (corto_define(corto_lang_operatorKind_ASSIGN_UPDATE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_UPDATE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::ASSIGN_XOR */
    if (!corto_checkState(corto_lang_operatorKind_ASSIGN_XOR_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_ASSIGN_XOR_o) = 6;
        if (corto_define(corto_lang_operatorKind_ASSIGN_XOR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::ASSIGN_XOR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_AND */
    if (!corto_checkState(corto_lang_operatorKind_COND_AND_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_AND_o) = 22;
        if (corto_define(corto_lang_operatorKind_COND_AND_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_AND' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_EQ */
    if (!corto_checkState(corto_lang_operatorKind_COND_EQ_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_EQ_o) = 24;
        if (corto_define(corto_lang_operatorKind_COND_EQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_EQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_GT */
    if (!corto_checkState(corto_lang_operatorKind_COND_GT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_GT_o) = 26;
        if (corto_define(corto_lang_operatorKind_COND_GT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_GT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_GTEQ */
    if (!corto_checkState(corto_lang_operatorKind_COND_GTEQ_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_GTEQ_o) = 28;
        if (corto_define(corto_lang_operatorKind_COND_GTEQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_GTEQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_LT */
    if (!corto_checkState(corto_lang_operatorKind_COND_LT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_LT_o) = 27;
        if (corto_define(corto_lang_operatorKind_COND_LT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_LT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_LTEQ */
    if (!corto_checkState(corto_lang_operatorKind_COND_LTEQ_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_LTEQ_o) = 29;
        if (corto_define(corto_lang_operatorKind_COND_LTEQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_LTEQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_NEQ */
    if (!corto_checkState(corto_lang_operatorKind_COND_NEQ_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_NEQ_o) = 25;
        if (corto_define(corto_lang_operatorKind_COND_NEQ_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_NEQ' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_NOT */
    if (!corto_checkState(corto_lang_operatorKind_COND_NOT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_NOT_o) = 23;
        if (corto_define(corto_lang_operatorKind_COND_NOT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_NOT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::COND_OR */
    if (!corto_checkState(corto_lang_operatorKind_COND_OR_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_COND_OR_o) = 21;
        if (corto_define(corto_lang_operatorKind_COND_OR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::COND_OR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::DEC */
    if (!corto_checkState(corto_lang_operatorKind_DEC_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_DEC_o) = 16;
        if (corto_define(corto_lang_operatorKind_DEC_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::DEC' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::DIV */
    if (!corto_checkState(corto_lang_operatorKind_DIV_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_DIV_o) = 13;
        if (corto_define(corto_lang_operatorKind_DIV_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::DIV' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::INC */
    if (!corto_checkState(corto_lang_operatorKind_INC_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_INC_o) = 15;
        if (corto_define(corto_lang_operatorKind_INC_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::INC' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::MOD */
    if (!corto_checkState(corto_lang_operatorKind_MOD_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_MOD_o) = 14;
        if (corto_define(corto_lang_operatorKind_MOD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::MOD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::MUL */
    if (!corto_checkState(corto_lang_operatorKind_MUL_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_MUL_o) = 12;
        if (corto_define(corto_lang_operatorKind_MUL_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::MUL' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::NOT */
    if (!corto_checkState(corto_lang_operatorKind_NOT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_NOT_o) = 20;
        if (corto_define(corto_lang_operatorKind_NOT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::NOT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::OR */
    if (!corto_checkState(corto_lang_operatorKind_OR_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_OR_o) = 18;
        if (corto_define(corto_lang_operatorKind_OR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::OR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::REF */
    if (!corto_checkState(corto_lang_operatorKind_REF_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_REF_o) = 32;
        if (corto_define(corto_lang_operatorKind_REF_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::REF' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::SHIFT_LEFT */
    if (!corto_checkState(corto_lang_operatorKind_SHIFT_LEFT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_SHIFT_LEFT_o) = 30;
        if (corto_define(corto_lang_operatorKind_SHIFT_LEFT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::SHIFT_LEFT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::SHIFT_RIGHT */
    if (!corto_checkState(corto_lang_operatorKind_SHIFT_RIGHT_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_SHIFT_RIGHT_o) = 31;
        if (corto_define(corto_lang_operatorKind_SHIFT_RIGHT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::SHIFT_RIGHT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::SUB */
    if (!corto_checkState(corto_lang_operatorKind_SUB_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_SUB_o) = 11;
        if (corto_define(corto_lang_operatorKind_SUB_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::SUB' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::operatorKind::XOR */
    if (!corto_checkState(corto_lang_operatorKind_XOR_o, CORTO_DEFINED)) {
        (*corto_lang_operatorKind_XOR_o) = 17;
        if (corto_define(corto_lang_operatorKind_XOR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::operatorKind::XOR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::package */
    if (!corto_checkState(corto_lang_package_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_package_o)->parentType = NULL;
        corto_lang_type(corto_lang_package_o)->parentState = 0x6;
        corto_lang_type(corto_lang_package_o)->defaultType = NULL;
        corto_lang_type(corto_lang_package_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_package_o)->base = NULL;
        corto_lang_struct(corto_lang_package_o)->baseAccess = 0x1;
        corto_lang_package_o->implements.length = 0;
        corto_lang_package_o->implements.buffer = NULL;
        if (corto_define(corto_lang_package_o)) {
            corto_error("lang_load: failed to define '::corto::lang::package' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_package_o)->size != sizeof(struct corto_lang_package_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::package' doesn't match C-type size '%d'", corto_type(corto_lang_package_o)->size, sizeof(struct corto_lang_package_s));
    }

    /* Define ::corto::lang::package::url */
    if (!corto_checkState(corto_lang_package_url_o, CORTO_DEFINED)) {
        corto_lang_package_url_o->type = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_package_url_o->modifiers = 0x0;
        corto_lang_package_url_o->state = 0x6;
        corto_lang_package_url_o->weak = FALSE;
        corto_lang_package_url_o->id = 0;
        if (corto_define(corto_lang_package_url_o)) {
            corto_error("lang_load: failed to define '::corto::lang::package::url' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::parameter */
    if (!corto_checkState(corto_lang_parameter_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_parameter_o)->parentType = NULL;
        corto_lang_type(corto_lang_parameter_o)->parentState = 0x6;
        corto_lang_type(corto_lang_parameter_o)->defaultType = NULL;
        corto_lang_type(corto_lang_parameter_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_parameter_o)->base = NULL;
        corto_lang_parameter_o->baseAccess = 0x1;
        if (corto_define(corto_lang_parameter_o)) {
            corto_error("lang_load: failed to define '::corto::lang::parameter' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_parameter_o)->size != sizeof(corto_lang_parameter)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::parameter' doesn't match C-type size '%d'", corto_type(corto_lang_parameter_o)->size, sizeof(corto_lang_parameter));
    }

    /* Define ::corto::lang::parameter::name */
    if (!corto_checkState(corto_lang_parameter_name_o, CORTO_DEFINED)) {
        corto_lang_parameter_name_o->type = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_parameter_name_o->modifiers = 0x0;
        corto_lang_parameter_name_o->state = 0x6;
        corto_lang_parameter_name_o->weak = FALSE;
        corto_lang_parameter_name_o->id = 0;
        if (corto_define(corto_lang_parameter_name_o)) {
            corto_error("lang_load: failed to define '::corto::lang::parameter::name' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::parameter::passByReference */
    if (!corto_checkState(corto_lang_parameter_passByReference_o, CORTO_DEFINED)) {
        corto_lang_parameter_passByReference_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_parameter_passByReference_o->modifiers = 0x0;
        corto_lang_parameter_passByReference_o->state = 0x6;
        corto_lang_parameter_passByReference_o->weak = FALSE;
        corto_lang_parameter_passByReference_o->id = 2;
        if (corto_define(corto_lang_parameter_passByReference_o)) {
            corto_error("lang_load: failed to define '::corto::lang::parameter::passByReference' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::parameter::type */
    if (!corto_checkState(corto_lang_parameter_type_o, CORTO_DEFINED)) {
        corto_lang_parameter_type_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_parameter_type_o->modifiers = 0x0;
        corto_lang_parameter_type_o->state = 0x6;
        corto_lang_parameter_type_o->weak = FALSE;
        corto_lang_parameter_type_o->id = 1;
        if (corto_define(corto_lang_parameter_type_o)) {
            corto_error("lang_load: failed to define '::corto::lang::parameter::type' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::parameterseq */
    if (!corto_checkState(corto_lang_parameterseq_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_parameterseq_o)->elementType = corto_resolve(NULL, "::corto::lang::parameter");
        corto_lang_collection(corto_lang_parameterseq_o)->max = 0;
        if (corto_define(corto_lang_parameterseq_o)) {
            corto_error("lang_load: failed to define '::corto::lang::parameterseq' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_parameterseq_o)->size != sizeof(corto_lang_parameterseq)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::parameterseq' doesn't match C-type size '%d'", corto_type(corto_lang_parameterseq_o)->size, sizeof(corto_lang_parameterseq));
    }

    /* Define ::corto::lang::primitive */
    if (!corto_checkState(corto_lang_primitive_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_primitive_o)->parentType = NULL;
        corto_lang_type(corto_lang_primitive_o)->parentState = 0x6;
        corto_lang_type(corto_lang_primitive_o)->defaultType = NULL;
        corto_lang_type(corto_lang_primitive_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_primitive_o)->base = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_struct(corto_lang_primitive_o)->baseAccess = 0x5;
        corto_lang_primitive_o->implements.length = 0;
        corto_lang_primitive_o->implements.buffer = NULL;
        if (corto_define(corto_lang_primitive_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_primitive_o)->size != sizeof(struct corto_lang_primitive_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::primitive' doesn't match C-type size '%d'", corto_type(corto_lang_primitive_o)->size, sizeof(struct corto_lang_primitive_s));
    }

    /* Define ::corto::lang::primitive::castable(type type) */
    if (!corto_checkState(corto_lang_primitive_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_primitive_castable_o)->returnsReference = FALSE;
        corto_lang_primitive_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_primitive_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::compatible(type type) */
    if (!corto_checkState(corto_lang_primitive_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_primitive_compatible_o)->returnsReference = FALSE;
        corto_lang_primitive_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_primitive_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::construct() */
    if (!corto_checkState(corto_lang_primitive_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_primitive_construct_o)->returnsReference = FALSE;
        corto_lang_primitive_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_primitive_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::convertId */
    if (!corto_checkState(corto_lang_primitive_convertId_o, CORTO_DEFINED)) {
        corto_lang_primitive_convertId_o->type = corto_resolve(NULL, "::corto::lang::uint8");
        corto_lang_primitive_convertId_o->modifiers = 0x3;
        corto_lang_primitive_convertId_o->state = 0x6;
        corto_lang_primitive_convertId_o->weak = FALSE;
        corto_lang_primitive_convertId_o->id = 2;
        if (corto_define(corto_lang_primitive_convertId_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::convertId' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::init() */
    if (!corto_checkState(corto_lang_primitive_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_primitive_init_o)->returnsReference = FALSE;
        corto_lang_primitive_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_primitive_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::isInteger() */
    if (!corto_checkState(corto_lang_primitive_isInteger_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_isInteger_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_primitive_isInteger_o)->returnsReference = FALSE;
        corto_lang_primitive_isInteger_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_primitive_isInteger_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::isInteger()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::isNumber() */
    if (!corto_checkState(corto_lang_primitive_isNumber_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_primitive_isNumber_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_primitive_isNumber_o)->returnsReference = FALSE;
        corto_lang_primitive_isNumber_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_primitive_isNumber_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::isNumber()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::kind */
    if (!corto_checkState(corto_lang_primitive_kind_o, CORTO_DEFINED)) {
        corto_lang_primitive_kind_o->type = corto_resolve(NULL, "::corto::lang::primitiveKind");
        corto_lang_primitive_kind_o->modifiers = 0x5;
        corto_lang_primitive_kind_o->state = 0x6;
        corto_lang_primitive_kind_o->weak = FALSE;
        corto_lang_primitive_kind_o->id = 0;
        if (corto_define(corto_lang_primitive_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitive::width */
    if (!corto_checkState(corto_lang_primitive_width_o, CORTO_DEFINED)) {
        corto_lang_primitive_width_o->type = corto_resolve(NULL, "::corto::lang::width");
        corto_lang_primitive_width_o->modifiers = 0x0;
        corto_lang_primitive_width_o->state = 0x6;
        corto_lang_primitive_width_o->weak = FALSE;
        corto_lang_primitive_width_o->id = 1;
        if (corto_define(corto_lang_primitive_width_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitive::width' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind */
    if (!corto_checkState(corto_lang_primitiveKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_primitiveKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_primitiveKind_o)->size != sizeof(corto_lang_primitiveKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::primitiveKind' doesn't match C-type size '%d'", corto_type(corto_lang_primitiveKind_o)->size, sizeof(corto_lang_primitiveKind));
    }

    /* Define ::corto::lang::primitiveKind::BINARY */
    if (!corto_checkState(corto_lang_primitiveKind_BINARY_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_BINARY_o) = 0;
        if (corto_define(corto_lang_primitiveKind_BINARY_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::BINARY' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::BITMASK */
    if (!corto_checkState(corto_lang_primitiveKind_BITMASK_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_BITMASK_o) = 8;
        if (corto_define(corto_lang_primitiveKind_BITMASK_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::BITMASK' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::BOOLEAN */
    if (!corto_checkState(corto_lang_primitiveKind_BOOLEAN_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_BOOLEAN_o) = 1;
        if (corto_define(corto_lang_primitiveKind_BOOLEAN_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::BOOLEAN' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::CHARACTER */
    if (!corto_checkState(corto_lang_primitiveKind_CHARACTER_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_CHARACTER_o) = 2;
        if (corto_define(corto_lang_primitiveKind_CHARACTER_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::CHARACTER' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::ENUM */
    if (!corto_checkState(corto_lang_primitiveKind_ENUM_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_ENUM_o) = 7;
        if (corto_define(corto_lang_primitiveKind_ENUM_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::ENUM' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::FLOAT */
    if (!corto_checkState(corto_lang_primitiveKind_FLOAT_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_FLOAT_o) = 5;
        if (corto_define(corto_lang_primitiveKind_FLOAT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::FLOAT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::INTEGER */
    if (!corto_checkState(corto_lang_primitiveKind_INTEGER_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_INTEGER_o) = 3;
        if (corto_define(corto_lang_primitiveKind_INTEGER_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::INTEGER' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::TEXT */
    if (!corto_checkState(corto_lang_primitiveKind_TEXT_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_TEXT_o) = 6;
        if (corto_define(corto_lang_primitiveKind_TEXT_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::TEXT' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::primitiveKind::UINTEGER */
    if (!corto_checkState(corto_lang_primitiveKind_UINTEGER_o, CORTO_DEFINED)) {
        (*corto_lang_primitiveKind_UINTEGER_o) = 4;
        if (corto_define(corto_lang_primitiveKind_UINTEGER_o)) {
            corto_error("lang_load: failed to define '::corto::lang::primitiveKind::UINTEGER' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedure */
    if (!corto_checkState(corto_lang_procedure_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_procedure_o)->parentType = NULL;
        corto_lang_type(corto_lang_procedure_o)->parentState = 0x6;
        corto_lang_type(corto_lang_procedure_o)->defaultType = NULL;
        corto_lang_type(corto_lang_procedure_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_procedure_o)->base = corto_resolve(NULL, "::corto::lang::struct");
        corto_lang_struct(corto_lang_procedure_o)->baseAccess = 0x0;
        corto_lang_procedure_o->implements.length = 0;
        corto_lang_procedure_o->implements.buffer = NULL;
        if (corto_define(corto_lang_procedure_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedure' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_procedure_o)->size != sizeof(struct corto_lang_procedure_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::procedure' doesn't match C-type size '%d'", corto_type(corto_lang_procedure_o)->size, sizeof(struct corto_lang_procedure_s));
    }

    /* Define ::corto::lang::procedure::bind */
    if (!corto_checkState(corto_lang_procedure_bind_o, CORTO_DEFINED)) {
        corto_lang_procedure_bind_o->type = corto_resolve(NULL, "::corto::lang::initAction");
        corto_lang_procedure_bind_o->modifiers = 0x5;
        corto_lang_procedure_bind_o->state = 0x6;
        corto_lang_procedure_bind_o->weak = FALSE;
        corto_lang_procedure_bind_o->id = 1;
        if (corto_define(corto_lang_procedure_bind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedure::bind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedure::init() */
    if (!corto_checkState(corto_lang_procedure_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_procedure_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_procedure_init_o)->returnsReference = FALSE;
        corto_lang_procedure_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_procedure_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedure::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedure::kind */
    if (!corto_checkState(corto_lang_procedure_kind_o, CORTO_DEFINED)) {
        corto_lang_procedure_kind_o->type = corto_resolve(NULL, "::corto::lang::procedureKind");
        corto_lang_procedure_kind_o->modifiers = 0x0;
        corto_lang_procedure_kind_o->state = 0x6;
        corto_lang_procedure_kind_o->weak = FALSE;
        corto_lang_procedure_kind_o->id = 0;
        if (corto_define(corto_lang_procedure_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedure::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedure::unbind(function object) */
    if (!corto_checkState(corto_lang_procedure_unbind_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_procedure_unbind_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_procedure_unbind_o)->returnsReference = FALSE;
        corto_lang_procedure_unbind_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_procedure_unbind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedure::unbind(function object)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedureKind */
    if (!corto_checkState(corto_lang_procedureKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_procedureKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedureKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_procedureKind_o)->size != sizeof(corto_lang_procedureKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::procedureKind' doesn't match C-type size '%d'", corto_type(corto_lang_procedureKind_o)->size, sizeof(corto_lang_procedureKind));
    }

    /* Define ::corto::lang::procedureKind::FUNCTION */
    if (!corto_checkState(corto_lang_procedureKind_FUNCTION_o, CORTO_DEFINED)) {
        (*corto_lang_procedureKind_FUNCTION_o) = 0;
        if (corto_define(corto_lang_procedureKind_FUNCTION_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedureKind::FUNCTION' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedureKind::METAPROCEDURE */
    if (!corto_checkState(corto_lang_procedureKind_METAPROCEDURE_o, CORTO_DEFINED)) {
        (*corto_lang_procedureKind_METAPROCEDURE_o) = 3;
        if (corto_define(corto_lang_procedureKind_METAPROCEDURE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedureKind::METAPROCEDURE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedureKind::METHOD */
    if (!corto_checkState(corto_lang_procedureKind_METHOD_o, CORTO_DEFINED)) {
        (*corto_lang_procedureKind_METHOD_o) = 1;
        if (corto_define(corto_lang_procedureKind_METHOD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedureKind::METHOD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::procedureKind::OBSERVER */
    if (!corto_checkState(corto_lang_procedureKind_OBSERVER_o, CORTO_DEFINED)) {
        (*corto_lang_procedureKind_OBSERVER_o) = 2;
        if (corto_define(corto_lang_procedureKind_OBSERVER_o)) {
            corto_error("lang_load: failed to define '::corto::lang::procedureKind::OBSERVER' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::query */
    if (!corto_checkState(corto_lang_query_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_query_o)->parentType = NULL;
        corto_lang_type(corto_lang_query_o)->parentState = 0x6;
        corto_lang_type(corto_lang_query_o)->defaultType = NULL;
        corto_lang_type(corto_lang_query_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_query_o)->base = NULL;
        corto_lang_struct(corto_lang_query_o)->baseAccess = 0x1;
        corto_lang_query_o->implements.length = 0;
        corto_lang_query_o->implements.buffer = NULL;
        if (corto_define(corto_lang_query_o)) {
            corto_error("lang_load: failed to define '::corto::lang::query' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_query_o)->size != sizeof(struct corto_lang_query_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::query' doesn't match C-type size '%d'", corto_type(corto_lang_query_o)->size, sizeof(struct corto_lang_query_s));
    }

    /* Define ::corto::lang::query::from */
    if (!corto_checkState(corto_lang_query_from_o, CORTO_DEFINED)) {
        corto_lang_query_from_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_query_from_o->modifiers = 0x0;
        corto_lang_query_from_o->state = 0x6;
        corto_lang_query_from_o->weak = FALSE;
        corto_lang_query_from_o->id = 0;
        if (corto_define(corto_lang_query_from_o)) {
            corto_error("lang_load: failed to define '::corto::lang::query::from' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::query::mask */
    if (!corto_checkState(corto_lang_query_mask_o, CORTO_DEFINED)) {
        corto_lang_query_mask_o->type = corto_resolve(NULL, "::corto::lang::eventMask");
        corto_lang_query_mask_o->modifiers = 0x0;
        corto_lang_query_mask_o->state = 0x6;
        corto_lang_query_mask_o->weak = FALSE;
        corto_lang_query_mask_o->id = 1;
        if (corto_define(corto_lang_query_mask_o)) {
            corto_error("lang_load: failed to define '::corto::lang::query::mask' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount */
    if (!corto_checkState(corto_lang_mount_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_mount_o)->parentType = NULL;
        corto_lang_type(corto_lang_mount_o)->parentState = 0x6;
        corto_lang_type(corto_lang_mount_o)->defaultType = NULL;
        corto_lang_type(corto_lang_mount_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_mount_o)->base = NULL;
        corto_lang_struct(corto_lang_mount_o)->baseAccess = 0x1;
        corto_lang_mount_o->implements.length = 1;
        corto_lang_mount_o->implements.buffer = corto_alloc(sizeof(corto_lang_interface));
        corto_lang_mount_o->implements.buffer[0] = corto_resolve(NULL, "::corto::lang::dispatcher");
        if (corto_define(corto_lang_mount_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_mount_o)->size != sizeof(struct corto_lang_mount_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::mount' doesn't match C-type size '%d'", corto_type(corto_lang_mount_o)->size, sizeof(struct corto_lang_mount_s));
    }

    /* Define ::corto::lang::mount::construct() */
    if (!corto_checkState(corto_lang_mount_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_mount_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_mount_construct_o)->returnsReference = FALSE;
        corto_lang_mount_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_mount_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::destruct() */
    if (!corto_checkState(corto_lang_mount_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_mount_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_mount_destruct_o)->returnsReference = FALSE;
        corto_lang_mount_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_mount_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::invoke(object instance,function proc,octetseq args) */
    if (!corto_checkState(corto_lang_mount_invoke_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_mount_invoke_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_mount_invoke_o)->returnsReference = FALSE;
        corto_lang_mount_invoke_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_mount_invoke_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::invoke(object instance,function proc,octetseq args)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::mount */
    if (!corto_checkState(corto_lang_mount_mount_o, CORTO_DEFINED)) {
        corto_lang_mount_mount_o->type = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_mount_mount_o->modifiers = 0x0;
        corto_lang_mount_mount_o->state = 0x6;
        corto_lang_mount_mount_o->weak = FALSE;
        corto_lang_mount_mount_o->id = 0;
        if (corto_define(corto_lang_mount_mount_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::mount' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::on_declare */
    if (!corto_checkState(corto_lang_mount_on_declare_o, CORTO_DEFINED)) {
        corto_lang_mount_on_declare_o->mask = 0x120;
        corto_lang_mount_on_declare_o->observable = NULL;
        corto_lang_mount_on_declare_o->_template = 1;
        corto_lang_mount_on_declare_o->dispatcher = NULL;
        corto_lang_mount_on_declare_o->me = NULL;
        
        if (corto_define(corto_lang_mount_on_declare_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::on_declare' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::on_delete */
    if (!corto_checkState(corto_lang_mount_on_delete_o, CORTO_DEFINED)) {
        corto_lang_mount_on_delete_o->mask = 0x120;
        corto_lang_mount_on_delete_o->observable = NULL;
        corto_lang_mount_on_delete_o->_template = 3;
        corto_lang_mount_on_delete_o->dispatcher = NULL;
        corto_lang_mount_on_delete_o->me = NULL;
        
        if (corto_define(corto_lang_mount_on_delete_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::on_delete' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::on_update */
    if (!corto_checkState(corto_lang_mount_on_update_o, CORTO_DEFINED)) {
        corto_lang_mount_on_update_o->mask = 0x120;
        corto_lang_mount_on_update_o->observable = NULL;
        corto_lang_mount_on_update_o->_template = 2;
        corto_lang_mount_on_update_o->dispatcher = NULL;
        corto_lang_mount_on_update_o->me = NULL;
        
        if (corto_define(corto_lang_mount_on_update_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::on_update' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::onDeclare */
    if (!corto_checkState(corto_lang_mount_onDeclare_o, CORTO_DEFINED)) {
        corto_lang_mount_onDeclare_o->type = corto_resolve(NULL, "::corto::lang::notifyAction");
        corto_lang_mount_onDeclare_o->modifiers = 0x0;
        corto_lang_mount_onDeclare_o->state = 0x6;
        corto_lang_mount_onDeclare_o->weak = FALSE;
        corto_lang_mount_onDeclare_o->id = 2;
        if (corto_define(corto_lang_mount_onDeclare_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::onDeclare' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::onDelete */
    if (!corto_checkState(corto_lang_mount_onDelete_o, CORTO_DEFINED)) {
        corto_lang_mount_onDelete_o->type = corto_resolve(NULL, "::corto::lang::notifyAction");
        corto_lang_mount_onDelete_o->modifiers = 0x0;
        corto_lang_mount_onDelete_o->state = 0x6;
        corto_lang_mount_onDelete_o->weak = FALSE;
        corto_lang_mount_onDelete_o->id = 4;
        if (corto_define(corto_lang_mount_onDelete_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::onDelete' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::onInvoke */
    if (!corto_checkState(corto_lang_mount_onInvoke_o, CORTO_DEFINED)) {
        corto_lang_mount_onInvoke_o->type = corto_resolve(NULL, "::corto::lang::invokeAction");
        corto_lang_mount_onInvoke_o->modifiers = 0x0;
        corto_lang_mount_onInvoke_o->state = 0x6;
        corto_lang_mount_onInvoke_o->weak = FALSE;
        corto_lang_mount_onInvoke_o->id = 5;
        if (corto_define(corto_lang_mount_onInvoke_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::onInvoke' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::onUpdate */
    if (!corto_checkState(corto_lang_mount_onUpdate_o, CORTO_DEFINED)) {
        corto_lang_mount_onUpdate_o->type = corto_resolve(NULL, "::corto::lang::notifyAction");
        corto_lang_mount_onUpdate_o->modifiers = 0x0;
        corto_lang_mount_onUpdate_o->state = 0x6;
        corto_lang_mount_onUpdate_o->weak = FALSE;
        corto_lang_mount_onUpdate_o->id = 3;
        if (corto_define(corto_lang_mount_onUpdate_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::onUpdate' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::post(event e) */
    if (!corto_checkState(corto_lang_mount_post_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_mount_post_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_mount_post_o)->returnsReference = FALSE;
        corto_lang_mount_post_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_mount_post_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::post(event e)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::mount::query */
    if (!corto_checkState(corto_lang_mount_query_o, CORTO_DEFINED)) {
        corto_lang_mount_query_o->type = corto_resolve(NULL, "::corto::lang::query");
        corto_lang_mount_query_o->modifiers = 0x0;
        corto_lang_mount_query_o->state = 0x6;
        corto_lang_mount_query_o->weak = FALSE;
        corto_lang_mount_query_o->id = 1;
        if (corto_define(corto_lang_mount_query_o)) {
            corto_error("lang_load: failed to define '::corto::lang::mount::query' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::sequence */
    if (!corto_checkState(corto_lang_sequence_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_sequence_o)->parentType = NULL;
        corto_lang_type(corto_lang_sequence_o)->parentState = 0x6;
        corto_lang_type(corto_lang_sequence_o)->defaultType = NULL;
        corto_lang_type(corto_lang_sequence_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_sequence_o)->base = corto_resolve(NULL, "::corto::lang::collection");
        corto_lang_struct(corto_lang_sequence_o)->baseAccess = 0x0;
        corto_lang_sequence_o->implements.length = 0;
        corto_lang_sequence_o->implements.buffer = NULL;
        if (corto_define(corto_lang_sequence_o)) {
            corto_error("lang_load: failed to define '::corto::lang::sequence' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_sequence_o)->size != sizeof(struct corto_lang_sequence_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::sequence' doesn't match C-type size '%d'", corto_type(corto_lang_sequence_o)->size, sizeof(struct corto_lang_sequence_s));
    }

    /* Define ::corto::lang::sequence::construct() */
    if (!corto_checkState(corto_lang_sequence_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_sequence_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_sequence_construct_o)->returnsReference = FALSE;
        corto_lang_sequence_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_sequence_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::sequence::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::sequence::init() */
    if (!corto_checkState(corto_lang_sequence_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_sequence_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_sequence_init_o)->returnsReference = FALSE;
        corto_lang_sequence_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_sequence_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::sequence::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::sequence::size(uint32 size) */
    if (!corto_checkState(corto_lang_sequence_size_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_sequence_size_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_sequence_size_o)->returnsReference = FALSE;
        corto_lang_sequence_size_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_sequence_size_o)) {
            corto_error("lang_load: failed to define '::corto::lang::sequence::size(uint32 size)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::state */
    if (!corto_checkState(corto_lang_state_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_state_o)) {
            corto_error("lang_load: failed to define '::corto::lang::state' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_state_o)->size != sizeof(corto_lang_state)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::state' doesn't match C-type size '%d'", corto_type(corto_lang_state_o)->size, sizeof(corto_lang_state));
    }

    /* Define ::corto::lang::state::DECLARED */
    if (!corto_checkState(corto_lang_state_DECLARED_o, CORTO_DEFINED)) {
        (*corto_lang_state_DECLARED_o) = 2;
        if (corto_define(corto_lang_state_DECLARED_o)) {
            corto_error("lang_load: failed to define '::corto::lang::state::DECLARED' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::state::DEFINED */
    if (!corto_checkState(corto_lang_state_DEFINED_o, CORTO_DEFINED)) {
        (*corto_lang_state_DEFINED_o) = 4;
        if (corto_define(corto_lang_state_DEFINED_o)) {
            corto_error("lang_load: failed to define '::corto::lang::state::DEFINED' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::state::DESTRUCTED */
    if (!corto_checkState(corto_lang_state_DESTRUCTED_o, CORTO_DEFINED)) {
        (*corto_lang_state_DESTRUCTED_o) = 8;
        if (corto_define(corto_lang_state_DESTRUCTED_o)) {
            corto_error("lang_load: failed to define '::corto::lang::state::DESTRUCTED' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::state::VALID */
    if (!corto_checkState(corto_lang_state_VALID_o, CORTO_DEFINED)) {
        (*corto_lang_state_VALID_o) = 1;
        if (corto_define(corto_lang_state_VALID_o)) {
            corto_error("lang_load: failed to define '::corto::lang::state::VALID' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::string */
    if (!corto_checkState(corto_lang_string_o, CORTO_DEFINED)) {
        corto_lang_string_o->charWidth = LANG_WIDTH_8;
        corto_lang_string_o->length = 0;
        if (corto_define(corto_lang_string_o)) {
            corto_error("lang_load: failed to define '::corto::lang::string' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_string_o)->size != sizeof(corto_lang_string)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::string' doesn't match C-type size '%d'", corto_type(corto_lang_string_o)->size, sizeof(corto_lang_string));
    }

    /* Define ::corto::lang::struct */
    if (!corto_checkState(corto_lang_struct_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_struct_o)->parentType = NULL;
        corto_lang_type(corto_lang_struct_o)->parentState = 0x6;
        corto_lang_type(corto_lang_struct_o)->defaultType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_type(corto_lang_struct_o)->defaultProcedureType = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_interface(corto_lang_struct_o)->base = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_struct(corto_lang_struct_o)->baseAccess = 0x10;
        corto_lang_struct_o->implements.length = 0;
        corto_lang_struct_o->implements.buffer = NULL;
        if (corto_define(corto_lang_struct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_struct_o)->size != sizeof(struct corto_lang_struct_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::struct' doesn't match C-type size '%d'", corto_type(corto_lang_struct_o)->size, sizeof(struct corto_lang_struct_s));
    }

    /* Define ::corto::lang::struct::base */
    if (!corto_checkState(corto_lang_struct_base_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_struct_base_o)->type = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_member(corto_lang_struct_base_o)->modifiers = 0x0;
        corto_lang_member(corto_lang_struct_base_o)->state = 0x4;
        corto_lang_member(corto_lang_struct_base_o)->weak = FALSE;
        corto_lang_member(corto_lang_struct_base_o)->id = 0;
        corto_lang_struct_base_o->member = corto_resolve(NULL, "::corto::lang::interface::base");
        if (corto_define(corto_lang_struct_base_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::base' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::baseAccess */
    if (!corto_checkState(corto_lang_struct_baseAccess_o, CORTO_DEFINED)) {
        corto_lang_struct_baseAccess_o->type = corto_resolve(NULL, "::corto::lang::modifier");
        corto_lang_struct_baseAccess_o->modifiers = 0x0;
        corto_lang_struct_baseAccess_o->state = 0x6;
        corto_lang_struct_baseAccess_o->weak = FALSE;
        corto_lang_struct_baseAccess_o->id = 1;
        if (corto_define(corto_lang_struct_baseAccess_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::baseAccess' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::castable(type type) */
    if (!corto_checkState(corto_lang_struct_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_struct_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_struct_castable_o)->returnsReference = FALSE;
        corto_lang_struct_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_struct_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::compatible(type type) */
    if (!corto_checkState(corto_lang_struct_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_struct_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_struct_compatible_o)->returnsReference = FALSE;
        corto_lang_struct_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_struct_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::construct() */
    if (!corto_checkState(corto_lang_struct_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_struct_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_struct_construct_o)->returnsReference = FALSE;
        corto_lang_struct_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_struct_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::defaultProcedureType */
    if (!corto_checkState(corto_lang_struct_defaultProcedureType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_struct_defaultProcedureType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_struct_defaultProcedureType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_struct_defaultProcedureType_o)->state = 0x4;
        corto_lang_member(corto_lang_struct_defaultProcedureType_o)->weak = FALSE;
        corto_lang_member(corto_lang_struct_defaultProcedureType_o)->id = 5;
        corto_lang_struct_defaultProcedureType_o->member = corto_resolve(NULL, "::corto::lang::interface::defaultProcedureType");
        if (corto_define(corto_lang_struct_defaultProcedureType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::defaultProcedureType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::defaultType */
    if (!corto_checkState(corto_lang_struct_defaultType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_struct_defaultType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_struct_defaultType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_struct_defaultType_o)->state = 0x4;
        corto_lang_member(corto_lang_struct_defaultType_o)->weak = FALSE;
        corto_lang_member(corto_lang_struct_defaultType_o)->id = 4;
        corto_lang_struct_defaultType_o->member = corto_resolve(NULL, "::corto::lang::interface::defaultType");
        if (corto_define(corto_lang_struct_defaultType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::defaultType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::init() */
    if (!corto_checkState(corto_lang_struct_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_struct_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_struct_init_o)->returnsReference = FALSE;
        corto_lang_struct_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_struct_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::parentState */
    if (!corto_checkState(corto_lang_struct_parentState_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_struct_parentState_o)->type = corto_resolve(NULL, "::corto::lang::state");
        corto_lang_member(corto_lang_struct_parentState_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_struct_parentState_o)->state = 0x6;
        corto_lang_member(corto_lang_struct_parentState_o)->weak = FALSE;
        corto_lang_member(corto_lang_struct_parentState_o)->id = 3;
        corto_lang_struct_parentState_o->member = corto_resolve(NULL, "::corto::lang::interface::parentState");
        if (corto_define(corto_lang_struct_parentState_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::parentState' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::parentType */
    if (!corto_checkState(corto_lang_struct_parentType_o, CORTO_DEFINED)) {
        corto_lang_member(corto_lang_struct_parentType_o)->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_member(corto_lang_struct_parentType_o)->modifiers = 0x10;
        corto_lang_member(corto_lang_struct_parentType_o)->state = 0x4;
        corto_lang_member(corto_lang_struct_parentType_o)->weak = FALSE;
        corto_lang_member(corto_lang_struct_parentType_o)->id = 2;
        corto_lang_struct_parentType_o->member = corto_resolve(NULL, "::corto::lang::interface::parentType");
        if (corto_define(corto_lang_struct_parentType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::parentType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::struct::resolveMember(string name) */
    if (!corto_checkState(corto_lang_struct_resolveMember_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_struct_resolveMember_o)->returnType = corto_resolve(NULL, "::corto::lang::member");
        corto_lang_function(corto_lang_struct_resolveMember_o)->returnsReference = TRUE;
        corto_lang_struct_resolveMember_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_struct_resolveMember_o)) {
            corto_error("lang_load: failed to define '::corto::lang::struct::resolveMember(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::text */
    if (!corto_checkState(corto_lang_text_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_text_o)->parentType = NULL;
        corto_lang_type(corto_lang_text_o)->parentState = 0x6;
        corto_lang_type(corto_lang_text_o)->defaultType = NULL;
        corto_lang_type(corto_lang_text_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_text_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_text_o)->baseAccess = 0x1;
        corto_lang_text_o->implements.length = 0;
        corto_lang_text_o->implements.buffer = NULL;
        if (corto_define(corto_lang_text_o)) {
            corto_error("lang_load: failed to define '::corto::lang::text' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_text_o)->size != sizeof(struct corto_lang_text_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::text' doesn't match C-type size '%d'", corto_type(corto_lang_text_o)->size, sizeof(struct corto_lang_text_s));
    }

    /* Define ::corto::lang::text::charWidth */
    if (!corto_checkState(corto_lang_text_charWidth_o, CORTO_DEFINED)) {
        corto_lang_text_charWidth_o->type = corto_resolve(NULL, "::corto::lang::width");
        corto_lang_text_charWidth_o->modifiers = 0x0;
        corto_lang_text_charWidth_o->state = 0x6;
        corto_lang_text_charWidth_o->weak = FALSE;
        corto_lang_text_charWidth_o->id = 0;
        if (corto_define(corto_lang_text_charWidth_o)) {
            corto_error("lang_load: failed to define '::corto::lang::text::charWidth' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::text::init() */
    if (!corto_checkState(corto_lang_text_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_text_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_text_init_o)->returnsReference = FALSE;
        corto_lang_text_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_text_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::text::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::text::length */
    if (!corto_checkState(corto_lang_text_length_o, CORTO_DEFINED)) {
        corto_lang_text_length_o->type = corto_resolve(NULL, "::corto::lang::uint64");
        corto_lang_text_length_o->modifiers = 0x0;
        corto_lang_text_length_o->state = 0x6;
        corto_lang_text_length_o->weak = FALSE;
        corto_lang_text_length_o->id = 1;
        if (corto_define(corto_lang_text_length_o)) {
            corto_error("lang_load: failed to define '::corto::lang::text::length' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type */
    if (!corto_checkState(corto_lang_type_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_type_o)->parentType = NULL;
        corto_lang_type(corto_lang_type_o)->parentState = 0x6;
        corto_lang_type(corto_lang_type_o)->defaultType = NULL;
        corto_lang_type(corto_lang_type_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_type_o)->base = NULL;
        corto_lang_struct(corto_lang_type_o)->baseAccess = 0x1;
        corto_lang_type_o->implements.length = 0;
        corto_lang_type_o->implements.buffer = NULL;
        if (corto_define(corto_lang_type_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_type_o)->size != sizeof(struct corto_lang_type_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::type' doesn't match C-type size '%d'", corto_type(corto_lang_type_o)->size, sizeof(struct corto_lang_type_s));
    }

    /* Define ::corto::lang::type::alignment */
    if (!corto_checkState(corto_lang_type_alignment_o, CORTO_DEFINED)) {
        corto_lang_type_alignment_o->type = corto_resolve(NULL, "::corto::lang::uint16");
        corto_lang_type_alignment_o->modifiers = 0x3;
        corto_lang_type_alignment_o->state = 0x6;
        corto_lang_type_alignment_o->weak = FALSE;
        corto_lang_type_alignment_o->id = 5;
        if (corto_define(corto_lang_type_alignment_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::alignment' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::alignmentof() */
    if (!corto_checkState(corto_lang_type_alignmentof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_alignmentof_o)->returnType = corto_resolve(NULL, "::corto::lang::uint16");
        corto_lang_function(corto_lang_type_alignmentof_o)->returnsReference = FALSE;
        corto_lang_type_alignmentof_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_alignmentof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::alignmentof()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::allocSize() */
    if (!corto_checkState(corto_lang_type_allocSize_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_allocSize_o)->returnType = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function(corto_lang_type_allocSize_o)->returnsReference = FALSE;
        corto_lang_type_allocSize_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_type_allocSize_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::allocSize()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::castable(type type) */
    if (!corto_checkState(corto_lang_type_castable_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_castable_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_type_castable_o)->returnsReference = FALSE;
        corto_lang_type_castable_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_type_castable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::castable(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::checkAttr(attr attributes) */
    if (!corto_checkState(corto_lang_type_checkAttr_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_checkAttr_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_type_checkAttr_o)->returnsReference = FALSE;
        corto_lang_type_checkAttr_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_checkAttr_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::checkAttr(attr attributes)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::checkState(state state) */
    if (!corto_checkState(corto_lang_type_checkState_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_checkState_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_type_checkState_o)->returnsReference = FALSE;
        corto_lang_type_checkState_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_checkState_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::checkState(state state)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::compare(any value) */
    if (!corto_checkState(corto_lang_type_compare_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_compare_o)->returnType = corto_resolve(NULL, "::corto::lang::equalityKind");
        corto_lang_function(corto_lang_type_compare_o)->returnsReference = FALSE;
        corto_lang_type_compare_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_type_compare_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::compare(any value)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::compatible(type type) */
    if (!corto_checkState(corto_lang_type_compatible_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_compatible_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_type_compatible_o)->returnsReference = FALSE;
        corto_lang_type_compatible_o->_virtual = TRUE;
        
        if (corto_define(corto_lang_type_compatible_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::compatible(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::construct() */
    if (!corto_checkState(corto_lang_type_construct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_construct_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_type_construct_o)->returnsReference = FALSE;
        corto_lang_type_construct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_construct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::construct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::copy(any value) */
    if (!corto_checkState(corto_lang_type_copy_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_copy_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_type_copy_o)->returnsReference = FALSE;
        corto_lang_type_copy_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_type_copy_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::copy(any value)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::declare(string name,type type) */
    if (!corto_checkState(corto_lang_type_declare_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_declare_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_type_declare_o)->returnsReference = TRUE;
        corto_lang_type_declare_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_declare_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::declare(string name,type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::defaultProcedureType */
    if (!corto_checkState(corto_lang_type_defaultProcedureType_o, CORTO_DEFINED)) {
        corto_lang_type_defaultProcedureType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_type_defaultProcedureType_o->modifiers = 0x0;
        corto_lang_type_defaultProcedureType_o->state = 0x4;
        corto_lang_type_defaultProcedureType_o->weak = FALSE;
        corto_lang_type_defaultProcedureType_o->id = 9;
        if (corto_define(corto_lang_type_defaultProcedureType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::defaultProcedureType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::defaultType */
    if (!corto_checkState(corto_lang_type_defaultType_o, CORTO_DEFINED)) {
        corto_lang_type_defaultType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_type_defaultType_o->modifiers = 0x0;
        corto_lang_type_defaultType_o->state = 0x4;
        corto_lang_type_defaultType_o->weak = FALSE;
        corto_lang_type_defaultType_o->id = 8;
        if (corto_define(corto_lang_type_defaultType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::defaultType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::define() */
    if (!corto_checkState(corto_lang_type_define_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_define_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_type_define_o)->returnsReference = FALSE;
        corto_lang_type_define_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_define_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::define()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::delete() */
    if (!corto_checkState(corto_lang_type_delete_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_delete_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_type_delete_o)->returnsReference = FALSE;
        corto_lang_type_delete_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_delete_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::delete()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::destruct() */
    if (!corto_checkState(corto_lang_type_destruct_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_destruct_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_type_destruct_o)->returnsReference = FALSE;
        corto_lang_type_destruct_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_destruct_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::destruct()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::fullname() */
    if (!corto_checkState(corto_lang_type_fullname_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_fullname_o)->returnType = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_function(corto_lang_type_fullname_o)->returnsReference = FALSE;
        corto_lang_type_fullname_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_fullname_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::fullname()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::hasResources */
    if (!corto_checkState(corto_lang_type_hasResources_o, CORTO_DEFINED)) {
        corto_lang_type_hasResources_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_type_hasResources_o->modifiers = 0x3;
        corto_lang_type_hasResources_o->state = 0x6;
        corto_lang_type_hasResources_o->weak = FALSE;
        corto_lang_type_hasResources_o->id = 2;
        if (corto_define(corto_lang_type_hasResources_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::hasResources' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::init */
    if (!corto_checkState(corto_lang_type_init_o, CORTO_DEFINED)) {
        corto_lang_type_init_o->type = corto_resolve(NULL, "::corto::lang::initAction");
        corto_lang_type_init_o->modifiers = 0x3;
        corto_lang_type_init_o->state = 0x6;
        corto_lang_type_init_o->weak = FALSE;
        corto_lang_type_init_o->id = 11;
        if (corto_define(corto_lang_type_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::init' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::init() */
    if (!corto_checkState(corto_lang_type_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_type_init_o)->returnsReference = FALSE;
        corto_lang_type_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::instanceof(type type) */
    if (!corto_checkState(corto_lang_type_instanceof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_instanceof_o)->returnType = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_function(corto_lang_type_instanceof_o)->returnsReference = FALSE;
        corto_lang_type_instanceof_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_instanceof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::instanceof(type type)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::invalidate() */
    if (!corto_checkState(corto_lang_type_invalidate_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_invalidate_o)->returnType = corto_resolve(NULL, "::corto::lang::void");
        corto_lang_function(corto_lang_type_invalidate_o)->returnsReference = FALSE;
        corto_lang_type_invalidate_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_invalidate_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::invalidate()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::kind */
    if (!corto_checkState(corto_lang_type_kind_o, CORTO_DEFINED)) {
        corto_lang_type_kind_o->type = corto_resolve(NULL, "::corto::lang::typeKind");
        corto_lang_type_kind_o->modifiers = 0x5;
        corto_lang_type_kind_o->state = 0x6;
        corto_lang_type_kind_o->weak = FALSE;
        corto_lang_type_kind_o->id = 0;
        if (corto_define(corto_lang_type_kind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::kind' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::lookup(string name) */
    if (!corto_checkState(corto_lang_type_lookup_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_lookup_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_type_lookup_o)->returnsReference = TRUE;
        corto_lang_type_lookup_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_lookup_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::lookup(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::metaprocedures */
    if (!corto_checkState(corto_lang_type_metaprocedures_o, CORTO_DEFINED)) {
        corto_lang_type_metaprocedures_o->type = corto_resolve(NULL, "::corto::lang::vtable");
        corto_lang_type_metaprocedures_o->modifiers = 0x3;
        corto_lang_type_metaprocedures_o->state = 0x6;
        corto_lang_type_metaprocedures_o->weak = FALSE;
        corto_lang_type_metaprocedures_o->id = 10;
        if (corto_define(corto_lang_type_metaprocedures_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::metaprocedures' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::nameof() */
    if (!corto_checkState(corto_lang_type_nameof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_nameof_o)->returnType = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_function(corto_lang_type_nameof_o)->returnsReference = FALSE;
        corto_lang_type_nameof_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_nameof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::nameof()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::parentof() */
    if (!corto_checkState(corto_lang_type_parentof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_parentof_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_type_parentof_o)->returnsReference = TRUE;
        corto_lang_type_parentof_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_parentof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::parentof()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::parentState */
    if (!corto_checkState(corto_lang_type_parentState_o, CORTO_DEFINED)) {
        corto_lang_type_parentState_o->type = corto_resolve(NULL, "::corto::lang::state");
        corto_lang_type_parentState_o->modifiers = 0x0;
        corto_lang_type_parentState_o->state = 0x6;
        corto_lang_type_parentState_o->weak = FALSE;
        corto_lang_type_parentState_o->id = 7;
        if (corto_define(corto_lang_type_parentState_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::parentState' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::parentType */
    if (!corto_checkState(corto_lang_type_parentType_o, CORTO_DEFINED)) {
        corto_lang_type_parentType_o->type = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_type_parentType_o->modifiers = 0x0;
        corto_lang_type_parentType_o->state = 0x4;
        corto_lang_type_parentType_o->weak = FALSE;
        corto_lang_type_parentType_o->id = 6;
        if (corto_define(corto_lang_type_parentType_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::parentType' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::reference */
    if (!corto_checkState(corto_lang_type_reference_o, CORTO_DEFINED)) {
        corto_lang_type_reference_o->type = corto_resolve(NULL, "::corto::lang::bool");
        corto_lang_type_reference_o->modifiers = 0x5;
        corto_lang_type_reference_o->state = 0x6;
        corto_lang_type_reference_o->weak = FALSE;
        corto_lang_type_reference_o->id = 1;
        if (corto_define(corto_lang_type_reference_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::reference' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::relname(object from) */
    if (!corto_checkState(corto_lang_type_relname_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_relname_o)->returnType = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_function(corto_lang_type_relname_o)->returnsReference = FALSE;
        corto_lang_type_relname_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_relname_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::relname(object from)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::resolve(string name) */
    if (!corto_checkState(corto_lang_type_resolve_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_resolve_o)->returnType = corto_resolve(NULL, "::corto::lang::object");
        corto_lang_function(corto_lang_type_resolve_o)->returnsReference = TRUE;
        corto_lang_type_resolve_o->referenceOnly = TRUE;
        
        if (corto_define(corto_lang_type_resolve_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::resolve(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::resolveProcedure(string name) */
    if (!corto_checkState(corto_lang_type_resolveProcedure_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_resolveProcedure_o)->returnType = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_function(corto_lang_type_resolveProcedure_o)->returnsReference = TRUE;
        corto_lang_type_resolveProcedure_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_resolveProcedure_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::resolveProcedure(string name)' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::size */
    if (!corto_checkState(corto_lang_type_size_o, CORTO_DEFINED)) {
        corto_lang_type_size_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_type_size_o->modifiers = 0x3;
        corto_lang_type_size_o->state = 0x6;
        corto_lang_type_size_o->weak = FALSE;
        corto_lang_type_size_o->id = 4;
        if (corto_define(corto_lang_type_size_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::size' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::sizeof() */
    if (!corto_checkState(corto_lang_type_sizeof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_sizeof_o)->returnType = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_function(corto_lang_type_sizeof_o)->returnsReference = FALSE;
        corto_lang_type_sizeof_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_type_sizeof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::sizeof()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::templateId */
    if (!corto_checkState(corto_lang_type_templateId_o, CORTO_DEFINED)) {
        corto_lang_type_templateId_o->type = corto_resolve(NULL, "::corto::lang::uint32");
        corto_lang_type_templateId_o->modifiers = 0x3;
        corto_lang_type_templateId_o->state = 0x6;
        corto_lang_type_templateId_o->weak = FALSE;
        corto_lang_type_templateId_o->id = 3;
        if (corto_define(corto_lang_type_templateId_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::templateId' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::toString() */
    if (!corto_checkState(corto_lang_type_toString_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_toString_o)->returnType = corto_resolve(NULL, "::corto::lang::string");
        corto_lang_function(corto_lang_type_toString_o)->returnsReference = FALSE;
        corto_lang_type_toString_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_type_toString_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::toString()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::type::typeof() */
    if (!corto_checkState(corto_lang_type_typeof_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_type_typeof_o)->returnType = corto_resolve(NULL, "::corto::lang::type");
        corto_lang_function(corto_lang_type_typeof_o)->returnsReference = TRUE;
        corto_lang_type_typeof_o->referenceOnly = FALSE;
        
        if (corto_define(corto_lang_type_typeof_o)) {
            corto_error("lang_load: failed to define '::corto::lang::type::typeof()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind */
    if (!corto_checkState(corto_lang_typeKind_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_typeKind_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_typeKind_o)->size != sizeof(corto_lang_typeKind)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::typeKind' doesn't match C-type size '%d'", corto_type(corto_lang_typeKind_o)->size, sizeof(corto_lang_typeKind));
    }

    /* Define ::corto::lang::typeKind::ANY */
    if (!corto_checkState(corto_lang_typeKind_ANY_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_ANY_o) = 1;
        if (corto_define(corto_lang_typeKind_ANY_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::ANY' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind::COLLECTION */
    if (!corto_checkState(corto_lang_typeKind_COLLECTION_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_COLLECTION_o) = 4;
        if (corto_define(corto_lang_typeKind_COLLECTION_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::COLLECTION' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind::COMPOSITE */
    if (!corto_checkState(corto_lang_typeKind_COMPOSITE_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_COMPOSITE_o) = 3;
        if (corto_define(corto_lang_typeKind_COMPOSITE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::COMPOSITE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind::ITERATOR */
    if (!corto_checkState(corto_lang_typeKind_ITERATOR_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_ITERATOR_o) = 5;
        if (corto_define(corto_lang_typeKind_ITERATOR_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::ITERATOR' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind::PRIMITIVE */
    if (!corto_checkState(corto_lang_typeKind_PRIMITIVE_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_PRIMITIVE_o) = 2;
        if (corto_define(corto_lang_typeKind_PRIMITIVE_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::PRIMITIVE' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::typeKind::VOID */
    if (!corto_checkState(corto_lang_typeKind_VOID_o, CORTO_DEFINED)) {
        (*corto_lang_typeKind_VOID_o) = 0;
        if (corto_define(corto_lang_typeKind_VOID_o)) {
            corto_error("lang_load: failed to define '::corto::lang::typeKind::VOID' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::uint */
    if (!corto_checkState(corto_lang_uint_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_uint_o)->parentType = NULL;
        corto_lang_type(corto_lang_uint_o)->parentState = 0x6;
        corto_lang_type(corto_lang_uint_o)->defaultType = NULL;
        corto_lang_type(corto_lang_uint_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_uint_o)->base = corto_resolve(NULL, "::corto::lang::primitive");
        corto_lang_struct(corto_lang_uint_o)->baseAccess = 0x0;
        corto_lang_uint_o->implements.length = 0;
        corto_lang_uint_o->implements.buffer = NULL;
        if (corto_define(corto_lang_uint_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_uint_o)->size != sizeof(struct corto_lang_uint_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::uint' doesn't match C-type size '%d'", corto_type(corto_lang_uint_o)->size, sizeof(struct corto_lang_uint_s));
    }

    /* Define ::corto::lang::uint::init() */
    if (!corto_checkState(corto_lang_uint_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_uint_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_uint_init_o)->returnsReference = FALSE;
        corto_lang_uint_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_uint_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::uint::max */
    if (!corto_checkState(corto_lang_uint_max_o, CORTO_DEFINED)) {
        corto_lang_uint_max_o->type = corto_resolve(NULL, "::corto::lang::uint64");
        corto_lang_uint_max_o->modifiers = 0x0;
        corto_lang_uint_max_o->state = 0x6;
        corto_lang_uint_max_o->weak = FALSE;
        corto_lang_uint_max_o->id = 1;
        if (corto_define(corto_lang_uint_max_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint::max' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::uint::min */
    if (!corto_checkState(corto_lang_uint_min_o, CORTO_DEFINED)) {
        corto_lang_uint_min_o->type = corto_resolve(NULL, "::corto::lang::uint64");
        corto_lang_uint_min_o->modifiers = 0x0;
        corto_lang_uint_min_o->state = 0x6;
        corto_lang_uint_min_o->weak = FALSE;
        corto_lang_uint_min_o->id = 0;
        if (corto_define(corto_lang_uint_min_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint::min' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::uint16 */
    if (!corto_checkState(corto_lang_uint16_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_uint16_o)->width = LANG_WIDTH_16;
        corto_lang_uint16_o->min = 0;
        corto_lang_uint16_o->max = 65535;
        if (corto_define(corto_lang_uint16_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint16' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_uint16_o)->size != sizeof(corto_lang_uint16)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::uint16' doesn't match C-type size '%d'", corto_type(corto_lang_uint16_o)->size, sizeof(corto_lang_uint16));
    }

    /* Define ::corto::lang::uint32 */
    if (!corto_checkState(corto_lang_uint32_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_uint32_o)->width = LANG_WIDTH_32;
        corto_lang_uint32_o->min = 0;
        corto_lang_uint32_o->max = 4294967295;
        if (corto_define(corto_lang_uint32_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint32' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_uint32_o)->size != sizeof(corto_lang_uint32)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::uint32' doesn't match C-type size '%d'", corto_type(corto_lang_uint32_o)->size, sizeof(corto_lang_uint32));
    }

    /* Define ::corto::lang::uint64 */
    if (!corto_checkState(corto_lang_uint64_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_uint64_o)->width = LANG_WIDTH_64;
        corto_lang_uint64_o->min = 0;
        corto_lang_uint64_o->max = 18446744073709551615;
        if (corto_define(corto_lang_uint64_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint64' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_uint64_o)->size != sizeof(corto_lang_uint64)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::uint64' doesn't match C-type size '%d'", corto_type(corto_lang_uint64_o)->size, sizeof(corto_lang_uint64));
    }

    /* Define ::corto::lang::uint8 */
    if (!corto_checkState(corto_lang_uint8_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_uint8_o)->width = LANG_WIDTH_8;
        corto_lang_uint8_o->min = 0;
        corto_lang_uint8_o->max = 255;
        if (corto_define(corto_lang_uint8_o)) {
            corto_error("lang_load: failed to define '::corto::lang::uint8' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_uint8_o)->size != sizeof(corto_lang_uint8)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::uint8' doesn't match C-type size '%d'", corto_type(corto_lang_uint8_o)->size, sizeof(corto_lang_uint8));
    }

    /* Define ::corto::lang::virtual */
    if (!corto_checkState(corto_lang_virtual_o, CORTO_DEFINED)) {
        corto_lang_type(corto_lang_virtual_o)->parentType = corto_resolve(NULL, "::corto::lang::interface");
        corto_lang_type(corto_lang_virtual_o)->parentState = 0x2;
        corto_lang_type(corto_lang_virtual_o)->defaultType = NULL;
        corto_lang_type(corto_lang_virtual_o)->defaultProcedureType = NULL;
        corto_lang_interface(corto_lang_virtual_o)->base = corto_resolve(NULL, "::corto::lang::method");
        corto_lang_struct(corto_lang_virtual_o)->baseAccess = 0x0;
        corto_lang_virtual_o->kind = LANG_METHOD;
        if (corto_define(corto_lang_virtual_o)) {
            corto_error("lang_load: failed to define '::corto::lang::virtual' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_virtual_o)->size != sizeof(struct corto_lang_virtual_s)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::virtual' doesn't match C-type size '%d'", corto_type(corto_lang_virtual_o)->size, sizeof(struct corto_lang_virtual_s));
    }

    /* Define ::corto::lang::virtual::init() */
    if (!corto_checkState(corto_lang_virtual_init_o, CORTO_DEFINED)) {
        corto_lang_function(corto_lang_virtual_init_o)->returnType = corto_resolve(NULL, "::corto::lang::int16");
        corto_lang_function(corto_lang_virtual_init_o)->returnsReference = FALSE;
        corto_lang_virtual_init_o->_virtual = FALSE;
        
        if (corto_define(corto_lang_virtual_init_o)) {
            corto_error("lang_load: failed to define '::corto::lang::virtual::init()' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::void */
    if (!corto_checkState(corto_lang_void_o, CORTO_DEFINED)) {
        corto_lang_void_o->parentType = NULL;
        corto_lang_void_o->parentState = 0x6;
        corto_lang_void_o->defaultType = NULL;
        corto_lang_void_o->defaultProcedureType = NULL;
        if (corto_define(corto_lang_void_o)) {
            corto_error("lang_load: failed to define '::corto::lang::void' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_void_o)->size != sizeof(corto_lang_void)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::void' doesn't match C-type size '%d'", corto_type(corto_lang_void_o)->size, sizeof(corto_lang_void));
    }

    /* Define ::corto::lang::vtable */
    if (!corto_checkState(corto_lang_vtable_o, CORTO_DEFINED)) {
        corto_lang_collection(corto_lang_vtable_o)->elementType = corto_resolve(NULL, "::corto::lang::function");
        corto_lang_collection(corto_lang_vtable_o)->max = 0;
        if (corto_define(corto_lang_vtable_o)) {
            corto_error("lang_load: failed to define '::corto::lang::vtable' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_vtable_o)->size != sizeof(corto_lang_vtable)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::vtable' doesn't match C-type size '%d'", corto_type(corto_lang_vtable_o)->size, sizeof(corto_lang_vtable));
    }

    /* Define ::corto::lang::width */
    if (!corto_checkState(corto_lang_width_o, CORTO_DEFINED)) {
        if (corto_define(corto_lang_width_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_width_o)->size != sizeof(corto_lang_width)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::width' doesn't match C-type size '%d'", corto_type(corto_lang_width_o)->size, sizeof(corto_lang_width));
    }

    /* Define ::corto::lang::width::WIDTH_16 */
    if (!corto_checkState(corto_lang_width_WIDTH_16_o, CORTO_DEFINED)) {
        (*corto_lang_width_WIDTH_16_o) = 1;
        if (corto_define(corto_lang_width_WIDTH_16_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width::WIDTH_16' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::width::WIDTH_32 */
    if (!corto_checkState(corto_lang_width_WIDTH_32_o, CORTO_DEFINED)) {
        (*corto_lang_width_WIDTH_32_o) = 2;
        if (corto_define(corto_lang_width_WIDTH_32_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width::WIDTH_32' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::width::WIDTH_64 */
    if (!corto_checkState(corto_lang_width_WIDTH_64_o, CORTO_DEFINED)) {
        (*corto_lang_width_WIDTH_64_o) = 3;
        if (corto_define(corto_lang_width_WIDTH_64_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width::WIDTH_64' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::width::WIDTH_8 */
    if (!corto_checkState(corto_lang_width_WIDTH_8_o, CORTO_DEFINED)) {
        (*corto_lang_width_WIDTH_8_o) = 0;
        if (corto_define(corto_lang_width_WIDTH_8_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width::WIDTH_8' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::width::WIDTH_WORD */
    if (!corto_checkState(corto_lang_width_WIDTH_WORD_o, CORTO_DEFINED)) {
        (*corto_lang_width_WIDTH_WORD_o) = 4;
        if (corto_define(corto_lang_width_WIDTH_WORD_o)) {
            corto_error("lang_load: failed to define '::corto::lang::width::WIDTH_WORD' (%s)", corto_lasterr());
            goto error;
        }
    }

    /* Define ::corto::lang::word */
    if (!corto_checkState(corto_lang_word_o, CORTO_DEFINED)) {
        corto_lang_primitive(corto_lang_word_o)->width = LANG_WIDTH_WORD;
        if (corto_define(corto_lang_word_o)) {
            corto_error("lang_load: failed to define '::corto::lang::word' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(corto_lang_word_o)->size != sizeof(corto_lang_word)) {
        corto_error("lang_load: calculated size '%d' of type '::corto::lang::word' doesn't match C-type size '%d'", corto_type(corto_lang_word_o)->size, sizeof(corto_lang_word));
    }

    if (_a_) {
        corto_release(_a_);
    }

    return 0;
error:
    if (_a_) {
        corto_release(_a_);
    }

    return -1;
}
