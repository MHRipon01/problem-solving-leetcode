// https://codeforces.com/problemset/problem/2065/A

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
        string w;
        cin >> w;

        w.pop_back();
        w.pop_back();

        w += 'i';

        cout << w << endl;
    }

    return 0;
}