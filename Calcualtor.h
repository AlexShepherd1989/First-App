#ifndef CALCULATOR_H
#define CALCULATOR_H

enum Operators {
	Sum, 
	Sub
};

void Calculate(Operators op, float x, float y);

#endif 
