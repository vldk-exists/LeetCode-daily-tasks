/*
You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

    - Replace each even number with 0.
    - Replace each odd numbers with 1.
    - Sort the modified array in non-decreasing order.

Return the resulting array after performing these operations.
*/

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;
        int odd = 1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                ++even;
            } else 
                ++odd;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (even > 0) {
                nums[i] = 0;
                --even;
            } else {
                nums[i] = 1;
            }
        } 

        return nums;
    }
};
