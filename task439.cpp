/*
An array is considered special if the parity of every pair of adjacent elements is different. In other words, one element in each pair must be even, and the other must be odd.

You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.
*/

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; ++i) {
            bool a = nums[i] % 2 == 0;
            bool b = nums[i+1] % 2 == 0;
            if (a == b) return false;
        }

        return true;
    }
};
