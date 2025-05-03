// Copyright (C) 2025 Tyopo131
// SPDX-License-Identifier: LGPL-3.0-only

#include <iostream>
#include "asciicodes.h"
#include "clear.h"

void terminatelib::clear_screen() {
	std::cout << ascii::clear_screen;
	return;
}
void terminatelib::clear_lines() {
	std::cout << ascii::clear_line;
	return;
}
