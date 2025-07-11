/*
You are given an integer array nums of length n.

A partition is defined as an index i where 0 <= i < n - 1, splitting the array into two non-empty subarrays such that:

    Left subarray contains indices [0, i].
    Right subarray contains indices [i + 1, n - 1].

Return the number of partitions where the difference between the sum of the left and right subarrays is even.
*/

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s = 0;
        int a = 0;
        int b = accumulate(nums.begin(), nums.end(), 0);
        for (int i=0; i<nums.size()-1; i++) {
            a += nums[i];
            b -= nums[i];

            if ((a - b) % 2 == 0) s++; 
        }

        return s;
    }
};
