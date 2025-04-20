// https://codeforces.com/problemset/problem/903/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());

    for (int i = 0, j = 1; i < n, j < n;)
    {
        if (ar[i] < ar[j])
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << n - cnt << '\n';

    return 0;
}
