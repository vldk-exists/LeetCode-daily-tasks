/*
Given the root of a binary tree with unique values and the values of two different nodes of the tree x and y, return true if the nodes corresponding to the values x and y in the tree are cousins, or false otherwise.

Two nodes of a binary tree are cousins if they have the same depth with different parents.

Note that in a binary tree, the root node is at the depth 0, and children of each depth k node are at the depth k + 1.
*/

class Solution {
public:
    void func(TreeNode* node, TreeNode* parent, map<int, pair<int, int>>* data, int depth) {
        (*data)[node->val] = {depth, parent->val};

        if (node->left != nullptr) {
            func(node->left, node, data, depth+1);
        }

        if (node->right != nullptr) {
            func(node->right, node, data, depth+1);
        }
    }

    bool isCousins(TreeNode* root, int x, int y) {
        map<int, pair<int, int>> a;
        int depth = 0;
        func(root, root, &a, depth);

        return (a[x].first == a[y].first && a[x].second != a[y].second);
    }
};
