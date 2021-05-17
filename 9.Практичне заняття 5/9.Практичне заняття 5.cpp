#include <iostream>
#include <cstdlib> 
using namespace std;
const int n = 10;
int main()
{
	int max, min;
	int m[n];
	cout << "Enter numbers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	min = m[0];
	max = m[0];
	for (int j = 0; j< n; j++)
	{
		if (max < m[j]) max = m[j];
		if (min > m[j]) min = m[j];
	}
	cout << "Min: " << min << " Max: " << max << endl;
}