/*
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
*/

class Solution {
public:
    TreeNode* func(int start, int end, const vector<int>& nums) {
        if (start > end)
            return nullptr;

        int middle = start + (end-start) / 2;

        TreeNode* newNode = new TreeNode(nums[middle]);

        newNode->left = func(start, middle-1, nums);

        newNode->right = func(middle+1, end, nums);

        return newNode;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;

        int middle = start + (end-start) / 2;

        TreeNode* result = new TreeNode(nums[middle]);

        result->left = func(start, middle-1, nums);

        result->right = func(middle+1, end, nums);

        return result;
    }
};
