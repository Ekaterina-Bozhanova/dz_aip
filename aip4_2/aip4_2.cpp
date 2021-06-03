/*Протабулировать функцию(шаг и диапазон задаёт пользователь) :
    y = (-3 + x)2 + 2x + 5*/

#include <iostream>
#include <iomanip> 

int main()
{
    setlocale(LC_ALL, "Russian");
        float dx, xf, x;
        float f;
        std::cout << "Решить функцию. \nВведите  dx: ";
        std::cin >> dx;
        std::cout << "Введите x0: ";
        std::cin >> x;
        std::cout << "Введите xf: ";
        std::cin >> xf;
        
        std::cout << "\tx\t\ty" << std::endl;
        std::cout.precision(5);
        while (x < xf) {
            f = (-3 + x)*2 + 2*x + 5;
            std::cout << "\t"
                << x
                << "\t\t"
                << f
                << std::endl;
            x += dx;
        }
        return 0;
}


