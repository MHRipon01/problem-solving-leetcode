//https://vjudge.net/contest/711414#problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x, y;
    cin >> t;
    cout << 2024 %1000 << endl;
    while (t--)
    {
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int total = 0;
        for (int i = 1; i <= n; i++)
        {
            int normalCost = x * v[i];
            total += min(normalCost, y);


        }

        cout << total << endl;
    }

    return 0;
}