class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums) {
            mp[it]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==1) {
                return -1;
            }
            ans += (it.second +2)/3;
        }
        return ans;
        
        
    }
};