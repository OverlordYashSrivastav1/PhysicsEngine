#pragma once

#ifdef PI_PLATFORM_WINDOWS
extern PI::Application* PI::CreateApplication();

int main(int argc, char** argv) {
	printf("PhysicsEngine\n");
	auto app = PI::CreateApplication();
	app->Run();
	delete app;
}
#endif