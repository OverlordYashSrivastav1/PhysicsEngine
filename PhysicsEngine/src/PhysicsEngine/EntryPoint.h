#pragma once

#ifdef PI_PLATFORM_WINDOWS
extern PI::Application* PI::CreateApplication();

int main(int argc, char** argv) {

	PI::Log::Init();
	PI::Log::GetCoreLogger()->warn("ITS OVERLORD TALKING FROM CORE");
	PI::Log::GetClientLogger()->warn("ROGER THAT! Client side all good");
	
	
	auto app = PI::CreateApplication();
	app->Run();
	delete app;
}
#endif