// https://codeforces.com/problemset/problem/1807/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "+" << endl;

        else if (a - b == c)
            cout << "-" << endl;
    }

    return 0;
}

