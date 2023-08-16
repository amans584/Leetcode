class Solution {
public:
    
    bool check(int mid, int m, int k, vector<int> &x, int n) {
        
        int no_buq =0;
        int day =0;
        
        for(int i=0;i<n;++i) {
            
            if(x[i] <= mid) {
                day++;
            }
            else{
                no_buq += day/k;
                day=0;
            }
        }
        no_buq += day/k;
        if(no_buq >= m) return true;
        else return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        if(n/m < k) return -1;
        
        int lo = 0, hi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = *max_element(bloomDay.begin(), bloomDay.end());
        
        while(lo <= hi) {
            
            int mid = lo + (hi-lo)/2 ;
            
            if(check(mid, m, k, bloomDay, n)) {
                ans = mid;
                hi = mid - 1;
                
            }
            else {
                lo = mid + 1;
            }
        }
        return ans;
        
    }
};