#include <iostream> 
#include <stdexcept>
#include "Calcualtor.h"

void Calculate(Operators op, float x, float y)
{
	float result = 0.f;

	switch (op) {
	case Sum:
		result = x + y;
		break;
	case Sub:
		result = x - y;
		break;
	default:
		throw std::invalid_argument("Invalid operator");
	}

	std::cout << "Result: " << result << std::endl;

}
