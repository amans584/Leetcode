class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string s = "";
        for(auto it:nums) {
            s += to_string(it);
        }
        if(*s.begin()=='0' && *s.rbegin()=='0') return "0";
        return s;
    }

private:
    static bool cmp(int a, int b) {
        string ab = to_string(a) + to_string(b);
        string ba = to_string(b) + to_string(a);
        return ab > ba; 
    }    
};