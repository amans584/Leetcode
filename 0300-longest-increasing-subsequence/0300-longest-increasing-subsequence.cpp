class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        for(auto cur:nums) {
            if(ans.empty() || cur>ans.back()) {
                ans.push_back(cur);
            }
            else {
                ans[lower_bound(ans.begin(), ans.end(),cur)-ans.begin()] = cur;
            }
        }
        return ans.size();
        
    }
};