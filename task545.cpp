/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.
*/

class Solution {
public:
    void func(TreeNode* node, int& minDepth, int depth=1) {
        if (node == nullptr) return;

        if (node->left == nullptr && node->right == nullptr) {
            if (depth < minDepth)
                minDepth = depth;
        } 

        if (node->left != nullptr) 
            func(node->left, minDepth, depth+1);

        if (node->right != nullptr)
            func(node->right, minDepth, depth+1);
    }
    
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int minDepth = INT_MAX;

        func(root, minDepth);

        return minDepth;
    }
};
