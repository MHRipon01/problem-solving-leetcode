// https://codeforces.com/problemset/problem/2043/A

#include <bits/stdc++.h>
using namespace std;

long long coins(long long n)
{
    if (n <= 3)
    {
        return 1;
    }
    return 2 * coins(n / 4);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << coins(n) << '\n';
    }

    return 0;
}
