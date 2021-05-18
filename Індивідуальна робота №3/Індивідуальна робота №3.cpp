#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (n - 1); j > i; j--) // для всех элементов после i-ого
        {
            if (a[j - 1] > a[j]) // если текущий элемент меньше предыдущего
            {
                int temp = a[j - 1]; // меняем их местами
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}