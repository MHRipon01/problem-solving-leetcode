//https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    list<string> pos;
    map<string, list<string>::iterator> mp;

    while(n--)
    {
        string s;
        cin>>s;

        auto it = mp.find(s);
        if(it != mp.end())
        {
            pos.erase(mp[s]);
        }

        pos.push_front(s);
        mp[s] = pos.begin();
    }

    for(auto x:pos)
    {
        cout<<x<<'\n';
    }

    return 0;
}
