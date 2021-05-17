#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double integrer,fr,num;
	cin >> num;
	fr = modf(num, &integrer);
	if (fr < 1,fr > 0.1)
	{
		num = (num * 10);
		cout << num << "/10";
	}
	if (fr < 0.1)
	{
		num = (num * 100);
		cout << num << "/100";
	}
	else
	{
		exit(0);
	}
	
	return 0;

}