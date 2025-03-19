// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);
    int length = 4 - s.length();
    for (int i = 1; i <= length; i++)
    {
        s = '0' + s;
    }

    cout << s << endl;

    return 0;
}