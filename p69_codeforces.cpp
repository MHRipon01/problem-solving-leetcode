//https://codeforces.com/problemset/problem/1883/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        int m = n - k;
        if(m == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }

        vector<int> freq(26, 0);
        for(char c : s)
        {
            freq[c - 'a']++;
        }

        int oddCnt = 0;
        for(int i=0;i<26;i++)
        {
            if(freq[i] % 2 != 0)
            {
                oddCnt++;
            }
        }

        if(oddCnt <= 1 + k && (m % 2 == 1 || oddCnt <= k))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
