// https://www.codechef.com/problems/INVEQ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1001111000
    // 1000000000
    // 0000000000

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        int oneCounts = 0, zeroCounts = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == '0')
            {
                zeroCounts++;
                while (s[i] == '0')
                    i++;
            }

            if (s[i] == '1'){
                oneCounts++;
                while (s[i] =='1')
                {
                    i++;
                }
                
            }
        }
        cout << min(oneCounts, zeroCounts) << endl;
    }

    return 0;
}