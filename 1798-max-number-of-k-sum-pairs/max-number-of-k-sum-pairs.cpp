class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        int ans = 0;
        for(auto it:nums) {
            mp[it]++;
        }
        for(int i=0;i<n;i++) {
            if(mp.find(k-nums[i]) != mp.end()) {
                mp[k-nums[i]]--;
                ans++;
                if(mp[k-nums[i]]==0) {
                    mp.erase(mp.find(k-nums[i]));
                }
            }
        }
        return ans/2;
        
    }
};