﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe ResourceToolstrip.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DOCUMENTEDITORTOOLSTRIP
#define VCZH_WORKFLOW_COMPILER_GENERATED_DOCUMENTEDITORTOOLSTRIP

#include "EditorToolstripPartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace demo
{
	class DocumentEditorToolstrip : public ::demo::DocumentEditorBase, public ::demo::DocumentEditorToolstripConstructor, public ::vl::reflection::Description<DocumentEditorToolstrip>
	{
		friend class ::demo::DocumentEditorToolstripConstructor;
		friend class ::vl_workflow_global::__vwsnc2_EditorToolstrip_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_EditorToolstrip_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf2_EditorToolstrip_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_EditorToolstrip_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DocumentEditorToolstrip>;
#endif
	public:
		DocumentEditorToolstrip();
		~DocumentEditorToolstrip();
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif