// https://codeforces.com/problemset/problem/2092/B
#include <bits/stdc++.h>
using namespace std;

string sol()
{
    int n, countOdd = 0, countEven = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            countEven += a[i] == '0';
            countOdd += b[i] == '0';
        }
        else
        {
            countOdd += a[i] == '0';
            countEven += b[i] == '0';
        }
    }

    return ((countEven >= (n + 1) / 2 && countOdd >= n / 2) ? "YES" : "NO");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
       cout << sol() << endl;
    }

    return 0;
}