// Task: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    while(n--) {
        ll a, b; 
        cin >> a >> b;
        if (a > b) {
            swap(a, b);
        }

        ll sum = (b - a + 1) * (a + b) / 2;
        
        
        cout << sum << endl;
    }
    
    return 0;
}