// https://www.codechef.com/problems/HEATWAVE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;

    (x > y || x == y) ? cout << "NO" : cout << "YES";

    return 0;
}