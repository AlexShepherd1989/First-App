#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Calcualtor.h"

void PrintOperators(std::vector<std::string>& operators) {
	for (int i = 0; i < operators.size(); i++)
	{
		std::cout << i + 1 << ". " << operators[i] << std::endl;
	}
}

void CheckOnSelectedOperator(int operatorIndex, float x, float y) {
	switch (operatorIndex) {
	case 1:
		Calculate(Sum, x, y);
		break;
	case 2:
		Calculate(Sub, x, y);
		break;
	default:
		throw std::invalid_argument("Invalid operator");
	}
}

int main()
{
	try {
		std::cin.exceptions(std::ios::failbit | std::ios::badbit);

		float x;
		float y;
		int operatorIndex;

		std::vector<std::string> operators = { "Sum", "Sub" };

		std::cout << "Enter first value: ";
		std::cin >> x;

		std::cout << "Enter second value: ";
		std::cin >> y;

		std::cout << "Select operator: " << std::endl;
		PrintOperators(operators);
		std::cin >> operatorIndex;

		CheckOnSelectedOperator(operatorIndex, x, y);
	}
	catch (const std::ios_base::failure& e) {
		std::cerr << "Invalid input! Please enter a number." << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Unexpected error: " << e.what() << std::endl;
	}
}