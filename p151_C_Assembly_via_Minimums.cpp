//https://codeforces.com/problemset/problem/1857/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int totalPairs = n * (n - 1) / 2;
        vector<int> b(totalPairs);
        for (int i = 0; i < totalPairs; i++) cin >> b[i];

        sort(b.begin(), b.end());

        for (int i = 0; i < totalPairs; i += --n)
            cout << b[i] << ' ';
        
        cout << "1000000000\n";
    }
    return 0;
}
