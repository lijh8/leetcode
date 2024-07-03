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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummyHead{0, head};
        auto node0 = &dummyHead;
        while (node0->next && node0->next->next){
            auto node1 = node0->next;
            auto node2 = node1->next;
            node0->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            node0 = node1;
        }
        return dummyHead.next;
    }
};
