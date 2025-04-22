// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z, total_solved = 0;
    cin >> n;
    while (n--)
    {

        cin >> x >> y >> z;

        if (x + y == 2 || x + z == 2 || y + z == 2)
        {
            total_solved++;
        }
    }

    cout << total_solved << endl;

    return 0;
}