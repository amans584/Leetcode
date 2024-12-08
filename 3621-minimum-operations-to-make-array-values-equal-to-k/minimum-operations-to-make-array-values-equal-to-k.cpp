class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st;
        int ans = 0;
        for(auto it:nums) {
            st.insert(it);
        }
        for(auto it:st) {
            if(it > k) ans++;
            else if(it<k) return -1;
        }
        if(st.size()==1 && *st.begin() == k) return 0; 
        if(ans) return ans;
        else return -1;
        
    }
};