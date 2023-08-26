class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int cnt=1;
        sort(pairs.begin(),pairs.end(), [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });
        int curr=1,last=0;
        while(curr<pairs.size()) {
            if(pairs[last][1] < pairs[curr][0]) {
                cnt++;
                last=curr;
            }
            else {
                curr++;
            }
        }
        return cnt;
        
    }
};