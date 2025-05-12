// https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll c;
        cin >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }

        sort(a.begin(), a.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > c)
                break;
            sum += a[i];
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}