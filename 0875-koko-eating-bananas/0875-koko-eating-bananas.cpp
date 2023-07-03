class Solution {
public:
    
    long long sum = 0;
    
    int check(int mid, int h, vector<int>& piles) {
        long long tot = 0;
        for(int i=0;i<piles.size();i++) {
            tot += (piles[i]+ mid - 1)/ mid;
        }
        if(tot <= h) return 1;
        else return 0;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        
        int lo = 1, hi = *max_element(piles.begin(),piles.end());
        int ans = *max_element(piles.begin(),piles.end());
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if(check(mid, h, piles)==1) {
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid+1;
            }
        }
        return ans;
        
    }
};