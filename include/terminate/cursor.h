#pragma once
#include <optional>
#include <terminate/terminalpos.h>

namespace terminatelib {
	[[deprecated(R"#("move_cursor(std::optional<int> line, std::optional<int> col)" is deprecated. Please use "move_cursor(Pos pos)" instead.)#")]]
	void move_cursor(std::optional<int> line, std::optional<int> col);
	void move_cursor(Pos pos);
}
