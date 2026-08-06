/*
You are given an array nums1 of n distinct integers.

You want to construct another array nums2 of length n such that the elements in nums2 are either all odd or all even.

For each index i, you must choose exactly one of the following (in any order):

    - nums2[i] = nums1[i]
    - nums2[i] = nums1[i] - nums1[j], for an index j != i

Return true if it is possible to construct such an array, otherwise, return false.
*/

class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int odd = 0;
        int even = 0;

        for (const int& i: nums) {
            if (i & 1 == 0) ++even;
            else ++odd;
        }

        return even == nums.size() || odd == nums.size() || odd > 1;

        // or simply return true, cause it's always true :3
    }
};
