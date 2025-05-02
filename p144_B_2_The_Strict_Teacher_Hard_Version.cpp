// https://codeforces.com/problemset/problem/2005/B2


#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> teacher(m);

    for (int i = 0; i < m; i++)
    {
        cin >> teacher[i];
    }

    sort(teacher.begin(), teacher.end());

    while (q--)
    {
        int david;
        cin >> david;

        if (david < teacher[0])
        {
            cout << teacher[0] - 1 << endl;
            continue;
        }

        if (david > teacher[m-1])
        {
            cout << n - teacher[m - 1] << endl;
            continue;
        }

        auto it = lower_bound(teacher.begin(), teacher.end(), david);
        auto jt = it;
        jt--;

        int left = *jt, right = *it;

        int mid = (right + left) / 2;
        cout << min(abs(mid - left), abs(mid - right)) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}