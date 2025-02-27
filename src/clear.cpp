#include <iostream>
#include <asciicodes.h>
#include <clear.h>

namespace terminate {
	inline void clear_screen() {
		std::cout << ascii::clear_screen;
		return;
	}
	inline void clear_lines() {
		std::cout << ascii::clear_line;
	}
}