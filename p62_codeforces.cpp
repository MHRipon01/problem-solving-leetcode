//https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    long long sum = 0;
    int minOdd = INT_MAX; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 != 0) {
            minOdd = min(minOdd, arr[i]); 
        }
    }
    if (sum % 2 != 0) {
        sum -= minOdd;
    }

    cout << sum << endl;
    return 0;
}
