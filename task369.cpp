/*
Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.
*/

class Solution {
public:
    void getNums(TreeNode* node, vector<int>& nums) {
        if (node == nullptr) return;

        if (node->left != nullptr) getNums(node->left, nums);
        nums.push_back(node->val);
        if (node->right != nullptr) getNums(node->right, nums);
    }


    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;

        getNums(root, nums);

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == k) return true;
            }
        }

        return false;
    }
};
