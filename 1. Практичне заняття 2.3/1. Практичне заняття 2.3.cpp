#include <iostream>
using namespace std;

int main()
{
    int vvid;
    int g;
    int c;
    cout << "Enter 2 numbers" << endl;
    cin >> g;
    cin >> c;
    int a = g * c;
    cout << "Enter your try" << endl;
    cin >> vvid;
    if (vvid == a)
    {
        cout << "Correct " << endl;
    }
    else
    {
        cout << "You're wrong. Correct anwser:\n" << a << endl;
    }
    return 0;
}