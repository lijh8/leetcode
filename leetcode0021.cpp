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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2){
            return nullptr;
        }
        std::vector<int> v;
        for (auto p = list1; p; p = p->next){
            v.push_back(p->val);
        }
        for (auto p = list2; p; p = p->next){
            v.push_back(p->val);
        }
        sort(begin(v), end(v));
        auto n = v.size();
        if (n == 0){
            return nullptr;
        }
        auto head = new ListNode(v[0], nullptr);
        auto p = head;
        for (auto i = 1; i != n; i++){
            p->next = new ListNode(v[i], nullptr);
            p = p->next;
        }
        return head;
    }
};
