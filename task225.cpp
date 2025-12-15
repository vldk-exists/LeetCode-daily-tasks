/*
Given an integer array nums and an integer k, return the smallest positive multiple of k that is missing from nums.

A multiple of k is any positive integer divisible by k.
*/

class Solution {
public:
    bool findNumber(vector<int>& nums, int n) {
        for (const int& i: nums) {
            if (i == n) return true;
        }
        return false;
    }

    int missingMultiple(vector<int>& nums, int k) {
        int x = k;
        while (findNumber(nums, x)) x += k; 
        return x;
    }
};
