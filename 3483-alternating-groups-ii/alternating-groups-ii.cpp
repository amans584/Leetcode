class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c, int k) {
          int n = c.size();
        vector<int> newCol(n + k - 1);

        for (int i = 0; i < n; ++i) {
            newCol[i] = c[i];
        }
        for (int i = 0; i < k - 1; ++i) {
            newCol[n + i] = c[i];
        }
        
        int res = 0;
        int N = 1;
        for (int i = 1; i < newCol.size(); ++i) {
            if (newCol[i] != newCol[i - 1]) {
                ++N;
            } else {
                N = 1;
            }
            if (N >= k) {
                ++res;
            }
        }
        
        return res;
    }
};
