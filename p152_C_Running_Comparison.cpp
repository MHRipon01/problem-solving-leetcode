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
        int n, count = 0;
        cin >> n;
        vector<int> v1(n); // alice
        vector<int> v2(n); // bob

        // for alice
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        // for bob
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        for (int i = 0; i < n; i++)
        {
            // cout << "alice =>" << v1[i] << endl;
            // cout << "bob =>" << v2[i] << endl;

            if (v1[i] <= (v2[i] * 2) && (v1[i] * 2) >= v2[i])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}