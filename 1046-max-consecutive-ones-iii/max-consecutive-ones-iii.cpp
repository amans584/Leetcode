class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int zero = 0;
        int one = 0;
        int left = 0, right = 0;
        while(right<nums.size()) {
            if(nums[right]==1) one++;
            else zero++;
            if(zero>k) {
                while(nums[left]==1) {
                    left++;
                    one--;
                }
                left++;
                zero--;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
        
    }
};