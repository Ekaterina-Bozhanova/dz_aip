/*Дана функция y=f(x). Найти значение функции по x:
y = (2+x)2 + 7, если x > -8
y = 5, если x = -8
y = |2 * x-1| - 1, если x < -8

*/


#include <iostream>

int main(){

    setlocale(LC_ALL, "Russian");

    float x, y;
    std::cout << "Введите значение x";
    std::cin >> x;
    if (x > -8)
        y = (2 + x) * 2 + 7;
    if (x == -8)
        y = 5;
    if (x < -8)
        y = abs(2 * x - 1) - 1;
    std::cout << "y=" << y;
}


