#include <iostream>
#include <fstream>

/*Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого
числа.*/

int main()
{
    setlocale(LC_ALL, "Russian");

    std::ofstream f("Answer.txt");
    
    float a, a2, a3;
    std::cout << "Введите число ";
    std::cin >> a;
    a2 = a * a;
    a3 = a * a * a;
    std::cout << "Число в квадрате " << a2 << std::endl;
    std::cout <<"Число в кубе " << a3;

    f << a2 << "   " << a3;
    f.close();

}


