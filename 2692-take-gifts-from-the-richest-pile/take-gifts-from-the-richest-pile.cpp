class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int> pq(gifts.begin(),gifts.end());
        for(int i=0;i<k;i++) {
            int curr = pq.top();
            pq.pop();
            pq.push(sqrt(curr));
        }
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        return ans;
        
    }
};