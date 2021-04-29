#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{

	const int m = 20;
	int n[m];
	for (int i = 0; i < m; i++)
	{
		n[i] = rand() % 100;
		cout << "Massiv: " << n[i] << endl;
	}
	
	int max = n[0];
	int min = n[0];
	for (int r = 1; r < m; r++)
	{
		if (max < n[r]) max = n[r];
		if (min > n[r]) min = n[r];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

}