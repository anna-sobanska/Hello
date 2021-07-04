#include <iostream>

void enterName() {
	std::string name;
	std::cout << "Enter name: ";
	std::cin >> name;

	if (name[name.length()-1] == 'a') {
		std::cout << "You are a woman!" << std::endl;
	}
	else {
		std::cout << "You are a man!" << std::endl;
	}
}