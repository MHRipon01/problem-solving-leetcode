// https://codeforces.com/problemset/problem/1790/C

#include <bits/stdc++.h>
using namespace std;
int n;
void permSolution()
{
    cin >> n;
    vector<vector<int>> permutation(n, vector<int>(n - 1));
    vector<int> finalPerm(n, 0);
    vector<int> count(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        finalPerm[i] = i + 1;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> permutation[i][j];
            if (j == 0)
                count[permutation[i][j]]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == n - 1)
        {
            finalPerm[0] = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (permutation[i][0] != finalPerm[0])
        {
            for (int j = 0; j < n - 1; j++)
            {
                finalPerm[j + 1] = permutation[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << finalPerm[i] << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        permSolution();
    }

    return 0;
}