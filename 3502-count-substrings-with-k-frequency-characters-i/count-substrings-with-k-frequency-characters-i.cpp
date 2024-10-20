class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            map<char, int> freq;
            
            for (int j = i; j < n; j++) {
                freq[s[j]]++;
                
                bool valid = false;
                for (auto& it : freq) {
                    if (it.second >= k) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
