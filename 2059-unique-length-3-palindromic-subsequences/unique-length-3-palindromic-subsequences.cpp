class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> pre(n,0);
        map<char,pair<int,int>> mp;
        set<char> st;
        for(int i=0;i<n;i++) {
            if(st.find(s[i]) == st.end()) {
                mp[s[i]].first = i;
                st.insert(s[i]);
                if(i) {
                    pre[i] = pre[i-1] + 1;
                }
                else {
                    pre[i]++;
                }

            }
            else {
                mp[s[i]].second = max(mp[s[i]].second, i);
                pre[i] = pre[i-1];
            }
        }
        // for(auto it:pre) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:mp) {
        //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
        // }
        int ans = 0;
        // for(auto it:mp) {
        //     if(it.second.second > it.second.first) {
        //         if(it.second.first) {
        //             ans += pre[it.second.second-1] - pre[it.second.first+1] + 1;
        //         }
        //         else {
        //             ans += pre[it.second.second];
        //         }
        //     }
        // }
        for(auto it:mp) {
            if(it.second.second > it.second.first) {
                set<char> st1;
                for(int i=it.second.first+1;i<it.second.second;i++) {
                    st1.insert(s[i]);
                }
                ans+=st1.size();
                st1.clear();
            }
        }
        return ans;
    }
};