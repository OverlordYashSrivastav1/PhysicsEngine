#include <PhysicsEngine.h>

class Sandbox : public PI::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

PI::Application* PI::CreateApplication()
{
	return new Sandbox();
}