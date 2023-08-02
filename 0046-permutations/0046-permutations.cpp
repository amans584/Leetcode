class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> vec;
        vector<int> curr = {};
        backtrack(curr, vec, nums);
        
        return vec;
    }
    
    void backtrack(vector<int>& curr, vector<vector<int>>& vec, vector<int>& nums) {
        
        if(curr.size() == nums.size()) {
            vec.push_back(curr);
            return;
        }
        for(auto it : nums) {
            if(find(curr.begin(), curr.end(), it) == curr.end()) {
                curr.push_back(it);
                backtrack(curr, vec, nums);
                curr.pop_back();
            }
         }
    }
    
};