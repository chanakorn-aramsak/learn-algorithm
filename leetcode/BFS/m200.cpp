class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // define the four possible directions

        for (size_t i = 0; i < grid.size(); i++) {
            for (size_t j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    cnt++;
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while (!q.empty()) {
                        auto [x,y] = q.front();
                        q.pop();

                        for (auto& dir : dirs) {
                            int nx = x + dir[0];
                            int ny = y + dir[1];

                            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && grid[nx][ny] == '1') {
                                q.push({nx, ny});
                                grid[nx][ny] = '0';
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
