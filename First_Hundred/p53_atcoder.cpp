// https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (B - A == 1)
    {
        cout << 0 << endl;
    }
    else if (A > B)
        cout << 0 << endl;
    else
    {
        cout << (B - A) + 1;
    }

    return 0;
}