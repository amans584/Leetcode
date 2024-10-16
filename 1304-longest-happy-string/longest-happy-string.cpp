class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";
        
        while (a > 0 || b > 0 || c > 0) {
            int n = s.size();
            
            if ((a >= b && a >= c && (n < 2 || s[n-1] != 'a' || s[n-2] != 'a')) || 
                (a > 0 && (n >= 2 && s[n-1] == s[n-2] && s[n-1] != 'a'))) {
                s += 'a';
                a--;
            }
            else if ((b >= a && b >= c && (n < 2 || s[n-1] != 'b' || s[n-2] != 'b')) || 
                     (b > 0 && (n >= 2 && s[n-1] == s[n-2] && s[n-1] != 'b'))) {
                s += 'b';
                b--;
            }
            else if ((c >= a && c >= b && (n < 2 || s[n-1] != 'c' || s[n-2] != 'c')) || 
                     (c > 0 && (n >= 2 && s[n-1] == s[n-2] && s[n-1] != 'c'))) {
                s += 'c';
                c--;
            } else {
                break;
            }
        }
        
        return s;
    }
};
