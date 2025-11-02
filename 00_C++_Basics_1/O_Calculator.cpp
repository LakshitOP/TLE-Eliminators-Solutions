#include <iostream>
using namespace std;

int main() {
    int a,c;
    char b;
    cin >> a >> b >> c;
    if (b == '+') {
        cout << (a + c) << endl;
    } else if (b == '-') {
        cout << (a - c) << endl;
    } else if (b == '*') {
        cout << (a * c) << endl;
    } else if (b == '/') {
        if (c != 0) {
            cout << (a / c) << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }
    return 0;
}