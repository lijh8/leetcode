/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result{};
        if (!root){
            return result;
        }
        auto left = postorderTraversal(root->left);
        result.insert(end(result), begin(left), end(left));
        auto right = postorderTraversal(root->right);
        result.insert(end(result), begin(right), end(right));
        result.push_back(root->val);
        return result;
    }
};
