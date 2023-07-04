class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> ms;
        vector<int> vec;
        for(int i=0;i<k;i++){
            ms.insert(nums[i]);
        }

        for(int i=0;i<=n-k;i++) {
            vec.push_back( *(ms.rbegin()) );
            ms.erase(ms.find(nums[i]));
            if(i + k < n) ms.insert(nums[i+k]);
        }
        return vec;
        
    }
};