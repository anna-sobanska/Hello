#include <iostream>

void numberFromASCII() {
	char c1, c2, c3, c4, c5;

	std::cout << "Enter a word (5 letters): ";
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
}