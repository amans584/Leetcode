class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        int ans;
        for(auto i : mp) {
            if(i.second != 3){
                ans = i.first;
            }
        }
        return ans;
    }
}; 