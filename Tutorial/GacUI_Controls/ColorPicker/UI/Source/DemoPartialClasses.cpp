﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->GetColor();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::presentation::Color>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->SetColor(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->GetFont();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::presentation::FontProperties>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->SetFont(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize_::__vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize_(::demo::ColorListItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_0)->GetFont();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::presentation::FontProperties>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_0)->SetFont(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	::vl::WString __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_item_) const
	{
		auto item = ::vl::__vwsn::Unbox<::vl::Ptr<::demo::IColorItem>>(__vwsn_item_);
		return ::vl::__vwsn::This(item.Obj())->GetItemName();
	}

	//-------------------------------------------------------------------

	__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	::vl::presentation::templates::GuiListItemTemplate* __vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const
	{
		{
			if ([&](){ auto __vwsn_temp__ = __vwsn_viewModel_; return __vwsn_temp__.GetSharedPtr() && ::vl::__vwsn::RawPtrCast<::demo::IColorItem>(__vwsn_temp__.GetRawPtr()) != nullptr; }())
			{
				return static_cast<::vl::presentation::templates::GuiListItemTemplate*>(new ::demo::ColorListItemTemplate(::vl::__vwsn::Unbox<::vl::Ptr<::demo::IColorItem>>(__vwsn_viewModel_)));
			}
		}
		throw ::vl::Exception(::vl::WString::Unmanaged(L"Cannot find a matched control template to create."));
	}

	//-------------------------------------------------------------------

	__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	::vl::presentation::templates::GuiTemplate* __vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const
	{
		{
			if ([&](){ auto __vwsn_temp__ = __vwsn_viewModel_; return __vwsn_temp__.GetSharedPtr() && ::vl::__vwsn::RawPtrCast<::demo::IColorItem>(__vwsn_temp__.GetRawPtr()) != nullptr; }())
			{
				return static_cast<::vl::presentation::templates::GuiTemplate*>(new ::demo::ColorBomboItemTemplate(::vl::__vwsn::Unbox<::vl::Ptr<::demo::IColorItem>>(__vwsn_viewModel_)));
			}
		}
		throw ::vl::Exception(::vl::WString::Unmanaged(L"Cannot find a matched control template to create."));
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::ColorBomboItemTemplate*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetTextColor();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0()
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->self; } catch(...){ return static_cast<::demo::ColorBomboItemTemplate*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextColorChanged, ::vl::Func<void()>(this, &__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextColorChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::ColorBomboItemTemplate*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::ColorBomboItemTemplate*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetFont();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->self; } catch(...){ return static_cast<::demo::ColorBomboItemTemplate*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->FontChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->FontChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::ColorBomboItemTemplate*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription(::demo::ColorListItemTemplateConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::ColorListItemTemplate*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetFont();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->self; } catch(...){ return static_cast<::demo::ColorListItemTemplate*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->FontChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->FontChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::ColorListItemTemplate*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::ColorBomboItemTemplateConstructor)
***********************************************************************/

namespace demo
{
	void ColorBomboItemTemplateConstructor::__vwsn_demo_ColorBomboItemTemplate_Initialize(::demo::ColorBomboItemTemplate* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->ViewModel = ::vl::__vwsn::This(__vwsn_this_)->GetViewModel());
		{
			::vl::__vwsn::This(this->self)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		(this->__vwsn_precompile_0 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(16); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(16); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(3); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		(this->__vwsn_precompile_2 = ::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidBackgroundElement>()));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetOwnedElement(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(this->__vwsn_precompile_2));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		(this->__vwsn_precompile_3 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(2), static_cast<::vl::vint>(3), static_cast<::vl::vint>(1));
		}
		(this->__vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidLabelElement>()));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetVerticalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetEllipse(true);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetOwnedElement(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(this->__vwsn_precompile_4));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_3));
		}
		{
			::vl::__vwsn::This(this->self)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_0));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2.Obj())->SetColor(::vl::__vwsn::This(this->ViewModel.Obj())->GetItemColor());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetText(::vl::__vwsn::This(this->ViewModel.Obj())->GetItemName());
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, vl::Func(::vl_workflow_global::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, vl::Func(::vl_workflow_global::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	ColorBomboItemTemplateConstructor::ColorBomboItemTemplateConstructor()
		: ViewModel(::vl::Ptr<::demo::IColorItem>())
		, self(static_cast<::demo::ColorBomboItemTemplate*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_2(::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement>())
		, __vwsn_precompile_3(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_4(::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>())
	{
	}

/***********************************************************************
Class (::demo::ColorBomboItemTemplate)
***********************************************************************/

	::vl::presentation::Color ColorBomboItemTemplate::GetTextColor()
	{
		return this->__vwsn_prop_TextColor;
	}
	void ColorBomboItemTemplate::SetTextColor(::vl::presentation::Color __vwsn_value_)
	{
		if ((this->__vwsn_prop_TextColor != __vwsn_value_))
		{
			(this->__vwsn_prop_TextColor = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->TextColorChanged)();
		}
	}

	::vl::Ptr<::demo::IColorItem> ColorBomboItemTemplate::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	ColorBomboItemTemplate::ColorBomboItemTemplate(::vl::Ptr<::demo::IColorItem> __vwsn_ctor_parameter_ViewModel)
		: __vwsn_prop_TextColor(::vl::__vwsn::Parse<::vl::presentation::Color>(::vl::WString::Unmanaged(L"#FFFFFF")))
		, __vwsn_parameter_ViewModel(::vl::Ptr<::demo::IColorItem>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::ColorBomboItemTemplate"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_ColorBomboItemTemplate_Initialize(this);
	}

	ColorBomboItemTemplate::~ColorBomboItemTemplate()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::templates::GuiTemplate*>(this));
	}

/***********************************************************************
Class (::demo::ColorListItemTemplateConstructor)
***********************************************************************/

	void ColorListItemTemplateConstructor::__vwsn_demo_ColorListItemTemplate_Initialize(::demo::ColorListItemTemplate* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->ViewModel = ::vl::__vwsn::This(__vwsn_this_)->GetViewModel());
		{
			::vl::__vwsn::This(this->self)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		(this->__vwsn_precompile_0 = new ::demo::ColorBomboItemTemplate(this->ViewModel));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(6); __vwsn_temp__.top = static_cast<::vl::vint>(6); __vwsn_temp__.right = static_cast<::vl::vint>(6); __vwsn_temp__.bottom = static_cast<::vl::vint>(6); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_0));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, vl::Func(::vl_workflow_global::__vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_demo_ColorListItemTemplate_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	ColorListItemTemplateConstructor::ColorListItemTemplateConstructor()
		: ViewModel(::vl::Ptr<::demo::IColorItem>())
		, self(static_cast<::demo::ColorListItemTemplate*>(nullptr))
		, __vwsn_precompile_0(static_cast<::demo::ColorBomboItemTemplate*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::ColorListItemTemplate)
***********************************************************************/

	::vl::Ptr<::demo::IColorItem> ColorListItemTemplate::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	ColorListItemTemplate::ColorListItemTemplate(::vl::Ptr<::demo::IColorItem> __vwsn_ctor_parameter_ViewModel)
		: __vwsn_parameter_ViewModel(::vl::Ptr<::demo::IColorItem>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::ColorListItemTemplate"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_ColorListItemTemplate_Initialize(this);
	}

	ColorListItemTemplate::~ColorListItemTemplate()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::templates::GuiTemplate*>(this));
	}

/***********************************************************************
Class (::demo::IColorItem)
***********************************************************************/

/***********************************************************************
Class (::demo::IViewModel)
***********************************************************************/

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->ViewModel = ::vl::__vwsn::This(__vwsn_this_)->GetViewModel());
		(this->__vwsn_precompile_8 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString::Unmanaged(L"ColorPicker"));
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetCellPadding(static_cast<::vl::vint>(10));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(2));
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_3 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetText(::vl::WString::Unmanaged(L"ComboBox and BindableTextList using ItemTemplate:"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_3)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_2));
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_6 = new ::vl::presentation::controls::GuiBindableTextList(::vl::presentation::theme::ThemeName::TextList));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetTextProperty(vl::Func(::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetVerticalAlwaysVisible(false);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetHorizontalAlwaysVisible(false);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetItemTemplate(vl::Func(::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
		}
		{
			(this->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiComboBoxListControl(::vl::presentation::theme::ThemeName::ComboBox, static_cast<::vl::presentation::controls::GuiSelectableListControl*>(this->__vwsn_precompile_6)));
		}
		(this->__vwsn_precompile_7 = ::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_7)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetItemTemplate(vl::Func(::vl_workflow_global::__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetItemSource(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueEnumerable>(::vl::__vwsn::This(this->ViewModel.Obj())->GetColorItems()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetSelectedIndex(static_cast<::vl::vint>(0));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: ViewModel(::vl::Ptr<::demo::IViewModel>())
		, __vwsn_precompile_0(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::controls::GuiComboBoxListControl*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::controls::GuiBindableTextList*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	::vl::Ptr<::demo::IViewModel> MainWindow::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	MainWindow::MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel)
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, __vwsn_parameter_ViewModel(::vl::Ptr<::demo::IViewModel>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
