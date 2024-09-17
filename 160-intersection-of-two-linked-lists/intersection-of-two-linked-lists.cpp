/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> st;
        ListNode* curr = headA;
        while(curr) {
            st.insert(curr);
            curr = curr->next;
        }
        curr = headB;
        while(curr) {
            if(st.find(curr)!=st.end()) {
                return curr;
            }
            curr = curr->next;
        }
        return NULL;
    }
};