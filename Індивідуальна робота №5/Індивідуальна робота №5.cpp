#include <iostream>
using namespace std;
int main()
{
	char n[9];
	int p[9];
	for (int i = 0; i < 9; i++)
		cin >> n[i];
	for (int i = 0; i < 9; i++)
	{
		p[i] = n[i] - '0';
	}
	cout << "Digits in int (Variant 180): " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << p[i];
	}
}