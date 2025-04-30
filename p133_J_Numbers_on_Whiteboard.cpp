#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << "1\n1 2\n";
        return;
    }
    if (n == 3) {
        cout << "2\n1 3\n2 2\n";
        return;
    }
    priority_queue<int> pq;
    for (int i = 1; i <= n; ++i) {
        pq.push(i);
    }
    vector<pair<int, int>> operations;
    while (pq.size() > 2) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        operations.emplace_back(a, b);
        int new_num = (a + b + 1) / 2;
        pq.push(new_num);
    }
    int a = pq.top(); pq.pop();
    int b = pq.top(); pq.pop();
    operations.emplace_back(a, b);
    int final_num = (a + b + 1) / 2;
    cout << final_num << '\n';
    for (auto& op : operations) {
        cout << op.first << ' ' << op.second << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}