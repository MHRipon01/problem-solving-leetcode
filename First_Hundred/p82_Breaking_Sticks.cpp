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
        int totalBreak = 0;
        if (n == 0)
        {
            cout << "0\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a > 1)
                totalBreak += (a - 1);
        }
        cout << totalBreak << endl;
    }

    return 0;
}