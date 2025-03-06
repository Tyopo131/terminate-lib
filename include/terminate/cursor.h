#pragma once
#include <optional>
#include <terminate/terminalpos.h>

namespace terminatelib {
	void move_cursor(std::optional<int> line, std::optional<int> col);
	void move_cursor(TerminalPos pos);
}
