// https://codeforces.com/problemset/problem/2014/A

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
        int n, k;
        cin >> n >> k;
        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        // //output
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<  A[i] << " ";
        // }
        // cout << endl;

        int goldGivenToPerson = 0, robinHas = 0, givenCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (A[i] >= k)
            {
                robinHas += A[i];
                A[i] = 0;
            }
            else if (robinHas == 0)
            {
                continue;
            }
            else if (A[i] == 0 && robinHas > 0)
            {
                robinHas--;
                givenCount++;
            }
        }
        cout << givenCount << endl;
    }
    return 0;
}