// https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    map<string, string> ans, has;

    while (q--)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        { // user peyeche
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }

    cout << ans.size() << '\n';
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << '\n';
    }

    return 0;
}