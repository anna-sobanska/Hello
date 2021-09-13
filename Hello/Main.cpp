#include <iostream>
#include <string>

void Log(const char* message);
void numberFromASCII();
void enterName();
void wordReversal();

int main() 
{
	Log("Hello World");
	int userChoice;

	std::cout << "What do you want to do? Enter 1, 2 or 3." << std::endl;
	std::cout << "1. Get to code from ASCII table?" << std::endl;
	std::cout << "2. Check the name?" << std::endl;
	std::cout << "3. Reverse the word?" << std::endl;

	std::cin >> userChoice;

	switch (userChoice)
	{
		case 1:
			numberFromASCII();
			break;
		case 2:
			enterName();
			break;
		case 3:
			wordReversal();
			break;
	default:
			std::cout << "This is not valid!";
		break;
	}

	//std::cout << std::endl << "Bye!" << std::endl;
	system("pause > 0");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void numberFromASCII() 
{
	char letters[5];

	std::cout << "Enter a word (5 letters): ";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> letters[i];
	}

	std::cout << "This is your ASCII code: " << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << int(letters[i]) << " ";
	}
}

void enterName() 
{
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

void wordReversal() 
{
	std::string word;
	std::cout << "Enter the word to reverse: ";
	std::cin >> word;

	for (int i = word.length() - 1; i >= 0; i--) {
		std::cout << word[i];
	}
}
