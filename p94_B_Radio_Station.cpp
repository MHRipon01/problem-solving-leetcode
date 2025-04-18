//https://codeforces.com/problemset/problem/918/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    map<string, string> mp, sp;

    while(n--)
    {
        string a,b;
        cin>>a>>b;
        mp[b+';'] = a;
    }
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        auto it = mp.find(b);
        if(it != mp.end())
        {
            cout<<a<<" "<<b<<" "<<"#"<<it->second<<'\n';
        }

    }

    return 0;
}


