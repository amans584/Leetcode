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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        while(curr != NULL) {
            int a = prev->val;
            int b = curr->val;
            ListNode* nd = new ListNode(__gcd(a,b));
            prev->next = nd;
            nd->next = curr;
            prev = curr;
            curr = prev->next;
        }
        return head;
    }
};