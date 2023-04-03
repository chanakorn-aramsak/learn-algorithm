class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int oldColor = image[sr][sc];
        vector<pair<int,int>> dirs = {{0,1}, {1,0}, {-1,0}, {0,-1}};
        while (!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if (image[x][y] == color) continue;
            image[x][y] = color;
            for (auto &dir : dirs)
            {
                int nx = x + dir.first;
                int ny = y + dir.second;
                if (nx>=0 and nx<image.size() and ny>=0 and ny<image[0].size() and image[nx][ny]==oldColor){
                    q.push({nx,ny});
                }
            }
        }
        return image;
    }
};