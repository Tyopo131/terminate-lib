#include <iostream>
#include <asciicodes.h>
#include <clear.h>
void terminatelib::clear_screen() {
	std::cout << ascii::clear_screen;
	return;
}
void terminatelib::clear_lines() {
	std::cout << ascii::clear_line;
	return;
}
