class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> pre(words.size(),0);
        int n = words.size();
        set<char> st = {'a','e','i','o','u'};
        for(int i=0;i<n;i++) {
            int curr = words[i].size();
            if(st.find(words[i][0]) != st.end() && st.find(words[i][curr-1]) != st.end() ) {
                if(i) {
                    pre[i] = pre[i-1]+1;
                }
                else pre[i]=1;
            }
            else {
                if(i) pre[i] = pre[i-1];
                else pre[i] = 0;
            }
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++) {
            if(queries[i][0]) {
                ans.push_back(pre[queries[i][1]] - pre[queries[i][0]-1]);
            }
            else {
                ans.push_back(pre[queries[i][1]]);
            }
        }
        return ans;
        
    }
};