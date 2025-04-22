#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    // If S[1] != T[1], impossible since S[1] cannot be flipped
    if (s[0] != t[0])
    {
        cout << -1 << '\n';
        return;
    }

    vector<int> operations;
    // Work from right to left, starting at i = N down to i = 2
    for (int i = n - 1; i >= 1; i--)
    {
        // If S[i] != T[i], we need to flip S[i] using operation at i-1
        if (s[i] != t[i])
        {
            // Check if S[i-1] = 1 to perform the operation
            if (s[i - 1] == '1')
            {
                operations.push_back(i);
                // Flip S[i]
                if (s[i] == '0')
                    s[i] = '1';
                else
                    s[i] = '0';
            }
            else
            {
                // Need to make S[i-1] = 1, which requires flipping S[i-1]
                // Try to find a position j < i-1 where S[j] = 1 to flip S[j+1]
                bool can_flip = false;
                for (int j = i - 2; j >= 0; j--)
                {
                    if (s[j] == '1')
                    {
                        // Perform operations from j to i-2 to make S[i-1] = 1
                        for (int k = j + 1; k <= i - 1; k++)
                        {
                            operations.push_back(k);
                            // Flip S[k+1]
                            s[k] = (s[k] == '0') ? '1' : '0';
                        }
                        // Now S[i-1] = 1, perform operation at i-1
                        operations.push_back(i);
                        s[i] = (s[i] == '0') ? '1' : '0';
                        can_flip = true;
                        break;
                    }
                }
                if (!can_flip)
                {
                    cout << -1 << '\n';
                    return;
                }
            }
        }
    }

    // Check if S equals T
    if (s != t)
    {
        cout << -1 << '\n';
        return;
    }

    // Output the result
    cout << operations.size() << '\n';
    if (!operations.empty())
    {
        for (int i = 0; i < operations.size(); i++)
        {
            cout << operations[i] << (i < operations.size() - 1 ? " " : "\n");
        }
    }
    else
    {
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}