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
private:
    ListNode* head;
public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int count = 1;
        int result = head->val;
        ListNode* curr = head->next;
        while (curr != nullptr) {
            count++;
            int random_num = rand() % count;
            if (random_num == 0) {
                result = curr->val;
            }
            curr = curr->next;
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */