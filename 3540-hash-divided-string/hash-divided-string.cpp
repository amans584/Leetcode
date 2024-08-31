class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        int len = n/k; int idx =0;
        int sum = 0;
        string ans = "";
        for(int i=0;i<n;i++) {
            sum += s[i]-'a';
            idx++;
            if(idx == k) {
                idx=0;
                ans += 'a' + (sum%26);
                sum=0;
            }
        }
        return ans;
        
    }
};