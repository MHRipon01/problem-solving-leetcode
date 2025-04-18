//https://codeforces.com/problemset/problem/1907/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        vector<char> res;
        vector<int> low, up;

        for(auto c:s)
        {
            if(c == 'b')
            {
                if(!low.empty())
                {
                    res[low.back()] = '\0';
                    low.pop_back();
                }
            }
            else if(c == 'B')
            {
                if(!up.empty())
                {
                    res[up.back()] = '\0';
                    up.pop_back();
                }
            }
            else
            {
                res.push_back(c);
                if(islower(c))
                {
                    low.push_back(res.size() - 1);
                }
                else if(isupper(c))
                {
                    up.push_back(res.size() - 1);
                }
            }
        }

        for(auto c: res)
        {
            if(c != '\0')
                cout << c;
        }
        cout<<'\n';
    }
}
