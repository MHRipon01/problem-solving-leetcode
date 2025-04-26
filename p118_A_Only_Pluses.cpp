//https://codeforces.com/problemset/problem/1992/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int maxResult = 0;

        for (int x = 0; x <= 5; x++) {
            for (int y = 0; y <= 5 - x; y++) {
                int z = 5 - x - y;
                int na = a + x;
                int nb = b + y;
                int nc = c + z;
                maxResult = max(maxResult, na * nb * nc);
            }
        }

        cout << maxResult << '\n';
    }

    return 0;
}
