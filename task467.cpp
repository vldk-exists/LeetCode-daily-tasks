/*
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
*/

class Solution {
public:
    void func(TreeNode* node, vector<vector<int>>& levels, int level = 0) {        
        if (levels.size()-1 < level) {
            levels.push_back({});
        }

        levels[level].push_back(node->val);

        if (node->left != nullptr) {
            func(node->left, levels, level+1);
        }

        if (node->right != nullptr) {
            func(node->right, levels, level+1);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        
        vector<vector<int>> levels = {{}};

        func(root, levels);

        return levels;
    }
};
