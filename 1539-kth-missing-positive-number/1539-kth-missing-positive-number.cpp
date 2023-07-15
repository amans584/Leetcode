class Solution {
public:
    
    bool check(int x, vector<int>& arr, int k) {
        if (arr[x] - x - 1 >= k) {
            return true;
        }
        else {
            return false;
        }
    }
    
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int lo = 0;
        int hi = n - 1;
        int ans = n;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(mid, arr, k)) {
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
         
        if(ans>0) {
            return arr[ans - 1] + (k - (arr[ans - 1] - (ans - 1) - 1));

        }
        else if(ans==0) {
            return k;
        }
        else{
            return arr[n-1] + k;
        }
    }
};
