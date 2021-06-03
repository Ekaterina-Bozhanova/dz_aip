/*Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки.Количество строк Н вводит пользователь(можно из файла).*/

#include <iostream>

int main()
{
    char a = 'H';
    int count = 1;
    int x;
    std::cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < count; j++)
            std::cout << a;
        std::cout << std::endl;
        count++;
    }
    return 0;
}

