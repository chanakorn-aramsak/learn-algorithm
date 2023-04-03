class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt = 0;
        vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    cnt += 4;
                    for(auto& dir : dirs) {
                        int x = i + dir[0];
                        int y = j + dir[1];
                        if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1) {
                            cnt--;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
