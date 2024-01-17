class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> st,st2;
        for(auto it:arr) {
            mp[it]++;
            st.insert(it);
        }
        
        for(auto it:mp) {
            st2.insert(it.second);
        }
        if(st.size()==st2.size()) return true;
        else return false;
        
    }
};