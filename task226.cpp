/*
You are given the root of a binary tree where each node has a value 0 or 1. Each root-to-leaf path represents a binary number starting with the most significant bit.

    For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, then this could represent 01101 in binary, which is 13.

For all leaves in the tree, consider the numbers represented by the path from the root to that leaf. Return the sum of these numbers.

The test cases are generated so that the answer fits in a 32-bits integer.
*/

class Solution {
public:
    set<TreeNode*> s;

    void func(TreeNode* a, string path, int& res) {
        path += a->val + '0';

        if (a->left != nullptr && s.find(a->left) == s.end()) func(a->left, path, res);

        if (a->right != nullptr && s.find(a->right) == s.end()) func(a->right, path, res);

        s.insert(a); 

        if (a->left == nullptr && a->right == nullptr) {
            res += stoi(path, nullptr, 2);
        }   
    }

    int sumRootToLeaf(TreeNode* root) {
        int res = 0;
        func(root, "", res);
        return res;
    }
};
