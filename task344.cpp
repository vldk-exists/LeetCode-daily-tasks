/*
Given the root of a binary tree, return the postorder traversal of its nodes' values.
*/

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;

        TreeNode* a = root;
        set<TreeNode*> checked = {nullptr};
        while (checked.find(root) == checked.end()) {
            if (checked.find(a->left) == checked.end()) {
                a = a->left;
                continue;
            }
            if (checked.find(a->right) == checked.end()) {
                a = a->right;
                continue;
            }

            result.push_back(a->val);
            checked.insert(a);
            a = root;
        }

        return result;
    }
};
