#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, n;
	double a;
	ofstream f;
	f.open("D:\\2.txt", ios::out);
	cout << "n = "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "a = ";
		//ввод числа
		cin >> a;
		f << a << "\n";
	}
	f.close();
	system("pause");
	return 0;
}
