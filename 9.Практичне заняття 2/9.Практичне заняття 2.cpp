#include <iostream>
#include <cmath>

using namespace std;

int main()
{


    double a, b, c, x;

    cout << " A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = " << x << endl;

        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    else
    {
        cout << "Discriminant less than 0 - any roots" << endl;
    }

    return 0;
}