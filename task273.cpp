/*
Given two binary trees original and cloned and given a reference to a node target in the original tree.

The cloned tree is a copy of the original tree.

Return a reference to the same node in the cloned tree.

Note that you are not allowed to change any of the two trees or the target node and the answer must be a reference to a node in the cloned tree.
*/

class Solution {
public:
    TreeNode* func(TreeNode* node, TreeNode* target) {
        cout << node->val << endl;
        if (node->val == target->val) return node;

        TreeNode* result = nullptr;
        if (node->left != nullptr) result = func(node->left, target);

        if (node->right != nullptr && result == nullptr) result = func(node->right, target);

        return result;
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return func(cloned, target);
    }
};
