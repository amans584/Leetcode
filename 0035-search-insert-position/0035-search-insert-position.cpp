class Solution {
public:
    
    int check(vector<int>& nums, int mid, int target) {
    if(nums[mid]>= target)
        return 1;
    else
        return 0;
}

    
    int searchInsert(vector<int>& nums, int target) {
        int lo =0, hi = nums.size()-1;
        int ans = hi + 1;
        while(lo<=hi) {
            int mid = (lo+hi)/2;
            if(check(nums, mid, target)==1) {
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid +1;
            }
        }
        return ans;
    }
};