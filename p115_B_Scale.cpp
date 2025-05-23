// https://codeforces.com/problemset/problem/1996/B

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

        char A[n][n];

        for (auto &row : A)
            for (char &c : row)
                cin >> c;

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << A[i][j];
            }
            cout << "\n";
        }
    }
}