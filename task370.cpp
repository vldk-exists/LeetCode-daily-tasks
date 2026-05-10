/*
You are given an array nums of non-negative integers and an integer k.

An array is called special if the bitwise OR of all of its elements is at least k.

Return the length of the shortest special non-empty subarray of nums, or return -1 if no special subarray exists.
*/

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) { 
        int result = INT_MAX;
        int length = 1;
        int val = 0;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i; j < nums.size(); ++j) {
                val |= nums[j];

                if (val >= k) 
                    result = length < result ? length : result;
                ++length;
            }
            length = 1; 
            val = 0;
        }

        if (result == INT_MAX) return -1;
        return result;
    }
};
