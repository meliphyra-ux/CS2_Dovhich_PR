#include <iostream>
#include <clocale>
#include <conio.h>
using namespace std;

string cd(int g)
{

    string name1;
    int c = g % 100;
    int c1 = g % 10;
    if (c < 10 && c > 20)
        name1 = "гривень";
    else
    {
        switch (c1)
        {
        case 1: name1 = "гривня";
            break;
        case 2:
        case 3:
        case 4: name1 = "гривни";
            break;
        default: name1 = "гривень";
            break;
        }
    }
    return name1;
}

int main()
{
    int g;
    string name;

    setlocale(LC_CTYPE, "Russian");

    cout << "Введіть число" << endl;
    cin >> g;
    name = cd(g);
    cout << g << " " << name;
    return 0;

}