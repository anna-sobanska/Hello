#include <iostream>
#include <string>

void enterName() {
	std::string name;
	std::cout << "Enter name: ";
	std::cin >> name;

	if (name.back() == 'a') {
		std::cout << "You are a woman!" << std::endl;
	}
	else {
		std::cout << "You are a man!" << std::endl;
	}
}