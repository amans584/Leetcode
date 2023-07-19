class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n <= 1) return 0;
        
        sort(intervals.begin(), intervals.end(), cmp);
        
        int ans = 1;
        int end = intervals[0][1];
        
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= end) {
                ans++;
                end = intervals[i][1];
            }
        }
        
        return n - ans;
    }
};
