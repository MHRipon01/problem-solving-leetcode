// https://www.codechef.com/problems/CHANGE_PLZ?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, change;
    cin >> t;

    while (t--)
    {
        cin >> x;
        change = 100 - x;

       int maxPay = (change /10) * 10;

        cout << maxPay << endl;
    }

    return 0;
}