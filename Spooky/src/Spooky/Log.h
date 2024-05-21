#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Spooky {
	class SPOOKY_API Log
	{
	public:
		static void Init();


		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

// Core log macros

#define SPOOKY_CORE_ERROR(...)   ::Spooky::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SPOOKY_CORE_WARN(...)    ::Spooky::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SPOOKY_CORE_INFO(...)    ::Spooky::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SPOOKY_CORE_TRACE(...)   ::Spooky::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SPOOKY_CORE_FATAL(...)   ::Spooky::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros

#define SPOOKY_ERROR(...)   ::Spooky::Log::GetClientLogger()->error(__VA_ARGS__)
#define SPOOKY_WARN(...)    ::Spooky::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SPOOKY_INFO(...)    ::Spooky::Log::GetClientLogger()->info(__VA_ARGS__)
#define SPOOKY_TRACE(...)   ::Spooky::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SPOOKY_FATAL(...)   ::Spooky::Log::GetClientLogger()->fatal(__VA_ARGS__)