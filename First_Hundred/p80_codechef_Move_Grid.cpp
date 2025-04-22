#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, x = 0, y = 0;
    cin >> a >> b >> c >> d;

    x = a;
    x = a - c;

    y = b;
    y -= d;

    cout << x << " " << y << endl;

    return 0;
}