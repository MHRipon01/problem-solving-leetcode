#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k;
    cin >> t;

    while (t--)
    {
        cin >> k;
        if (k % 2 == 0)
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "yes" << '\n';
        }
    }

    return 0;
}