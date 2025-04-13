class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        map<char,int> mp;
        for(auto it:s) {
            mp[it]++;
        }
        for(auto it:mp) {
            cout<<it.first<<" "<<it.second<<"\n";
        }
        char tt;
        bool ch = 0, rev = 0;
        string ans = "";
        for(auto it:mp) { 
            if(it.second %2 == 0) {
                rev = true;
                ans.append(it.second/2 , it.first);
            }
            else {
                ch = 1;
                tt = it.first;
                ans.append(it.second/2 , it.first);
            }
        }
        string temp2 = ans;
        cout<<tt;
        if(ch) {
            ans.append(1,tt);
        }
        if(rev){
          string temp(temp2.rbegin(), temp2.rend()); 
          ans += temp;
        }
        return ans;
    }
};