#include "terminate/clear.h"
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

int main() {
	std::cout << "Doing tasks...";
	std::this_thread::sleep_for(7s); 
	// Simulate doing tasks
	terminatelib::clear_lines(); // Erase the output
}