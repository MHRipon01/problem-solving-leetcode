#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent;
    UnionFind(int n) : parent(n) {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int u) {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }
    void unite(int u, int v) {
        u = find(u), v = find(v);
        if (u != v)
            parent[v] = u;
    }
};

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    
    int sum_a = 0;
    for (char c : a) sum_a += (c == '1');
    if (sum_a % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    int total_nodes = 2 * n;
    UnionFind uf(total_nodes);
    
    for (int i = 1; i < n; ++i) { // i is 0-based, representing original i >=2
        // a[i] and b[i-1]
        int a_node = i;
        int b_prev_node = n + (i - 1);
        uf.unite(a_node, b_prev_node);
        // b[i] and a[i-1]
        int b_node = n + i;
        int a_prev_node = i - 1;
        uf.unite(b_node, a_prev_node);
    }
    
    vector<int> a_ones(total_nodes, 0), b_zeros(total_nodes, 0);
    for (int i = 0; i < n; ++i) {
        int root = uf.find(i);
        a_ones[root] += (a[i] == '1');
    }
    for (int i = 0; i < n; ++i) {
        int root = uf.find(n + i);
        b_zeros[root] += (b[i] == '0');
    }
    
    for (int i = 0; i < n; ++i) {
        int root = uf.find(i);
        if (a_ones[root] > 0 && b_zeros[root] == 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}