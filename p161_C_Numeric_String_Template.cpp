// https://codeforces.com/problemset/problem/2000/C

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            map<int, char> num;
            map<char, int> character;
            bool flag = true;

            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            for (int i = 0; i < a.size(); ++i)
            {
                int x = a[i];
                char y = s[i];

                if (num.count(x))
                {
                    if (num[x] != y)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                    num[x] = y;

                if (character.count(y))
                {
                    if (character[y] != x)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                    character[y] = x;
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}