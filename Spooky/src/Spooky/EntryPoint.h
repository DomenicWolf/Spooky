#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Spooky::Application* Spooky::CreateApplication();

int main(int argc, char** argv) {

	Spooky::Log::Init();
	SPOOKY_CORE_WARN("Initialized Log!");

	SPOOKY_INFO("Hello!");

	auto app = Spooky::CreateApplication();
	app->Run();
	delete app;

}

#endif