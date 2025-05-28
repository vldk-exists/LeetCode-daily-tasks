/*
Given an array of positive integers nums, return the maximum possible sum of an strictly increasing array in nums.

A subarray is defined as a contiguous sequence of numbers in an array.
*/

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];
            } else {
                currentSum = nums[i];
            }
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
