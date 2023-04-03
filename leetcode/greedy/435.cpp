class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int cnt = 0;
        for(int i =0; i<intervals.size()-1;i++){
            if (intervals[i][1]>intervals[i+1][0]){
                cnt++;
            }
        }
        return cnt;
    }
};