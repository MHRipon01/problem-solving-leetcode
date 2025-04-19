//https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    map<string, int> mp;

    while(n--)
    {
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it != mp.end())
        {
            cout<<s + to_string(mp[s])<<'\n';
            mp[s]++;
        }
        else
        {
            mp[s] = 1;
            cout<<"OK"<<'\n';
        }
    }
}

