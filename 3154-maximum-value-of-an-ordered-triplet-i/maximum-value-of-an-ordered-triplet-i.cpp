class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxE =-1e9, maxD=-1e9, maxT=-1e9;
        for(int i=0;i<nums.size();i++) {
            maxT = max(maxT, (long long)maxD*nums[i]);
            maxD = max(maxD, (long long)maxE-nums[i]);
            maxE = max(maxE, (long long)nums[i]);
            
            
        }
        return max(0LL,maxT);
        
    }
};