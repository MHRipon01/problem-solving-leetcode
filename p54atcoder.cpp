// https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > (c * 2) || (c * 2) > b)
        cout << -1 ;
    else
        cout << c * 2 << endl;
    return 0;
}