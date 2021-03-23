/* Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
1 кг 800 г конфет.*/

#include <iostream>

int main()
{
    float x, y, s1, s2;
    std::cout << "Enter the sum for 1 kg of sweets\n";
    std::cin >> x;
    std::cout << "Enter the sum for 1 kg of cookies\n";
    std::cin >> y;
    s1 = 0.3 * x + 0.4 * y;//sweets
    s2 = 3 * (2 * x + 1.8 * y);//cookies
    std::cout << "a)s="<<s1<< std::endl;
    std::cout << "a)s="<<s2<< std::endl;
}