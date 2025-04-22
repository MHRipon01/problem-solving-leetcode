// https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;

    int N, X;
    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num != X)
        {
            A.push_back(num);
        }
    }

    if (!A.empty())
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << " " << A[i];
        }
    }

    cout << endl;

    return 0;
}
