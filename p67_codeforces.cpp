// http://codeforces.com/problemset/problem/1703/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            int c;
            string ci;

            cin >> c >> ci;
            for (int j = 0; j < c; j++)
            {
                if (ci[j] == 'D')
                {
                    if (ar[i] == 9)
                    {
                        ar[i] = 0;
                    }
                    else
                    {
                        ar[i]++;
                    }
                }
                else if (ci[j] == 'U')
                {
                    if (ar[i] == 0)
                    {
                        ar[i] = 9;
                    }
                    else
                    {
                        ar[i]--;
                    }
                }
            }
        }

        for (int x : ar)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
