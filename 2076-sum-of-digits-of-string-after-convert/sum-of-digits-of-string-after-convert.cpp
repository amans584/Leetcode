class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        for(int i=0;i<s.size();i++) {
            str += to_string(s[i]-'a' +1);
        }
        cout<<str<<"\n";
        int ans = 0;
        while(k--) {
            int temp=0;
            for(int i=0;i<str.size();i++){
                temp += str[i]-'0';
            }
            str = to_string(temp);
            ans=temp;

        }
        return ans;
        
    }
};