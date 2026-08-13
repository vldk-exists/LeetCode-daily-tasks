/*
Given the root of a binary tree, flatten the tree into a "linked list":
    - The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
    - The "linked list" should be in the same order as a pre-order traversal of the binary tree.
*/

class Solution {
public:
    void func(TreeNode* node, vector<TreeNode*>& s) {
        s.push_back(new TreeNode(node->val));

        if (node->left != nullptr)
            func(node->left, s);
        
        if (node->right != nullptr)
            func(node->right, s);
    }

    void flatten(TreeNode* root) {
        if (root == nullptr) return;
        vector<TreeNode*> s;

        func(root, s);

        root->val = s[0]->val;
        root->left = nullptr;

        TreeNode* previous = root;

        for (int i = 1; i < s.size(); ++i) {
            previous->right = s[i];
            previous = previous->right;
        }
    }
};
