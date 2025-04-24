#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n + 1); // 1-based indexing for simplicity
    
    if (x == 0) {
        // Place 0 at the end to maximize MEX = 0
        for (int i = 1; i < n; i++) {
            p[i] = i; // p[1] = 1, p[2] = 2, ..., p[n-1] = n-1
        }
        p[n] = 0;
    } else {
        // Place {0, 1, ..., x-1} in positions 1 to x
        for (int i = 1; i <= x; i++) {
            p[i] = i - 1; // p[1] = 0, p[2] = 1, ..., p[x] = x-1
        }
        // Place x at position n
        p[n] = x;
        // Place {x+1, x+2, ..., n-1} in positions x+1 to n-1
        for (int i = x + 1; i < n; i++) {
            p[i] = i; // p[x+1] = x+1, p[x+2] = x+2, ..., p[n-1] = n-1
        }
    }
    
    // Output the permutation (0-based values)
    for (int i = 1; i <= n; i++) {
        cout << p[i] << (i < n ? " " : "\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}