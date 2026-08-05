/*
You are given an integer array nums with no duplicates. A maximum binary tree can be built recursively from nums using the following algorithm:

    - Create a root node whose value is the maximum value in nums.
    - Recursively build the left subtree on the subarray prefix to the left of the maximum value.
    - Recursively build the right subtree on the subarray suffix to the right of the maximum value.

Return the maximum binary tree built from nums.
*/

class Solution {
public:
    TreeNode* func(const vector<int>& nums, int start, int end) {
        if (start < 0 || start >= nums.size()) return nullptr;
        if (end < 0 || end >= nums.size()) return nullptr;

        int maxValue = -1;
        int maxIndex = -1;

        for (int i = start; i <= end; ++i) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
                maxIndex = i;
            }
        }       

        if (maxValue == -1) return nullptr; 

        TreeNode* newNode = new TreeNode(maxValue);

        newNode->left = func(nums, start, maxIndex-1);

        newNode->right = func(nums, maxIndex+1, end);

        return newNode;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return func(nums, 0, nums.size()-1);
    }
};
