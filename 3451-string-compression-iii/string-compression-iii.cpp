class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        int curr =1;
        string ans = "";
        for(int i=0;i<n;i++) {
            if(word[i+1] == word[i]) {
                curr++;
                if(curr == 9 && word[i+2] == word[i]) {
                    ans += to_string(curr);
                    ans += word[i];
                    curr = 0;
                }
            }
            else {
                ans += to_string(curr);
                ans += word[i];
                curr = 1;
            }
        }

        return ans;
        
    }
};