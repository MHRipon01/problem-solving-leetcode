// https://leetcode.com/problems/island-perimeter/
class Solution
{
public:
    bool vis[105][105];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    void dfs(int si, sj)
    {
        vis[si][sj] = true;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second; 
        }
    }
    int islandPerimeter(vector<vector<int>> &grid);
    {
        int n = grid.size();
        int m = grid[0].size();
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j);
                }
            }
        }
    }
};