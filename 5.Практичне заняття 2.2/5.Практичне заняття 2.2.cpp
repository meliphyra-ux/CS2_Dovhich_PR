#include <iostream>
using namespace std;

int main()
{
	int p=0;
	char word[80];

	for (int i = 0; i < 80; i++)
	{
		cin >> word[i];
		p++;
		if (word[i] == '0')
			i = 9;
    }
	for (int i = 0; i < p; i++)
		cout << word[i] << endl;


}