/*
You are given two binary trees root1 and root2.

Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.

Return the merged tree.

Note: The merging process must start from the root nodes of both trees.
*/

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* node1, TreeNode* node2) {
        if (node1 == nullptr && node2 == nullptr) {
            return nullptr;
        }

        if (node1 == nullptr)
            node1 = new TreeNode();

        TreeNode* left2 = nullptr;
        TreeNode* right2 = nullptr;

        if (node2 != nullptr) {
            node1->val += node2->val;

            left2 = node2->left;
            right2 = node2->right;
        }

        node1->left = mergeTrees(node1->left, left2);
        node1->right = mergeTrees(node1->right, right2);

        return node1;
    }
};
