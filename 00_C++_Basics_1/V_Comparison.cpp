// Includes almost all standard library headers
#include <bits/stdc++.h>

// Use the standard namespace to avoid typing std::
using namespace std;

// --- Type Aliases ---
using ll = long long;          // For 64-bit integers
using vi = vector<int>;        // Vector of integers
using vll = vector<ll>;        // Vector of long longs
using pi = pair<int, int>;     // Pair of integers
using vpi = vector<pi>;        // Vector of pairs
using vs = vector<string>;     // Vector of strings

// --- Macros ---
#define pb push_back            // Shorthand for vector.push_back()
#define sz(x) (int)(x).size()   // Shorthand for finding size (returns int)
#define all(x) (x).begin(), (x).end() // Shorthand for ranges (e.g., for sort)
#define F first                 // Shorthand for pair.first
#define S second                // Shorthand for pair.second

// --- Constants ---
const ll MOD = 1e9 + 7;       // Common modulo for problems
const ll INF = 1e18;          // A large value (infinity) for long long
const int INFM = 1e9;         // A large value (infinity) for int

/**
 * @brief Solves a single test case.
 */
void solve() {
    int a,b;
    char c;
    cin >>a >> c>> b;
    if(c=='>'){
        if(a>b){
            cout << "Right\n";
        }else{
            cout << "Wrong\n";
        }
}   else if(c=='<'){
        if(a<b){
            cout << "Right\n";
        }else{
            cout << "Wrong\n";
        }
    }else if(c=='='){
        if(a==b){
            cout << "Right\n";
        }else{
            cout << "Wrong\n";
        }
    }
}

/**
 * @brief Main function: Sets up I/O and handles test cases.
 */
int main() {
    // --- Fast I/O Setup ---
    // Disables C-style I/O synchronization
    ios_base::sync_with_stdio(false); 
    // Unties cin from cout, allowing them to operate independently
    cin.tie(NULL); 
    // You can also untie cout
    // cout.tie(NULL);

    // --- Test Case Handling ---
    int t = 1; // Default to one test case
    
    // Uncomment the line below if the problem has multiple test cases
    // cin >> t; 

    while (t--) {
        solve(); // Call the solve function for each test case
    }

    return 0;
}