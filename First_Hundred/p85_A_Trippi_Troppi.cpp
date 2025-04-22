//https://codeforces.com/contest/2094/problem/A


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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        string result = "";
        result += s1[0];
        result += s2[0];
        result += s3[0];

        cout << result << '\n';
    }

    return 0;
}