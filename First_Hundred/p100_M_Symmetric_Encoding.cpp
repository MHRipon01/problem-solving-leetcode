//https://codeforces.com/problemset/problem/1974/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string b,c,d,g;
        cin>>b;

        int f[26] = {0};
        for(int i=0;i<b.size();i++)
        {
            f[b[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(f[i] != 0)
            {
                c.push_back(char('a'+i));
            }
        }

        d = c;
        reverse(d.begin(), d.end());

        for(int j=0;j<b.size();j++)
        {
            for(int i=0;i<c.size();i++)
            {
                if(b[j] == c[i])
                {
                    g.push_back(d[i]);
                }
            }
        }

        cout<<g<<'\n';

    }


    return 0;
}

