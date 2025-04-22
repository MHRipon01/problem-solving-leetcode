// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=env

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, s, t, count = 0;
    cin >> s >> t;
    for (a = 0; a <= s; a++)
    {
        for (b = 0; b <= s - a; b++)
        {
            for (c = 0; c <= s - a - b; c++)
            {
                if (a * b * c <= t)
                {
                    count++;
                }
            }
        }
    }

    cout << count<< endl;
    return 0;
}