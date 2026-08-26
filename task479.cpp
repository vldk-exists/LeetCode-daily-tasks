/*
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

class Solution {
public:
    void func(TreeNode* node, int& maxDepth, int depth=1) {
        if (node == nullptr) return;

        if (depth > maxDepth)
            maxDepth = depth;

        if (node->left != nullptr) 
            func(node->left, maxDepth, depth+1);

        if (node->right != nullptr)
            func(node->right, maxDepth, depth+1);
    }
    
    int maxDepth(TreeNode* root) {
        int maxDepth = 0;

        func(root, maxDepth);

        return maxDepth;
    }
};
