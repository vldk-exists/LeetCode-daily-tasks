/*
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
*/

class Solution {
public:
    void func(TreeNode* node, int& k, int& res) {
        if (node->left != nullptr)
            func(node->left, k, res);

        if (k-1 == 0 && res < 0) {
            res = node->val;
            return;
        }
        --k;

        if (node->right != nullptr)
            func(node->right, k, res);
    }

    int kthSmallest(TreeNode* root, int k) {
        int res = -1;
        func(root, k, res);
        return res;
    }
};
