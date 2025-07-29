/*
A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
*/

vector<int> readTree(TreeNode* node) {
    vector<int> values = {node->val};

    if (node->left != nullptr) {
        values.push_back(node->left->val);
        vector<int> left_values = readTree(node->left);
        values.insert(values.end(), left_values.begin(), left_values.end());
    }

    if (node->right != nullptr) {
        values.push_back(node->right->val);
        vector<int> right_values = readTree(node->right);
        values.insert(values.end(), right_values.begin(), right_values.end());
    }

    return values;
}

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        vector<int> values = readTree(root);

        set<int> set_values(values.begin(), values.end());

        return (set_values.size() <= 1);
    }
};
