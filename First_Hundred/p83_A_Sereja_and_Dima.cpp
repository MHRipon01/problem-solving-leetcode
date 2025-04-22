#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
        // int x;
        // cin >> x;
        // dq.push_back(x);
    }

    int sreejaScore = 0, dinaScore = 0, who = 1;

    while (!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();

        int mx = max(left, right);

        if (who % 2 != 0)
            sreejaScore += mx;
        else
        {
            dinaScore += mx;
        }
        if (mx == left)
            dq.pop_front();
        else

            dq.pop_back();

        who++;
    }
    cout << sreejaScore << " " << dinaScore << endl;
    return 0;
}