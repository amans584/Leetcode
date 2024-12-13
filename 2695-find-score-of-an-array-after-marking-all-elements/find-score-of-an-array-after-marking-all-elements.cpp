class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>> vp;
        for(int i=0;i<nums.size();i++) {
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        long long ans = 0;
        map<int,int> mp;
        for(auto it:vp) {
            if(mp.find(it.second) == mp.end()) {
                cout<<it.first<<" ";
                ans += it.first;
                if(it.second-1 >=0) mp[it.second - 1]++;
                if(it.second+1 < nums.size()) mp[it.second + 1]++;
                mp[it.second]++;
            }
        }
        return ans;
         
    }
};