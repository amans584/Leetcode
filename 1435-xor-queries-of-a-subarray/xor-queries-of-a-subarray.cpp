class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++) {
            pre[i+1] = pre[i]^arr[i];
        }
        vector<int> ans;
        for(auto it:queries) {
            ans.push_back(pre[it[1]+1]^pre[it[0]]);
        }
        return ans;

    }
};