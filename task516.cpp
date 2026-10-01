/*
You are given an integer array nums of length n.

The score of an index i is defined as the number of indices j such that:

    - i < j < n, and
    - nums[i] and nums[j] have different parity (one is even and the other is odd).

Return an integer array answer of length n, where answer[i] is the score of index i.
*/

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int odd = 0;
        int even = 0;

        for (const int& i: nums) {
            if (i % 2 == 0) ++even;
            else ++odd;
        }

        for (int& i: nums) {
            if (i % 2 == 0) {
                i = odd;
                --even;
            } else {
                i = even;
                --odd;
            }
        }

        return nums;
    }
};
