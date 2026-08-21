/*
Given the root of a binary tree, return the leftmost value in the last row of the tree.
*/

class Solution {
public:
    void func(TreeNode* node, int& res, int& maxLevel, int level) {
        if (node->left == nullptr && node->right == nullptr) {
            if (level > maxLevel) {
                maxLevel = level;
                res = node->val;
            }
        }

        if (node->left != nullptr) {
            func(node->left, res, maxLevel, level+1);
        }

        if (node->right != nullptr) {
            func(node->right, res, maxLevel, level+1);
        }
    }

    int findBottomLeftValue(TreeNode* root) {
        int maxLevel = -1;
        int res = 0;
        func(root, res, maxLevel, 0);

        return res;
    }
};
