#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int m, n, NOD;
	cout << "Enter 2 numbers: " << endl;
	cin >> m >> n;
	while (m != n)
	{
		if (m > n)
			m -= n;
		else
			n -= m;
	}
	NOD = n;
	cout << "NOD =" << NOD << endl;
	return 0;
}

