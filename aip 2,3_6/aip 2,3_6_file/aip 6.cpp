/* Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
1 кг 800 г конфет.*/

#include <iostream>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::ofstream f("Answer.txt");

    float x, y, s1, s2;
    std::cout << "Введите сумму за 1 кг конфет\n";
    std::cin >> x;
    std::cout << "Введите сумму за 1 кг печенек\n";
    std::cin >> y;
    s1 = 0.3 * x + 0.4 * y;          //sweets
    s2 = 3 * (2 *x + 1.8 * y);      //cookies
    std::cout << "a)s="<<s1<< std::endl;
    std::cout << "b)s="<<s2<< std::endl;

    f << "a)s=" << s1 << "b)s=" << s2;
    f.close();
}