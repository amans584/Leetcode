class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        // for(auto it:items) {
        //     cout<<it[0]<<" "<<it[1]<<"\n";
        // }
        int maxi = items[0][1];
        for(int i=0;i<items.size();i++) {
            items[i][1] = max(maxi, items[i][1]);
            maxi = max(maxi,items[i][1]);
        }

        vector<int> prices, results;
        for (const auto& item : items) {
            prices.push_back(item[0]);
        }

        for(auto it: queries) {
            auto curr = upper_bound(prices.begin(),prices.end(),it);
            if(curr == prices.begin()) {
                results.push_back(0);
            }
            else {
                curr--;
                results.push_back(items[curr-prices.begin()][1]);
            } 
        }

        // for(auto it:items) {
        //     cout<<it[0]<<" "<<it[1]<<"\n";
        // }
        return results;
    }
};