#pragma once
#include "Core.h"
namespace PI{
	class PI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//define in CLIENT
	Application* CreateApplication();
}
