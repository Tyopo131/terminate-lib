#pragma once
#include <string_view>

namespace terminate {
	namespace ascii {
		constexpr std::string_view clear_screen = "\033c";
		constexpr std::string_view clear_line = "\33[2K\r"
	}
}