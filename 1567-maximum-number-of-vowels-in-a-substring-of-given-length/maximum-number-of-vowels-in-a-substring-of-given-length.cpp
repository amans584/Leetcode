class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        for(int i=0;i<k;i++) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u') {
                ans++;
            }
        }
        int left = 0, right = k-1;
        int curr = ans;
        while(right<s.size()) {
            if(s[left]=='a' || s[left]=='e' || s[left]=='o' || s[left]=='i' || s[left]=='u') {
                curr--;
            }
            left++;
            right++;
            if(s[right]=='a' || s[right]=='e' || s[right]=='o' || s[right]=='i' || s[right]=='u') {
                curr++;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};