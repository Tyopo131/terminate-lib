// Copyright (C) 2025 Tyopo131
// SPDX-License-Identifier: LGPL-3.0-only

#pragma once
#include <optional>
namespace terminatelib {
	struct Pos {
		std::optional<int> line, col;
		Pos(std::optional<int> line, std::optional<int> col);
	};
}