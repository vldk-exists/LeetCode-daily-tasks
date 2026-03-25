/*
Given the root of a binary tree, return the sum of every tree node's tilt.

The tilt of a tree node is the absolute difference between the sum of all left subtree node values and all right subtree node values. If a node does not have a left child, then the sum of the left subtree node values is treated as 0. The rule is similar if the node does not have a right child.
*/

class Solution {
public:
    int tilts = 0;

    int f(TreeNode* node) {
        int a = 0, b = 0;
        if (node->left != nullptr) {
            a = f(node->left);
        }

        if (node->right != nullptr) {
            b = f(node->right);
        }

        tilts += abs(a-b);

        return node->val + a + b;
    }

    int findTilt(TreeNode* root) {
        if (root == nullptr) return 0;
        f(root);
        return tilts;
    }
};
