#include <iostream>
#include <asciicodes.h>
#include <clear.h>
#include <vector>
#include <string>

void terminatelib::clear_screen() {
	std::cout << ascii::clear_screen;
	return;
}
void terminatelib::clear_lines() {
	std::cout << ascii::clear_line;
	return;
}