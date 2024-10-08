class Solution {
public:
    int minSwaps(string s) {
        int open = 0, close = 0, ans = 0;
        
        for (char c : s) {
            if (c == '[') {
                open++;
            } else {
                close++;
            }
            
            if (close > open) {
                ans++;
                close--;
                open++;
            }
        }
        
        return ans;
    }
};
