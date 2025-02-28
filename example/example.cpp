#include "terminate/clear.h"
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

int main() {
	std::cout << "Doing tasks...\n";
	std::cout << "Doing tasks 2...";
	std::this_thread::sleep_for(7s); 
	// Simulate doing tasks
	terminatelib::clear_lines(1, 2); // Erase the output
}