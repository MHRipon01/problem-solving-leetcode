#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    vector<double> minimum_distance;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = v[i].first - v[j].first;
            int y = v[i].second - v[j].second;

            double distance = sqrt(x * x + y * y);
            minimum_distance.push_back(distance);
        }
    }

    sort(minimum_distance.begin(), minimum_distance.end());

    cout << fixed << setprecision(14) << minimum_distance[0] << endl;



    return 0;
}