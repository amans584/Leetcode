class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n,0), suf(n,0);
        for(int i=0;i<n;i++) {
            if(i) {
                pre[i] = pre[i-1] + nums[i];
            }else {
                pre[i] = nums[i];
            }
        }
        for(int i=n-1;i>=0;i--) {
            if(i != n-1) {
                suf[i] = suf[i+1] + nums[i];
            }else {
                suf[i] = nums[i];
            }
        }
        int ans = 0;
        for(int i=0;i<n-1;i++) {
            if(pre[i] >= suf[i+1]) {
                ans++;
            }
        }
        return ans;
        
    }
};