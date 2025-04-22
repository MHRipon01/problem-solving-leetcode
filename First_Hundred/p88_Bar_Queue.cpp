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
        int x;
        cin >> x;

        queue<char> q;

        string s;
        cin >> s;
        for (char c : s)
            q.push(c);

        int boysCount = 0, girlsCount = 0, totalPeople = 0;

        while (!q.empty())
        {
            char p = q.front();
            q.pop();

            if (p == 'B')
                boysCount++;
            else if (p == 'G')
                girlsCount++;

            totalPeople++;

            if (boysCount > 2 * girlsCount)
            {
                // totalPeople--;
                break;
            }

        }
        cout << totalPeople << endl;
    }

    return 0;
}