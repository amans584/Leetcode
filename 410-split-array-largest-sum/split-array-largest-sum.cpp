class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = accumulate(nums.begin(),nums.end(), 0LL);
        long long low = *max_element(nums.begin(),nums.end());
        long long high = sum, ans = low;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(check(nums, k-1,mid)) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid +1;
            }

        }
        return ans;
    }
private:
    bool check(vector<int>& nums, int k, int mid)  {
        int n = nums.size();
        long long curr = 0, ans=0;
        for(int i=0;i<n;i++) {
            if(curr + nums[i] > mid) {
                ans++;
                curr = nums[i];
                if(ans > k) {
                    return false;
                }
            }
            else {
                curr += nums[i];
            }
        }
        return true;
    }  
};