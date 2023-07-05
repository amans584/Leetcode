class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int previousCount = 0, currentCount = 0, maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) 
              currentCount++;
            else {
                maxCount = max(maxCount, currentCount + previousCount);
                previousCount = currentCount;
                currentCount = 0;
            }
        }
        maxCount = max(maxCount, currentCount + previousCount);
        return maxCount == nums.size() ? maxCount - 1 : maxCount;
    }
};