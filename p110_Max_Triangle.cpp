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

        int n;
        cin >> n;
        int a, b, c;
        a = n;
        b = n - 1;
        c = n - 2;

        int isPossible =2* max(a, max(b, c));

        int total = a + b + c;

        if (isPossible >= total)
        {
            cout << -1 << endl;
        }else{
            cout << total << endl;
        }


    }

    return 0;
}