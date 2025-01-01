class Solution {
public:
    int maxScore(string s) {
        int zero = 0, ones = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1') {
                ones++;
            }
        }
        int ans = 0, curr =0;
        for(int i=0;i<s.size()-1;i++) {
            if(s[i] == '1') {
                ones--;
            }
            else {
                curr++;
            }
            ans = max(ans, curr+ones);
        }
        return ans;
        
    }
};