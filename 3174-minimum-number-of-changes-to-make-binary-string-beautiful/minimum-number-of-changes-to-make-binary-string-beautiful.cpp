class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int cnt = 0;
        string temp = "1";
        bool chk = true;
        for(int i=1;i<n;i++) {
            if(s[i] != s[i-1]) {
                cnt++;
                i++;
                
            } else i++;
        }
        return cnt;
        
    }
};