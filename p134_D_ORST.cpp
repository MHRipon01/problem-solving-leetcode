#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, maxOfB = 0;
        cin >> n >> m;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            maxOfB = max(maxOfB, b);
        }

        sort(a.end() - maxOfB, a.end());

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout <<'\n';
    }

    return 0;
}