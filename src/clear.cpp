#include <iostream>
#include <asciicodes.h>

namespace terminate {
	void clear_screen() {
		std::cout << ascii::clear_screen;
		return;
	}
	void clear_lines() {
		std::cout << ascii::clear_line;
	}
}