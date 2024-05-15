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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while(l1 || l2){
            int n1 = l1? l1->val: 0; // 'l1' must consist of values from 0 to 9 only
            int n2 = l2? l2->val: 0;
            int sum = n1 + n2 + carry;
            if (!head){
                head = new ListNode(sum % 10);
                tail = head;
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            if (sum < 10){
                carry = 0;
            } else {
                carry = 1;
            }
            if (l1){
                l1 = l1->next;
            }
            if (l2){
                l2 = l2->next;
            }
        }
        if (carry == 1){
            tail->next = new ListNode(carry);
        }
        return head;
    }
};
