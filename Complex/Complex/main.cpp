#include "Complex.h"

#include <iostream>

int main()
{
	Complex complex = Complex(1);
	std::cout << complex.getReal() << "\n" << complex.getLm();
	return 0;
}