// https://codeforces.com/problemset/problem/1729/A

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
        int a, b, c;
        cin >> a >> b >> c;

        int timeToGoToC, timeForB, timeForA = abs(a - 1);

        if (c != 1)
        {
            timeToGoToC = abs(b - c);            // 1
            int fromCToA = abs(c-1); //

            timeForB = timeToGoToC + fromCToA;
        }

        if (c == 1)
        {
            timeForB = abs(b - c);
        }
        // cout << timeForA << " " << timeForB<<" " <<endl;

        if (timeForA == timeForB)
            cout << 3 << endl;
        else if (timeForA < timeForB)
            cout << 1 << endl;
        else if (timeForA > timeForB)
            cout << 2 << endl;
    }

    return 0;
}