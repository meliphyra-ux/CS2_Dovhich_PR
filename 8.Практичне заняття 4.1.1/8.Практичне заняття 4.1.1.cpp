#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    int i, n, sum = 0;
    int a[20];

    ifstream f;

    f.open("D:\\2.txt", ios::in);
    cout << "n = "; cin >> n;
    for (i = 0; i < n; i++)
    {
        f >> a[i];
        sum += a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
     
    }
    cout<<"Suma:" << sum << endl;
    f.close();
    system("pause");
    return 0;
};