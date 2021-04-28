#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int sum = 0;
    int c;
    int b;
    setlocale(0, "");
  
  
    while (i != 0)
    {
        cout << "Введiть числo:" << endl;
        cin >> i;
        sum += i;
    
    }
    cout << " Сума всiх чисел:\n" << sum << endl;
}