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
    ListNode* sortList(ListNode* head) {
        ListNode *p;
        std::vector<int>::size_type n = 0;
        for (p = head; p; p = p->next){ n++; }
        std::vector<int> v(n);
        p = head;
        for (std::vector<int>::size_type i = 0; i != n; i++){
            v[i] = p->val;
            p = p->next;
        }
        sort(begin(v), end(v),[](const auto &a, const auto &b){
            return std::tie(a) < std::tie(b);
        });
        p = head;
        for (std::vector<int>::size_type i = 0; i != n; i++){
            p->val = v[i];
            p = p->next;
        }
        return head;
    }
};
