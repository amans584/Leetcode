class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        int cnt0 = 0;
        long long ans1 =0;
        for(int i=n-1;i>=0;i--) {
            if(s[i]== '1') {
                ans1 += cnt0;
            }
            else cnt0++;
        }
        return ans1;
        
    }
};