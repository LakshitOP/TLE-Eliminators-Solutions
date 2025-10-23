//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter 2 integers: ";
    cin >> a>> b;
    if (a==0||b==0){
        cout<< "Multiples" << endl;

    }
    else if (a%b ==0 || b%a ==0){
        cout<< "Multiples" << endl;
    }
    else{
        cout << "No Multiples"<<endl;
    }
    return 0;
}