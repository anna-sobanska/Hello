#include <iostream>

void bmiCalculator() {
	float weight, height, bmi;

	std::cout << "Enter your weight(kg), height(m): ";
	std::cin >> weight >> height;

	bmi = weight / (height * height);

	if (bmi < 18.5)
		std::cout << "You are underweight" << std::endl;
	else if (bmi > 25 )
		std::cout << "You are overweight" << std::endl;
	else 
		std::cout << "You are normal weight" << std::endl;

	std::cout << "Your BMI is " << bmi;
}