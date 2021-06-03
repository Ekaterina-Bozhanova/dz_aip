/*Протабулировать функцию(шаг и диапазон задаёт пользователь) :
    y = sqrt(2+4*x^2)+6*x+sin(8*x+11)*/


#include <iostream>
#include<cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    float dx, xf, x;
    float f;
    std::cout << "Решить функцию.  \nВведите dx: ";
    std::cin >> dx;
    std::cout << "Введите x0: ";
    std::cin >> x;
    std::cout << "Введите xf: ";
    std::cin >> xf;
    // заголовок таблицы
    std::cout << "\tx\t\ty" << std::endl;
    std::cout.precision(5);
    while (x < xf) {
        f = sqrt(2 + 4 * x*x + 6 * x + sin(8 * x + 11));
        std::cout << "\t"
            << x
            << "\t\t"
            << f
            << std::endl;
        x += dx;
    }
    return 0;

}

