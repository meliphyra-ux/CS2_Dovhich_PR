#include "iostream"
using namespace std;


int nod(int n, int m)
{
    if (m == 0)
        return n;
    if (n > m)
        return nod(m, n - m);
    else
        return nod(n, m - n);
}

int main()
{
    int n = 4;
    int* arr;
    int nod_;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " number " << endl;
        cin >> arr[i];
    }
    if (n >= 2) {
        nod_ = nod(arr[0], arr[1]);
    }
    else {
        nod_ = arr[0];
    }
    for (int i = 2; i < n; i++) {
        nod_ = nod(nod_, arr[i]);
    }
    cout << "NCD: " << nod_ << endl;
    cout << "Variant: 143 "  << endl;
    system("pause");
    return 0;
}