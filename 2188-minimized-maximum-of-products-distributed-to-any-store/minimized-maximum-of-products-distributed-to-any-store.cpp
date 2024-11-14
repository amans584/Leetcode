class Solution {
public:

    bool check(int mid, int n, vector<int>& quan) {
        int ans = 0;
        for(int i=0;i<quan.size();i++) {
            if(quan[i]%mid == 0) {
                ans += quan[i]/mid;
            } 
            else {
                ans += quan[i]/mid;
                ans++;
            }
        }
        return ans<=n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int low = 1, high = 1e9, ans = high;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(check(mid, n, quantities)) {
                ans  = mid;
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return ans;
        
    }
};