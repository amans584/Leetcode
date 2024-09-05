class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int rem  = mean*(n+m) - accumulate(rolls.begin(), rolls.end(), 0);
        int i=0;
        vector<int> ans(n,rem/n);
        int temp = rem%n;
        if(rem>6*n || rem<n) {
            return {};
        }
        for(int i=0;i<temp;i++) {
            ans[i]++;
        }
        
        return ans;

        
    }
};