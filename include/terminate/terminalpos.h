#pragma once
#include <optional>
namespace terminatelib {
	struct Pos {
		std::optional<int> line, col;
		Pos(std::optional<int> line, std::optional<int> col);
	};
}