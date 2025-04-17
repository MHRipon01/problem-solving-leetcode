#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int count = 1;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 2)
            cout << 0 << '\n';
        else
        cout << (x - 2) / 7 + 1 << '\n';
    }

    return 0;
}