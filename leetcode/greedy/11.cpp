class Solution {
public:
    int maxArea(vector<int>& height) {
       int ans = 0, n = height.size();
       int i = 0; int j = n-1;

       while (i<j){
            ans = max(ans, (j-i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
       }
    }
};