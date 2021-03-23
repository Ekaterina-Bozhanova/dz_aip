#include <iostream>


/*Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.Температура (градусы, кельвины, фаренгейты)*/
/*(32 °F − 32) × 5/9 + 273,15 = 273,15 K   (0 K − 273,15) × 9/5 + 32    (0 °C × 9/5) + 32    (32 °F − 32) × 5/9 + 273,15
*/
int main()
{
    int a, b, c;
    float x;
    float P;

    std::cout << "First enter the number of the quantity you want to convert to another, then the number of the quantity you want to convert"<<std::endl;
    std::cout << "Degrees Celsius - 1     Kelvin - 2     Fahrenheit - 3" << std::endl;
    std::cin >> a >> b ; 
    std::cout << "Enter number" << std::endl;   
    std::cin >>x;  
    if ((a==1) && (b==2)) {
        P = (x - 32) * 5 / 9 + 273.15;
    }
    if ((a == 1) && (b == 3)) {
        P = x * 9 / 5 + 32;
    }
    if ((a == 2) && (b == 1)) {
        P = x-273.15;
    }
    if ((a == 2) && (b == 3)) {
        P = (x - 273.15) * 9 / 5 + 32;
    }
    if ((a == 3) && (b == 1)) {
        P = (x * 9 / 5) + 32;
    }
    if ((a == 3) && (b == 2)) {
        P = (x - 32) * 5 / 9 + 273.15;
    }
    std::cout << P;


}
