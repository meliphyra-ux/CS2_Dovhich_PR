#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int m = 50;
	int n[m];
	for (int i = 0; i < m; i++)
	{
		n[i] = rand() % (100-1) + 1;
		cout << "Massiv: " << n[i] << endl;
	}
	
	int j=0;

	for (int i = 0; i < m; i++)
	{
		
		if (n[i] % 2 == 1)
		{
			
			n[j] = n[i];
			j++;
		}
		
	
	}
	for (int i = 0; i < j; i++)
	{
		cout << "Massiv1:\n" << n[i] << endl;
	}
}