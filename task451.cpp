/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x1 = 0;

        for (const int& i: nums) {
            x1 ^= i;
        }

        int d = x1 & (-x1);

        int g1 = 0;

        for (const int& i: nums) {
            if ((i & d) > 0) g1 ^= i;
        }

        return {g1, x1 ^ g1};
    }
};
