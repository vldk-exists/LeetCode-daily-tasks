/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
*/

class Solution {
public:
    void func(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;
        
        if (node->left != nullptr) {
            func(node->left, result);
        }

        result.push_back(node->val);

        if (node->right != nullptr) {
            func(node->right, result);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        func(root, result);

        return result;
    }
};
