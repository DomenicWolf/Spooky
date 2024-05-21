#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Spooky::Application* Spooky::CreateApplication();

int main(int argc, char** argv) {

	auto app = Spooky::CreateApplication();
	app->Run();
	delete app;

}

#endif