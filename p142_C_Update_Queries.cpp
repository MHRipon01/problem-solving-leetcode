// https://codeforces.com/problemset/problem/1986/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // 4(length of string s)    4 (number of updates)
    //  meow (s of length n)
    //  1 2 1 4 (array of update numbers)
    //  zcwz
    // cwzz (lexicographically sorted)
    //  1-> c
    //  2-> w
    // 3 -> o
    // 4 => z

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string str;
        cin >> str;

        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        string update;
        cin >> update;
        sort(update.begin(), update.end());
        int idx = 0;
        for (auto it : st)
        {
            str[it - 1] = update[idx];
            idx++;
        }
        cout << str << endl;
    }

    return 0;
}