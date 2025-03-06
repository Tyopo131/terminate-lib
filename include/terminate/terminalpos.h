#pragma once
#include <optional>
namespace terminatelib {
	struct TerminalPos {
		std::optional<int> line, col;
		TerminalPos(std::optional<int> line, std::optional<int> col);
	};
}