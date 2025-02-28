#pragma once
#include <iostream>
#include <type_traits>
#include <vector>
#include <concepts>
#include "asciicodes.h"

namespace terminatelib {
	void clear_screen();
	void clear_lines();
	template<typename T>
	concept is_int = std::same_as<T, int>;
	template<is_int... Args>
	void clear_lines(Args... line_numbers) {
		std::cout << ascii::save_pos;
		std::vector<int> lines = { line_numbers... };
		for (int line : lines) {
			std::cout << "\033[" << line << ";0H";
			std::cout << ascii::clear_line;
		}
		std::cout << ascii::restore_pos;
	}
}