// https://codeforces.com/problemset/problem/1430/C

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

        vector<int> nums;
        vector<pair<int, int>> ans;
        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }

        for (int i = 1; i <= n - 1; i++)
        {
            auto it = nums.end();
            it--;
            int a = *it;
            nums.erase(it);
            it--;
            int b = *it;
            nums.erase(it);

            ans.push_back({a, b});
            nums.push_back((a + b + 1) / 2);
        }
        cout << nums[0]<< endl;
        for(auto val:ans){
            cout << val.first <<" " << val.second<<endl;
        }
    }

    return 0;
    ;
}