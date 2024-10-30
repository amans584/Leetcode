class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n, -1), lds(n, -1);

        for (int i = 0; i < n; i++) {
            rec(i, nums, lis);  // Compute LIS ending at each index
        }

        for (int i = n-1; i >= 0; i--) {
            rec2(i, nums, lds);  // Compute LDS starting at each index
        }

        int res = n;
        for(int i = 1; i < n - 1; i++) {
            if(lis[i] > 1 && lds[i] > 1) {
                res = min(res, n - (lis[i] + lds[i] - 1));
            }
        }
        
        return res;
    }

private:
    int rec(int idx, vector<int>& nums, vector<int>& lis) {
        if (lis[idx] != -1) return lis[idx];
        int ans = 1;
        for (int i = idx-1; i >= 0; i--) {
            if (nums[i] < nums[idx]) 
                ans = max(ans, 1 + rec(i, nums, lis));
        }
        return lis[idx] = ans;
    }

    int rec2(int idx, vector<int>& nums, vector<int>& lds) {
        if (lds[idx] != -1) return lds[idx];
        int ans = 1;
        for (int i = idx+1; i < nums.size(); i++) {
            if (nums[i] < nums[idx]) 
                ans = max(ans, 1 + rec2(i, nums, lds));
        }
        return lds[idx] = ans;
    }
};
