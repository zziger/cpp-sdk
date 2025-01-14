#pragma once

#include "../types/MValue.h"
#include "../Ref.h"

#include "CEvent.h"

namespace alt
{
	class IWebView;

	class CWebViewEvent : public CEvent
	{
	public:
		CWebViewEvent(Ref<IWebView> _target, const std::string& _name, const MValueArgs &_args) : CEvent(Type::WEB_VIEW_EVENT),
																					  target(_target),
																					  name(_name),
																					  args(_args)
		{
		}

		Ref<IWebView> GetTarget() const { return target; }
		const std::string& GetName() const { return name; }
		const MValueArgs &GetArgs() const { return args; }

	private:
		Ref<IWebView> target;
		std::string name;
		MValueArgs args;
	};
} // namespace alt
