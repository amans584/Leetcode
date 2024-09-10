class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        long long curr = nums[0];
        long long currIdx = 0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]>curr) {
                ans += curr * (i-currIdx);
                currIdx = i;
                curr = nums[i];
            }
        }
        cout<<curr<<" "<<currIdx;
        if(currIdx != n-1) {
            ans += curr * (n-1-currIdx);
        }
        return ans;
        
    }
};