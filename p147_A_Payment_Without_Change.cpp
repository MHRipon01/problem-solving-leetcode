// https://codeforces.com/problemset/problem/1256/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        if(s%n <= b && (a*n + b >= s)){
            cout << "YES" << endl;
        }else cout << "NO" << endl;


    }

    return 0;
}