class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> v;
        v.push_back("a");
        string str = "a";
        while(str != target) {
            if(str[str.size()-1] == target[str.size()-1]) {
                str += "a";
                v.push_back(str);
            }
            else {
                str[str.size()-1] = str[str.size()-1] +1;
                v.push_back(str);
            }
        }
        return v;
        
    }
};