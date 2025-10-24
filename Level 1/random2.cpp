// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> nums = {a, b, c};
    vector<int> kopy = nums;
    sort(nums.begin(), nums.end());
    for (int num : nums) {
        cout << num <<endl;
    }
    cout << endl;
    for (int op : kopy) {
        cout << op <<endl;
    }
    return 0;
}
