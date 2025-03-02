#include "cursor.h"
#include <iostream>

void terminatelib::move_cursor(std::optional<int> line, std::optional<int> col)
{
	if (!(line.has_value() || col.has_value())) {
		throw std::runtime_error("Both parameters have no value. At least one parameter should have a value.");
		return;
	}
	if (line.has_value() && !col.has_value()) std::cout << "\033[" << line.value() << 'd';
	else if (line.has_value() && col.has_value()) std::cout << "\033[" << line.value() << ';' << col.value() << 'H';
	else if (!line.has_value() && col.has_value()) std::cout << "\033[" << col.value() << 'G';
}
