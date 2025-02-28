#include "terminate/clear.h"
#include <thread>
#include <chrono>

int main() {
	using namespace std::chrono_literals; // For all chrono literals
	// Constants
	constexpr int progressBarWidth = 100;
	constexpr char emptySpaceCharacter = ' ';
	constexpr char filledSpaceCharacter = '=';
	constexpr std::chrono::milliseconds sleepTimePerProgressBarTick(100ms);

	std::wcout.imbue(std::locale("")); // Set locale

	std::cout << "Line 1\n";
	std::cout << "Line 2...\n";
	std::cout << "Line 3...\n";
	std::cout << "Will clear lines after 7 seconds! (this is line 4)";
	std::cout.flush();
	// Simulate output
	std::this_thread::sleep_for(7s); 
	terminatelib::clear_lines(1, 2, 3, 4); // Erase the output
	std::cout << "\033[1;0H"; // Until a "move cursor" function is implemented, we'll have to do this.
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
	
#ifdef _WIN32
	
#elif defined(__linux__)

#elif defined(__APPLE__)



#else

	std::cout << "Your OS does not support this last demo :(";

#endif

}