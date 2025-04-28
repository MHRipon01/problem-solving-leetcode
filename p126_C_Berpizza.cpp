// https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customerNo = 1;
    cin >> n;

    set<pair<int, int>> s;
    multiset<pair<int, int>> multi;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({customerNo, money});
            multi.insert({money, -customerNo});
            customerNo++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            multi.erase({money, -pos});
        }
        else
        {
            int pos = -multi.rbegin()->second, money = multi.rbegin()->first;
            ans.push_back(pos);
            multi.erase(--multi.end());
            s.erase({pos, money});
        }
    }

    // for (auto [x, y] : s)
    // {
    //     cout << "(" << x << "," << y << ")";
    // }
    // for (auto [x, y] : multi)
    // {
    //     cout << "(" << x << "," << y << ")";
    // }

    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}