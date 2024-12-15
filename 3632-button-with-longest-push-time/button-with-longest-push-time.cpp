class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxi = events[0][1];
        int res = events[0][0];
        int cnt = 0;
        int i = 0;
        for (int i = 1; i < events.size(); i++) {
            cnt++;
            int a = events[i][1] - events[i - 1][1];
            if ((a == maxi && events[i][0] < res) || a > maxi && 1) {
                cnt--;
                maxi = a;
                res = events[i][0];
            }
        }

        return res;
    }
};