class Solution {
public:
    string shortestPalindrome(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        string s1 = s + "@" + str;
        vector<int> vv =kmp(s1);
        int val = s.size() - *vv.rbegin();
        string str1 = str.substr(0,val);
        reverse(str1.begin(), str1.end());
        str += str1.substr(0,val);
        return str;
        
    }

private:
    vector<int> kmp(string s) {
        int n = (int)s.length();
        vector<int> pi(n);
        for (int i = 1; i < n; i++) {
            int j = pi[i-1];
            while (j > 0 && s[i] != s[j])
                j = pi[j-1];
            if (s[i] == s[j])
                j++;
            pi[i] = j;
        }
        return pi;
    }    
};