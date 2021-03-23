#include <iostream>
#include <fstream>
#include <string> 

/*Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: Прямоугольный треугольник*/

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ofstream f("Answer.txt");
    
    float a, b, S, P;

    std::cout << "Введите сторону a ";
    std::cin >> a;
    std::cout << "Введите стороу b ";
    std::cin >> b;
    P = a + b + sqrt(a * a + b * b);
    S = (a * b)/2;
    std::cout << "S =" << S << std::endl;
    std::cout << "P =" << P;

    f <<"P="<<P<<" S="<<S;
    f.close();

return 0;
}

