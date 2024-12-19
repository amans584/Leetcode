class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size(), ans = 0;
        int curr = 0;
        for(int i=0;i<n;i++) {
            int temp = ( i * (i+1)) / 2;
            curr += arr[i];
            // cout<<curr<<" "<<temp<<"\n";
            if(curr == temp) {
                ans++;
            }
        }
        return ans;
    }
};