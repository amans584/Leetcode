class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        for(int i=0;i<chars.size();i++) {
            
            char curr = chars[i];
            // cout<<curr;
            int cnt = 1;
            int ind = i;
            while(i + 1 < chars.size() && chars[i+1] == curr) {
                i++;
                cnt++;
            }
            s += curr;
            if(cnt>1) {
                s += to_string(cnt);
            }

        }
        chars.clear();
        for(auto it:s) {
            chars.push_back(it);
        }

        cout<<s;
        return s.size();
        
    }
};