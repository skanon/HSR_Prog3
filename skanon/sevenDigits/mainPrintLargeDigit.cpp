#include "printLargeDigit.h"
#include <iostream>
#include <sstream>

int main() {
	std::stringstream ss{""};
	std::string str;
	std::cin >> str;
	ss << str;

	printLargeDigit(ss, 10, std::cout);
}
