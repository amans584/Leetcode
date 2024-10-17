class Solution {
public:
    int maximumSwap(int num) {
        map<char,int> mp;
        string s = to_string(num);
        for(int i=0;i<s.size();i++) {
            mp[s[i]] = i;
        }
        string s1 =s;
        sort(s1.rbegin(),s1.rend());
        for(int i=0;i<s.size();i++) {
            if(s[i] != s1[i]) {
                swap(s[i] , s[mp[s1[i]]]);
                break;
            }
        }


        return stoi(s);

    }
};