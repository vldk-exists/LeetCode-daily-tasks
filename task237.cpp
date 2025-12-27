/*
Given the root of a binary tree, invert the tree, and return its root.
*/

class Solution {
public:
    void invert(TreeNode* node) {
        if (node->left != nullptr) invert(node->left);
        if (node->right != nullptr) invert(node->right);

        TreeNode* buffer = node->left;
        node->left = node->right;
        node->right = buffer;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root != nullptr) invert(root);

        return root;
    }
};
