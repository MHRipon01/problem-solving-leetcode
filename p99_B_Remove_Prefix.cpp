//https://codeforces.com/problemset/problem/1714/B

#include<bits/stdc++.h>
using namespace std;
map<int, int> pa;
int valid_cnt = 0;

bool valid()
{
    return valid_cnt > 0;
}

void val(int z)
{
    auto it = pa.find(z);
    if(it != pa.end())
    {
        if(it->second == 2)
        {
            valid_cnt--;
        }

        it->second--;

        if(it->second == 1)
        {
            pa.erase(it);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        deque<int> ar;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.push_back(x);
        }

        int mx = *max_element(ar.begin(), ar.end());

        int f[mx + 1] = {0};
        for(int i=0;i<n;i++)
        {
            f[ar[i]]++;
        }

        pa.clear();
        valid_cnt = 0;
        for (int i=1;i<=mx;i++)
        {
            if(f[i] > 1)
            {
                pa[i] = f[i];
                valid_cnt++;
            }
        }

        while(valid())
        {
            val(ar.front());
            ar.pop_front();
        }

        cout<< n - ar.size()<<'\n';
    }
    return 0;
}
