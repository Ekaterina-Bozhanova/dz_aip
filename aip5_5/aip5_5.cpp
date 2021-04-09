/*
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область. 
x ^ 2 + y ^ 2 = 1
 x * x + y * y >= 0.3 
*/


#include <iostream>
#include<math.h>

int main(){

    setlocale(LC_ALL, "Russian");

    double x, y;
    
    std::cout << "Введите значение x ";
    std::cin >> x;
    std::cout << "Введите значение y ";
    std::cin >> y;
    if (y >= 0)
        if (x <= 0)
            if (sqrt(x * x + y * y) < 1)
                std::cout << "Попала";
            else
                std::cout << "Не попала";
        else
            if (sqrt(x * x + y * y) < 1 && sqrt(x * x + y * y) > 0.3)
                std::cout << "Попала";
            else
                std::cout << "Не попала";
    else
        std::cout << "Не попала";
}


