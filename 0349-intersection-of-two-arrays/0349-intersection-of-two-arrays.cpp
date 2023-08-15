class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> vec={};
        map<int, int> mp1;
        for(auto it : nums2) {
            mp1[it]++;
        }
        
        for(auto it : nums1) {
            
            if(mp1[it]>0 && find(vec.begin(),vec.end(),it)==vec.end()) {
                vec.push_back(it);
            }
        }
        return vec;
        
    }
};