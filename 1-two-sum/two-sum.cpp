class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++) {
            if(mp.find(target - nums[i]) != mp.end()) {
                auto it = mp.find(target - nums[i]);
                if(i!= mp[target-nums[i]])
                   return {i, mp[target-nums[i]]};
            }
        }

        return ans;
        
    }
};