/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];

        int currentSum = nums[0], maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(currentSum, maxSum);
        }

        return maxSum;
    }
};
