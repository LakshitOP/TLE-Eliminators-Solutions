#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a>='a'&& a<='z'){
        cout << char(a-('a'-'A')) << endl;
    } else{
        cout << char(a+('a'-'A')) << endl;
    }
    return 0;
}