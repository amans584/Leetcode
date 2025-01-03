class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        // vector<long long> pre(n,0), suf(n,0);
        long long sum = 0;
        for(int i=0;i<n;i++) {
            sum  += nums[i];
        }
        long long curr = 0;
        int ans = 0;
        for(int i=0;i<n-1;i++) {
            curr += nums[i];
            if(curr >= sum-curr) {ans++;}
        }
        return ans;
        
    }
};