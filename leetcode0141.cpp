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
    bool hasCycle(ListNode *head) {
        if (!head || !head->next){
            return false;
        }
        for (auto p = head, q = head->next; p && q; p = p->next, q = q->next->next){
            if (p == q){
                return true;
            }
            if (!p->next || !q->next){
                break;
            }
        }
        return false;
    }
};
