//https://codeforces.com/problemset/problem/1498/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, w;
        cin >> n >> w;

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            mp[num]++;
        }

        multiset<pair<int, int>> ml;
        for (auto [key, val]: mp) ml.insert({-key, val});

        int height = 0, r = w;
        while (!ml.empty()) {
            if (r == 0) {
                r = w;
                height++;
                continue;
            }

            auto it = ml.lower_bound({-r, 1});
            if (it == ml.end()) {
                r = w;
                height++;
                continue;
            }

            int key = it->first;
            int val = it->second;

            ml.erase(it);
            r += key;
            val--;

            if (val > 0) {
                ml.insert({key, val});
            }
        }

        cout << height+1 << endl;
    }

    return 0;
}