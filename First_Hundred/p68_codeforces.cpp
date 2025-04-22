//https://codeforces.com/problemset/problem/1722/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s1, s2;
        cin>>s1>>s2;

        bool flag = false;

        for(int i=0;i<n;i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i] == 'R' || s2[i] == 'R')
                {
                    flag = true;
                    break;
                }
            }
        }

        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
