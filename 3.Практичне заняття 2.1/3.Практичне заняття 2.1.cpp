#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int a = 7;
	int b = 14;
	int c = 10;
	const int m = 20;
	int n[m];
	for (int i = 0; i < m; i++)
	{
		n[i] = rand() % (b - a) + a;
		cout << "Massiv: " << n[i] << endl;
	}
	system("pause");
	for (int i = 0; i < m; i++)
	{
		if (n[i] >= 10)
		{
			n[i] = n[i] - c;
		}
		cout << "Massiv: " << n[i] << endl;
	}



}