#include <iostream>

void wordReversal() {
	std::string word;
	std::cout << "Enter the word to reverse: ";
	std::cin >> word;

	for (int i = word.length() - 1; i >= 0; i--) {
		std::cout << word[i];
	}
}