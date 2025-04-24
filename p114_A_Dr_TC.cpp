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
        string s;
        cin >> s;

        int oneCount = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                oneCount++;
            }
        }
        
        // n * x +(n-2*x)
        int total = n * oneCount + (n - 2 * oneCount);
        cout << total << endl;
    }

    return 0;
}