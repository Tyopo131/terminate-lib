#pragma once
#include <optional>

namespace terminatelib {
	void move_cursor(std::optional<int> line, std::optional<int> col);
}
