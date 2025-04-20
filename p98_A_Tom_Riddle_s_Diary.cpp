//https://codeforces.com/problemset/problem/855/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<string> v;

    while(n--)
    {
        string s;
        cin>>s;

        auto it = find(v.begin(), v.end(), s);
        if(it != v.end())
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
            v.push_back(s);
        }
    }

    return 0;
}

