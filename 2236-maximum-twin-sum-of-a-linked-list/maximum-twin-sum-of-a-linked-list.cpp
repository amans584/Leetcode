/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        if (!head) return 0;
        stack<int> st;
        ListNode* curr = head;
        int ans = 0, n = 0;
        while(curr) {
            st.push(curr->val);
            n++;
            curr = curr->next;
        }
        n/=2;
        while(n--) {
            ans = max(ans, st.top()+head->val);
            st.pop();
            head = head->next;
        }
        return ans;


        
    }
};