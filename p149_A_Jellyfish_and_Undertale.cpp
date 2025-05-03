// https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        ll ans = 0;
        cin >> a >> b >> n;
        ans = b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += min(a - 1, arr[i]);
        }
        cout << ans << endl;
    }

    return 0;
}