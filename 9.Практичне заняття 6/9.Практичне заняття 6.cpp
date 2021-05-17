#include <iostream>

using namespace std;

int main()
{
    int* mas, n, sum;
    sum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    mas = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]= ";
        cin >> mas[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
            sum += mas[i];
    }

    cout << "Suma: " << sum;

    return 0;
}