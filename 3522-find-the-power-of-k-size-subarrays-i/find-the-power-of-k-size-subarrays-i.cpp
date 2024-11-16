class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n-k+1;i++) {
            bool flag = 1;
            for(int j=i;j<i+k-1;j++) {
                if(nums[j]>=nums[j+1] || nums[j+1]-nums[j]!=1) {
                    ans.push_back(-1);
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                ans.push_back(nums[i+k-1]);
            }
        }

        return ans;
        
    }
};