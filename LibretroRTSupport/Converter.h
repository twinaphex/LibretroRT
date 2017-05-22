#pragma once

#include "Export.h"

struct retro_game_geometry;
struct retro_system_timing;
enum retro_pixel_format;

using namespace Platform;
using namespace LibretroRT;

namespace LibretroRTSupport
{
	class SUPPORT_API Converter
	{
	public:
		static String^ CToPlatformString(const char* string);
		static String^ CPPToPlatformString(const std::string string);
		static std::string Converter::PlatformToCPPString(Platform::String^ string);
		static GameGeometry^ CToRTGameGeometry(const retro_game_geometry& geometry);
		static SystemTiming^ CToRTSystemTiming(const retro_system_timing& timing);
		static PixelFormats ConvertToPixelFormat(enum retro_pixel_format format);
		static InputTypes ConvertToInputType(unsigned device, unsigned index, unsigned id);
	};
}