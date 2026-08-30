/*
Given the root of a binary tree, return the preorder traversal of its nodes' values.
*/

class Solution {
public:
    void func(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;

        result.push_back(node->val);

        if (node->left != nullptr)
            func(node->left, result);

        if (node->right != nullptr)
            func(node->right, result);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        func(root, result);

        return result;
    }
};
