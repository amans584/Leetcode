class Solution {
public:
    
    bool check(int x,vector<int>& bloomDay, int m, int k) {
        int ans =0, cnt=0;
        for(int i=0;i<bloomDay.size();++i) {
            if(bloomDay[i] <= x) {
                cnt++;
            }
            else {
                ans += cnt/k;
                cnt = 0;
            }
        }
        ans += (cnt/k);
        if(ans >= m) return true;
        else return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
         int n = bloomDay.size();
        
        if(n/m<k) return -1;
        
        int lo = 0, hi = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = *max_element(bloomDay.begin(),bloomDay.end());
        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if(check(mid, bloomDay,m,k)){
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