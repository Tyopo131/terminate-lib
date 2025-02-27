#include <iostream>
#include <asciicodes.h>

namespace terminate {
	void clear_screen() {
		std::cout << ascii::clear_screen;
		return;
	}
}