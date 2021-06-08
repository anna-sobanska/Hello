#include <iostream>

void numberFromASCII() {
	char letters[5];

	std::cout << "Enter a word (5 letters): ";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> letters[i];
	}

	std::cout << "ASCII message: " << int(letters[0]) << " " << int(letters[1]) << " " << int(letters[2]) << " " << int(letters[3]) << " " << int(letters[4]) << std::endl;
	
}