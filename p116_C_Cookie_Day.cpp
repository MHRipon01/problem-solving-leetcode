// https://vjudge.net/contest/711414#problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        vector<long long> lowest;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] < k)
                continue;

            else if (v[i] >= k)
            {
                int modulus = v[i] % k;
                lowest.push_back(modulus);
            }
        }

        if (lowest.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            int lowestVal = lowest[0];
            for (int i = 0; i < lowest.size(); i++)
            {
                if (lowest[i] >= 0)
                {
                    if (lowestVal > lowest[i])

                        lowestVal = lowest[i];
                }
            }
            cout << lowestVal << endl;
        }
    }

    return 0;
}