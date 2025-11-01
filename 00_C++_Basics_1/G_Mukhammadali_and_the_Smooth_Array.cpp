#include <bits/stdc++.h>
using namespace std;

// Type aliases for cleaner code
using ll = long long;
using vll = vector<ll>;

// A Fenwick Tree (Binary Indexed Tree) that supports
// prefix-maximum queries and point-updates (with max).
struct FenwickTree {
    vll bit;
    int n;

    // Initialize with size m+1
    FenwickTree(int m) {
        n = m + 1;
        bit.assign(n, 0); // 0 is the identity for max
    }

    // Update the value at index 'idx' to be at least 'val'
    // This is 1-indexed
    void update(int idx, ll val) {
        for (; idx < n; idx += idx & -idx) {
            bit[idx] = max(bit[idx], val);
        }
    }

    // Query the maximum value in the range [1, idx]
    // This is 1-indexed
    ll query(int idx) {
        ll res = 0;
        for (; idx > 0; idx -= idx & -idx) {
            res = max(res, bit[idx]);
        }
        return res;
    }
};

void solve() {
    int n;
    cin >> n;
    
    vll a(n), c(n);
    ll total_cost = 0;
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        total_cost += c[i];
    }
    
    // Special case (solves n=1 and is good practice)
    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    // --- Coordinate Compression ---
    // 1. Copy 'a' to a new vector 'b'
    vll b = a;
    // 2. Sort 'b'
    sort(b.begin(), b.end());
    // 3. Remove duplicates
    b.erase(unique(b.begin(), b.end()), b.end());
    
    // 'm' is the number of unique elements
    int m = b.size();
    
    // Helper function to get the 0-based compressed index
    auto get_index = [&](ll val) {
        return lower_bound(b.begin(), b.end(), val) - b.begin();
    };
    // -----------------------------

    // Initialize the Fenwick Tree
    FenwickTree ft(m);
    
    ll max_kept_cost = 0;
    
    for (int i = 0; i < n; i++) {
        // 1. Get the 0-based compressed index for a[i]
        int idx = get_index(a[i]);
        
        // 2. Query for max dp of all elements with value <= a[i]
        // We use 'idx + 1' because BIT is 1-indexed
        ll max_prev_dp = ft.query(idx + 1);
        
        // 3. Calculate the dp value for this element
        ll current_dp = c[i] + max_prev_dp;
        
        // 4. Update the BIT at this element's position
        ft.update(idx + 1, current_dp);
        
        // 5. Update the global maximum cost we can keep
        max_kept_cost = max(max_kept_cost, current_dp);
    }
    
    // The answer is the total cost minus the max cost we managed to keep
    cout << total_cost - max_kept_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}