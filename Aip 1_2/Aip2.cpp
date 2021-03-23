#include <iostream>
/*Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: Прямоугольный треугольник*/
int main()
{
    float a, b, S, P;
    std::cout << "Enter side a ";
    std::cin >> a;
    std::cout << "Enter side b ";
    std::cin >> b;
    P = a + b + sqrt(a * a + b * b);
    S = (a * b)/2;
    std::cout << "S =" << S << std::endl;
    std::cout << "P =" << P;

}

