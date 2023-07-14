class Solution {
public:
    
    int check(int mid, vector<int>& nums, int x) {
        long long sum =0;
        for(auto &it : nums) {
            sum += ceil( (1.0 * it)/mid );
        }
        if(sum<=x) return 1;
        else return 0;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int lo =1, hi = 1e9;
        int ans = 0;
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if(check(mid,nums,threshold)){
                ans = mid;
                hi = mid -1;
            }
            else {
                lo = mid +1;
            }
        }
        return ans;
    }
};