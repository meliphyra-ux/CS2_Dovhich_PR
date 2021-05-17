#include <iostream>
using namespace std;
int factorial(int m);
int main()
{
	int m;
	int n=0;
	cout << "Enter number of factorial" << endl;
	cin >> m;
	cout << factorial(m) << endl;
}

int factorial(int m)
{
	int p = 1;
	for (int i = 1; i <= m; i++)
		p = p * i;
	return p;
}