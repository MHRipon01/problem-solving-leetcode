#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N == 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> A;

        if (N == 2) {
            cout << "3 -3\n";
            continue;
        }

        if (N == 3) {
            cout << "1 2 -3\n";
            continue;
        }

        vector<int> base({1, -1, 2, -2});
        int count = N;
        while (count >= 4) {
            A.insert(A.end(), base.begin(), base.end());
            count -= 4;
        }

        if (count == 1) {
            cout << -1 << "\n";
            continue;
        }

        if (count == 2) {
            A.push_back(3);
            A.push_back(-3);
        }

        if (count == 3) {
            A.push_back(1);
            A.push_back(2);
            A.push_back(-3);
        }

        for (int x : A)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}