/*
You are given an integer array nums.

Return the bitwise OR of all even numbers in the array.

If there are no even numbers in nums, return 0.
*/

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int result = 0;
        for (const int& i: nums) {
            if ((i & 1) == 0) result |= i;
        }

        return result;
    }
};
