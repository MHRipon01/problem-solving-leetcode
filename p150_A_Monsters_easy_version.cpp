// https://codeforces.com/problemset/problem/1784/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll ans = 0, current_min = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= current_min)
            {
                ans += v[i] - current_min;
                current_min++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}