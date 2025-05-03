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

        if (n & 1)
        {
            if (n < 3)
                cout << -1 << endl;
            else
            {
                cout << 2 << " " << -1 << " " << -1 << " ";

                for (int i = 0; i < n - 3; i += 2)
                {
                    cout << 1 << " " << -1 << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                cout << 1 << " " << -1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}