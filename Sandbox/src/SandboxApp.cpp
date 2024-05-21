#include <Spooky.h>

class Sandbox : public Spooky::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};


Spooky::Application* Spooky::CreateApplication() {
	return new Sandbox();
}