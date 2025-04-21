//https://vjudge.net/contest/704342#problem/K

#include<bits/stdc++.h>
using namespace std;

int time(string &s)
{
    if(s.empty())
    {
        return 0;
    }

    int time = 2;
    for(int i=1;i<s.size();i++)
    {
        if(s[i] == s[i-1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

string new_pass(string &s)
{
    int t_max = -1;
    string final_pass;

    for(int pos = 0;pos <= s.size();pos++)
    {
        for(char c = 'a';c <= 'z';c++)
        {
            string new_final = s.substr(0, pos) + c + s.substr(pos);
            int pre_time = time(new_final);

            if(pre_time > t_max)
            {
                t_max = pre_time;
                final_pass = new_final;
            }
        }
    }

    return final_pass;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<new_pass(s)<<endl;
    }
    return 0;
}