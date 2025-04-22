// https://codeforces.com/problemset/problem/1792/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> m(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        int s1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[i] == 1)
            {
                s1++;
            }
        }

        int final = n - s1;
        final += s1 / 2;

        if (s1 % 2 == 1)
        {
            final += 1;
        }

        cout << final << endl;
    }

    return 0;
}
