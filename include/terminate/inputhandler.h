#pragma once
#include <istream>
#include <iostream>
#include <queue>

namespace terminatelib {
	namespace input {
		template<typename T>
		class Listener {
		protected:
			std::istream* inputStream;
			bool active = false;
			std::queue<T> events;
		public:
			Listener(std::istream& inputStream = std::cin);
		};
		
	}
}