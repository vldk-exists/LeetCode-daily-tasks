/*
You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.
*/

TreeNode* search(TreeNode* a, int val) {
    if (a->val == val) return a;
    else if (a->val > val) {if (a->left) return search(a->left, val);}
    else if (a->val < val) {if (a->right) return search(a->right, val);}
    return nullptr;
}

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root, val);
    }
};
