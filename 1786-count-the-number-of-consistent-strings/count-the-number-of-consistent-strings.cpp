class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st;
        int ans = 0;
        for(auto it:allowed) st.insert(it);
        for(auto it:words) {
            set<char> st1;
            bool flag = true;
            for(auto itt:it) {
                if(st.find(itt) == st.end() ) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }
        return ans;
        
    }
};