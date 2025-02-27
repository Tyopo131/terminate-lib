#include <iostream>
#include <asciicodes.h>
#include <clear.h>
inline void terminatelib::clear_screen() {
	std::cout << ascii::clear_screen;
	return;
}
inline void terminatelib::clear_lines() {
	std::cout << ascii::clear_line;
	return;
}
