/*
You are given a 0-indexed integer array nums.

The distinct count of a subarray of nums is defined as:

    - Let nums[i..j] be a subarray of nums consisting of all the indices from i to j such that 0 <= i <= j < nums.length. Then the number of distinct values in nums[i..j] is called the distinct count of nums[i..j].

Return the sum of the squares of distinct counts of all subarrays of nums.

A subarray is a contiguous non-empty sequence of elements within an array.
*/

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int a[100] = {0};

            for (int j = i; j < nums.size(); ++j) {
                if (!a[nums[j]-1]) a[nums[j]-1] = 1;

                int count = 0;

                for (int j = 0; j < 100; ++j) {
                    if (a[j]) ++count;
                }

                result += count * count;
            }
        }

        return result;
    }
};
