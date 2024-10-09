class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0, neg=0;
        for(auto it:s) {
            if(it == '(') cnt++;
            else {
                cnt--;
                if(cnt<0) {
                    neg++;
                    cnt=0;
                }
            }
        }
        return neg+cnt;
        
    }
};