/* Дана функция y = f(x).Найти значение функции по x :
y = 3x - 7, если x > 1
y = 3, если x = 1
y = 3 * | x + 2 | -7, если x < 1
*/
#include <iostream>
#include <fstream>
#include <string>

int main(){

    setlocale(LC_ALL, "Russian");

    float x;
    float y = 0;
    std::cout << "Введите значение x ";
    std::cin >> x;
    if (x > 1)
        y = 3 * x - 7;
    if (x == 1)
        y = 3;
    if (x < 1)
        y = 3 * abs(x + 2) - 7;
    std::cout << "y=" << y;
    return 0;

 }




