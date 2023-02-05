//
//  main.cpp
//  Module4-10
//
//  Created by Ольга Полевик on 14.06.2021.
//

#include <iostream>
#include "calculate.h"
using namespace std;

int main()
{
    setlocale (LC_ALL,"");
    int a = 0;
    int b = 0;
    char operation = 0;
    
    while (true)
    {
        cout << "Выберите математическую операцию:\n + — сложение,\n - - вычитание,\n * - умножение,\n / - деление,\n ! - вычисление факториала числа a,\n ^ - вычисление числа a в степени b \n или нажмите 'q' для завершения работы.  " << endl;
        cin >> operation;
        
        bool quit = false;
        
        switch (operation)
        {
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                cout << "Введите первое целое значение a: " << endl;
                cin >> a;
                cout << "Введите второе целое значение b: " << endl;
                cin >> b;
                break;
            case '!':
                cout << "Введите целое значение a: " << endl;
                cin >> a;
                break;
            case 'q':
                quit = true;
                break;
            default:
                cout << "Для выбора нужной математической операции введите сооветсвующий оператор " << endl;
                break;
        }
        
        if (quit)
            break;
        
        switch (operation)
        {
            case '+':
            {
                cout << "Результат " << a << " + " << b << " = "  << Plus(a, b) << endl;
            }
                break;
            case '-':
            {
                cout << "Результат " << a << " - " << b << " = "  << Minus(a, b) << endl;
            }
                break;
            case '*':
            {
                cout << "Результат " << a << " * " << b << " = "  << Multiply(a, b) << endl;
            }
                break;
            case '/':
                if (b != 0)
                {
                    cout << "Результат " << a << " / " << b << " = "  << Divide(a, b) << endl;
                }
                else
                {
                    cout << "Делить на ноль нельзя!" << endl;
                }
                break;
            case '!':
                {
                    cout << "Результат факториала числа " << a << " = "  << Factorial(a) << endl;
                }
                break;
            case '^':
                {
                    cout << "Результат возведения в степень " << b << " числа " << a << " = "  << Power(a, b) << endl;
                }
                break;
        }
    }
    cout << "Работа с калькулятором завершена, спасибо!" << endl;
    return 0;
}
