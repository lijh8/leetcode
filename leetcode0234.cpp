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
    bool isPalindrome(ListNode* head) {
        std::vector<int> v;
        for (auto p = head; p; p = p->next){
            v.push_back(p->val);
        }
        auto n = v.size();
        for (auto l = 0UL, r = n - 1; l < r; l++, r--){
            if (v[l] != v[r]){
                return false;
            }
        }
        return true;
    }
};
