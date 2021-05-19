#include <iostream>
using namespace std;
int factr(int m);
int main()
{
	int m;
	int n=0;
	cout << "Enter number of factorial" << endl;
	cin >> m;
	cout << factr(m) << endl;
}

int factr(int m) /* рекурсивно */
{
	int answer;
	if (m == 1) 
		return(1);
	answer = factr(m - 1) * m;
	return(answer);
}