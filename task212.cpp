/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;

        while (i <= j) {
            int m = i + (j - i) / 2;

            if (nums[m] == target) return m;
            else if (nums[m] < target) i = m+1;
            else j = m - 1;
        }

        return -1;
    }
};
