#include "terminate/clear.h"

int main() {
	std::cout << "A thing";
	std::cout.flush();
	terminatelib::clear_lines();
}