#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SPOOKY_BUILD_DLL
		#define SPOOKY_API __declspec(dllexport)
	#else
		#define SPOOKY_API __declspec(dllimport)
	#endif	
#else
	#error Spooky only supports Windows
#endif