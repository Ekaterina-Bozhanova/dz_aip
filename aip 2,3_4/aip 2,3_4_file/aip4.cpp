#include <iostream>
#include <fstream>
/*Вычислите значение выражения */

int main()
{
	setlocale(LC_ALL, "Russian");

	std::ofstream f("Answer.txt");

	float x, Z;
	std::cout << "Вычислите значение выражения :(abs(x - 5) - sin(x)) / 3 + sqrt(x * x + 2014) * cos(2 * x) - 3" << std::endl;
	std::cout << "Введите  x = ";
	std::cin >> x;
	Z = (abs(x - 5) - sin(x)) / 3 + sqrt(x * x + 2014) * cos(2 * x) - 3;
	std::cout <<"Значение выражения = " <<Z;

	f << Z;
	f.close();
}
