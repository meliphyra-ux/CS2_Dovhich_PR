#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i, n;
    vector <int> a;
    int x;
    ifstream f;

    f.open("D:\\2.txt", ios::in);
    while (!f.eof())
    {
        f >> x;
        a.push_back(x);
    }
    for (i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    f.close();
    system("pause");
    return 0;
}
