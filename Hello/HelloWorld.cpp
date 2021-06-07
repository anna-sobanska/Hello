#include <iostream>

void Log(const char* message);
void Calculator();
void bmiCalculator();
void numberFromASCII();


int main() 
{
	Log("Hello World");
	numberFromASCII();
	Calculator();
	bmiCalculator();
	std::cin.get();
}

