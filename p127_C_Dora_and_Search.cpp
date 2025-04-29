//https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        deque<int> dq(n);
        for (int i = 0; i < n; i++) cin >> dq[i];
 
        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = dq[i];
 
        int mn = 1, mx = n;
        for (int i = 0; i < n && !dq.empty(); i++) {
            int a = dq.front();
            int b = dq.back();
 
            if (a == mn) {
                dq.pop_front();
                mn++;
            }
            else if (a == mx) {
                dq.pop_front();
                mx--;
            }
 
            if (dq.empty()) break;
 
            if (b == mn) {
                dq.pop_back();
                mn++;
            }
            else if (b == mx) {
                dq.pop_back();
                mx--;
            }
        }
 
        if (dq.empty()) {
            cout << -1 << endl;
        }
        else {
            int l = 1;
            for (int i = 0; v[i] != dq.front(); i++) l++;
 
            int r = n;
            for (int i = n-1; v[i] != dq.back(); i--) r--;
 
            cout << l << " " << r << endl;
        }
    }
 
    return 0;
}