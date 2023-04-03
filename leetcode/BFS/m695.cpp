class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int ans = 0;
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                    continue;
                int cnt = 0;
                queue<pair<int, int>> q;
                q.push({i, j});
                while (!q.empty())
                {
                    auto [x, y] = q.front();
                    q.pop();
                    if (grid[x][y] == 0)
                        continue;
                    grid[x][y] = 0;
                    cnt++;

                    for (auto &dir : dirs)
                    {
                        int nx = x + dir.first;
                        int ny = y + dir.second;
                        if (nx >= 0 and nx < grid.size() and ny >= 0 and ny < grid[0].size() and grid[nx][ny] == 1)
                        {
                            q.push({nx, ny});
                        }
                    }
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};