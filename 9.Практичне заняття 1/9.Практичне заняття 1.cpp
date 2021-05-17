#include <iostream>
using namespace std;

int main()
{
	int m;
	int n=0;
	int p=1;
	cout << "Enter number of factorial" << endl;
	cin >> m;
	for (int i = 1; i <= m; i++)
		p = p * i;
	cout << p << endl;
}