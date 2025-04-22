//https://codeforces.com/contest/2093/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int max_length = 1, total_zeroes = 0, possible_length;
        for (char c : n)
        {

            if ( c == '0')
                total_zeroes++;
            else
            {
                possible_length = total_zeroes + 1;
                if (possible_length > max_length)
                    max_length = possible_length;
            }
        }
        cout << n.length() - max_length << '\n';
    }

    return 0;
}