/*
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
*/

class Solution {
public:
    void func(TreeNode* node, bool& result, const int& target, int sum=0) {
        if (node == nullptr)
            return;

        sum += node->val;
        
        if (node->left == nullptr && node->right == nullptr) {
            if (sum == target) result = true;
        }

        func(node->left, result, target, sum);
        func(node->right, result, target, sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool result = false;

        func(root, result, targetSum);

        return result;
    }
};
