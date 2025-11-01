// Includes almost all standard library headers
#include <bits/stdc++.h>
using namespace std;

// --- Type Aliases ---
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using vpi = vector<pi>;
using vs = vector<string>;

// --- Macros ---
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define F first
#define S second

// --- Constants ---
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int INFM = 1e9;

/**
 * @brief Solves a single test case.
 */
void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    // ❌ You missed declaring variable types and semicolons
    ll fop = max(a, c);  // find overlap start
    ll lop = min(b, d);  // find overlap end

    if (fop <= lop) {
        cout << fop << " " << lop << "\n";
    } else {
        cout << -1 << "\n";
    }
}

/**
 * @brief Main function: Sets up I/O and handles test cases.
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--) {
        solve();
    }

    return 0;
}
