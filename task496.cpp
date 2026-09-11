/*
Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.
*/
class Solution {
public:
    void func(TreeNode* node, vector<int>& values) {
        if (node == nullptr) return;

        func(node->left, values);

        values.push_back(node->val);

        func(node->right, values);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> values;

        func(root, values);

        if (values.empty()) return nullptr;
        
        TreeNode* result = new TreeNode();
        TreeNode* temp = result;
        int i = 0;

        while (1) {
            temp->val = values[i];
            ++i;
            if (i >= values.size()) break;
            temp->right = new TreeNode();
            temp = temp->right;
        }

        return result;
    }
};
