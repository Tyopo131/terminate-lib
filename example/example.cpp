#include "terminate/clear.h"
#include <thread>
#include <chrono>
#include <terminate/cursor.h>

int main() {
	using namespace std::chrono_literals; // For all chrono literals
	// Constants
	constexpr int progressBarWidth = 100;
	constexpr char emptySpaceCharacter = ' ';
	constexpr char filledSpaceCharacter = '=';
	constexpr std::chrono::milliseconds sleepTimePerProgressBarTick(100ms);

	std::wcout.imbue(std::locale("")); // Set locale

	// Simulate output
	std::cout << "Line 1\n";
	std::cout << "Line 2...\n";
	std::cout << "Line 3...\n";
	std::cout << "Will clear lines after 7 seconds! (this is line 4)";

	std::cout.flush();

	std::this_thread::sleep_for(7s);

	terminatelib::clear_lines(1, 2, 3, 4); // Erase the output
	terminatelib::move_cursor(1, 1); // Move cursor to line 1 column 0
	std::cout.flush();
	std::cout << "Lines cleared.\n";
	std::cout << "Please wait 2 seconds for the next demo!";

	std::this_thread::sleep_for(2s);

	terminatelib::clear_screen();
	std::cout << "\n";
	for (int progress = 1; progress <= progressBarWidth; progress++) {
		std::cout << "\r";
		std::cout.flush();
		int emptySpace = progressBarWidth - progress;
		std::string emptySpaceStr(emptySpace, emptySpaceCharacter);
		std::string filledSpaceStr(progress, filledSpaceCharacter);
		std::cout << "[" << filledSpaceStr << emptySpaceStr << "] " << progress << "%";
		std::cout.flush();
		std::this_thread::sleep_for(sleepTimePerProgressBarTick);
	}
	terminatelib::clear_lines();
	terminatelib::move_cursor(1, 1);
	std::cout << "Done!";
}