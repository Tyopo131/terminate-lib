#pragma once
#include <string_view>

namespace terminatelib {
	namespace ascii {
		constexpr std::string_view clear_screen = "\033c";
		constexpr std::string_view clear_line = "\033[2K\r";
		constexpr std::string_view save_pos = "\033[s";
		constexpr std::string_view restore_pos = "\033[u";
	}
}