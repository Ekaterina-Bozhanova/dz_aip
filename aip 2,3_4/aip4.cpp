#include <iostream>
/*Вычислите значение выражения */

int main()
{
	float x, Z;
	std::cout << "Calculate the value of the expression:(abs(x - 5) - sin(x)) / 3 + sqrt(x * x + 2014) * cos(2 * x) - 3" << std::endl;
	std::cout << "Enter x = ";
	std::cin >> x;
	Z = (abs(x - 5) - sin(x)) / 3 + sqrt(x * x + 2014) * cos(2 * x) - 3;
	std::cout <<"Expression value = " <<Z;
}
