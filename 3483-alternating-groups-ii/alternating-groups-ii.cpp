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
        int right = 1, left = 0;
        while(right < newCol.size()) {
            if(newCol[right] == newCol[right-1]) {
                left = right;
                right++;
                continue;
            }
            right++;
            if(right - left < k) 
              continue;

            res++;
            left++;  
        }
        
        return res;
    }
};
