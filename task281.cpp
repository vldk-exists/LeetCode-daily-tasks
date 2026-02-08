/*
Given a binary tree, determine if it is height-balanced.
*/

class Solution {
public:
    int getDepth(TreeNode* node, int depth) {
        int left = 0, right = 0;
        
        if (node->left != nullptr) left = getDepth(node->left, depth+1);
        if (node->right != nullptr) right = getDepth(node->right, depth+1);
        if (node->left == nullptr && node->right == nullptr) return depth;

        return max(left, right);
    }   

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int left = 0, right = 0;
        if (root->left != nullptr) left = getDepth(root->left, 1);
        if (root->right != nullptr) right = getDepth(root->right, 1);

        bool result = abs(left - right) <= 1;

        if (root->left != nullptr && result) result = isBalanced(root->left);
        if (root->right != nullptr && result) result = isBalanced(root->right);

        return result;
    }
};
