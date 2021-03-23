#include <iostream>

/*Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого
числа.*/

int main()
{
    float a, a2, a3;
    std::cout << "Enter the number ";
    std::cin >> a;
    a2 = a * a;
    a3 = a * a * a;
    std::cout << "Number squared " << a2 << std::endl;
    std::cout <<"Number cube " << a3;

}


