#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int day;

    setlocale(0, "Russian");

    cout << "Введите номер дня недели: ";
    cin >> day;

    switch (day)
    {
    case 1: cout << "понедельник"; break;
    case 2: cout << "вторник"; break;
    case 3: cout << "среда"; break;
    case 4: cout << "четверг"; break;
    case 5: cout << "пятница"; break;
    case 6: cout << "суббота"; break;
    case 7: cout << "воскресенье"; break;
    default: cout << "Неверно введен день недели"; break;
    }

    return 0;
}