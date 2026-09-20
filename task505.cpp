/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int numbers[5001] = {};
        int even = 0;
        int odd = 0;


        for (const int& i: nums) {
            if ((i & 1) == 0) ++even;
            else ++odd;

            ++numbers[i];
        }

        int b = 0;

        for (int i = 0; i < even; ++i) {
            while (numbers[b] == 0 || (b & 1) > 0) {
                ++b;
            }

            --numbers[b];
            nums[i] = b;
        }

        b = 0;

        for (int i = even; i < nums.size(); ++i) {
            while (numbers[b] == 0 || (b & 1) == 0) {
                ++b;
            }

            --numbers[b];
            nums[i] = b;
        }

        return nums;
    }
};
