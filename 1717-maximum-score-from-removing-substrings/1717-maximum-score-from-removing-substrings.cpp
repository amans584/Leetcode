class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        if (y >= x) {
            stack<char> st;
            for (auto it : s) {
                if (!st.empty() && it == 'a' && st.top() == 'b') {
                    st.pop();
                    ans += y;
                } else {
                    st.push(it);
                }
            }
            string temp = "";
            while (!st.empty()) {
                temp += st.top();
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            for (auto it : temp) {
                if (!st.empty() && it == 'b' && st.top() == 'a') {
                    st.pop();
                    ans += x;
                } else {
                    st.push(it);
                }
            }

        } else {
            stack<char> st;
            for (auto it : s) {
                if (!st.empty() && it == 'b' && st.top() == 'a') {
                    st.pop();
                    ans += x;
                } else {
                    st.push(it);
                }
            }
            string temp = "";
            while (!st.empty()) {
                temp += st.top();
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            for (auto it : temp) {
                if (!st.empty() && it == 'a' && st.top() == 'b') {
                    st.pop();
                    ans += y;
                } else {
                    st.push(it);
                }
            }
        }
        return ans;
    }
};
