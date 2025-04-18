#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, K, L;
        cin >> N >> K >> L;
        
        vector<int> sng;
        
        for (int i = 0; i < N; i++) {
            int M, lOfI;
            cin >> M >> lOfI;
            if (lOfI == L) {
                sng.push_back(M);
            }
        }
        
        if (sng.size() < K) {
            cout << -1 << '\n';
            continue;
        }
        
        sort(sng.begin(), sng.end(), greater<int>());
        
        int sum = 0;
        for (int i = 0; i < K; i++) {
            sum += sng[i];
        }
        
        cout << sum << '\n';
    }
    
    return 0;
}