#include "inputhandler.h"
#include <iostream>
#include <istream>
template<typename T>
terminatelib::input::Listener<T>::Listener(std::istream& inputStream) {
	 this->inputStream = &inputStream;
}