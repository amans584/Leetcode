class Solution {
public:
    
bool check(int x, vector<int>& wt, int days) {
        int daysNeeded = 1;
        int currentLoad = 0;
        
        for (int i = 0; i < wt.size(); i++) {
            
            
            currentLoad += wt[i];
            
            if (currentLoad > x) {
                daysNeeded++;
                currentLoad = wt[i];
            }
        }
        
        return daysNeeded <= days;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();
        
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        int ans = hi;
         while(lo <= hi) {
             int mid = lo + (hi-lo)/2;
             
             if(check(mid, weights, days)){
                 ans = mid;
                 hi = mid -1 ;
             }
             else {
                 lo = mid + 1;
             }
         }
        return ans;
        
    }
};