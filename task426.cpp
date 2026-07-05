/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/

class Solution {
public:
    void invert(TreeNode* node) {
        if (node->left != nullptr) invert(node->left);
        if (node->right != nullptr) invert(node->right);

        swap(node->left, node->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr)
            return true;

        if (p == nullptr || q == nullptr) 
            return false;

        return (p->val == q->val) && 
               (isSameTree(p->left, q->left)) &&
               (isSameTree(p->right, q->right));
    }

    bool isSymmetric(TreeNode* root) {
        if (root->left != nullptr) invert(root->left);

        return isSameTree(root->left, root->right);
    }
};
