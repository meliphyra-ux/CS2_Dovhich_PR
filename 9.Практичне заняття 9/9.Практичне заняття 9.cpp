#include <iostream>
#include <string>

using namespace std;

int main() {

    string inp;
    cout << "Enter number:";
    cin >> inp;
;    cout << "Input String: " << inp << endl;

    try {
        int res = stoi(inp);
        cout << "Integer: " << res << endl;
    }
    catch (std::invalid_argument e) {
        cout << "Caught Invalid Argument Exception\n";
    }
    return 0;
}