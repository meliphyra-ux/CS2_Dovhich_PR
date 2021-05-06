#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{

	const int m = 20;

	int n[m];
	int k;
	cout << "Enter k:" << endl;
	cin >> k;
	for (int i = 0; i < m; i++)
	{
		n[i] = rand() % 101;
		cout << "Massiv: " << n[i] << endl;
	}
	int l = 2 * k - 2;
	int q = 2 * k - 1;
	int max = n[0];
	int min = n[0];
	for (int r = -1; r < l; r=r+2)
	{
		if (max < n[r]) max = n[r];
	}
	for (int r = 0; r < q; r = r + 2)
	{
		if (min > n[r]) min = n[r];
	}
	int o = max + min;
	cout << max << " " << min << endl;
	cout <<"Sum of max (2k-2) + min(2k-1):"  << o << endl;
	return 0;
}