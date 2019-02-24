﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: Host.sln

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMO_DP1
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMO_DP1

#include "Demo.h"
#include "DocumentEditorBase.h"

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
	class DocumentEditorRibbon : public ::demo::DocumentEditorBase, public ::demo::DocumentEditorRibbonConstructor, public ::vl::reflection::Description<DocumentEditorRibbon>
	{
		friend struct ::vl_workflow_global::__vwsnf186_Demo_demo_DocumentEditorRibbon___vwsn_instance_ctor__;
		friend class ::demo::DocumentEditorRibbonConstructor;
		friend class ::vl_workflow_global::__vwsnc72_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc73_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc74_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc75_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc76_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc77_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc78_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc79_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc80_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf171_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf172_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf173_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf174_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf175_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf176_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf177_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf178_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf179_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf180_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf181_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf182_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf183_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf184_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf185_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DocumentEditorRibbon>;
#endif
	private:
		bool __vwsn_prop_AlignLeftSelected;
		bool GetAlignLeftSelected();
		void SetAlignLeftSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignLeftSelectedChanged;
		bool __vwsn_prop_AlignCenterSelected;
		bool GetAlignCenterSelected();
		void SetAlignCenterSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignCenterSelectedChanged;
		bool __vwsn_prop_AlignRightSelected;
		bool GetAlignRightSelected();
		void SetAlignRightSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignRightSelectedChanged;
		::vl::Ptr<::vl::reflection::description::IValueList> __vwsn_prop_StyleGroups;
		::vl::Ptr<::vl::reflection::description::IValueList> GetStyleGroups();
		void SetStyleGroups(::vl::Ptr<::vl::reflection::description::IValueList> __vwsn_value_);
		::vl::Event<void()> StyleGroupsChanged;
		::vl::Ptr<::vl::reflection::description::IValueList> GenerateStyleGroups();
		void SelectStyleName(const ::vl::Nullable<::vl::WString>& styleName);
	public:
		DocumentEditorRibbon();
		void __vwsn_instance_ctor_();
		~DocumentEditorRibbon();
	};

	class DocumentEditorToolstrip : public ::demo::DocumentEditorBase, public ::demo::DocumentEditorToolstripConstructor, public ::vl::reflection::Description<DocumentEditorToolstrip>
	{
		friend class ::demo::DocumentEditorToolstripConstructor;
		friend class ::vl_workflow_global::__vwsnc84_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc85_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf190_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf191_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
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
