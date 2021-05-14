#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, t;
	double a;
	ofstream f;
	f.open("D:\\2.txt", ios::out);
	cout << "t = "; cin >> t;
	for (i = 0; i < t; i++)
	{
		cout << "a = ";
		//ввод числа
		cin >> a;
		f << a << "\n";
	}
	f.close();

	int j, n;
	int b[20];

	ifstream g;

	g.open("D:\\2.txt", ios::in);
	cout << "n = "; cin >> n;
	for (j = 0; j < n; j++)
	{
		g >> b[j];
		b[j] += 3;
	}
	for (j = 0; j < n; j++)
	{
		cout << b[j] << endl;
	}
}
