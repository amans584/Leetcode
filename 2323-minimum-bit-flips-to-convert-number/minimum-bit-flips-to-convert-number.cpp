class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        int ans = __builtin_popcount(x);
        return ans;
        
    }
};