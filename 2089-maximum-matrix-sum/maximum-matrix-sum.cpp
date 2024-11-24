class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0, neg = 0;
        int negMax = 1e9;
        bool flag = false;
        for(auto it:matrix) {
            for(auto itt:it) {
                if(itt == 0) flag = true;
                if(itt <0) {
                    neg++;
                    
                }
                negMax = min(negMax, abs(itt));
                sum += abs(itt);
            }
        }
        cout<<negMax;
        if(neg %2 == 0 || flag) return sum;
        else return sum - 2*abs(negMax) ;

        
    }
};