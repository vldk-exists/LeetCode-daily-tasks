/*
Given a 0-indexed integer array nums, determine whether there exist two subarrays of length 2 with equal sum. Note that the two subarrays must begin at different indices.

Return true if these subarrays exist, and false otherwise.

A subarray is a contiguous non-empty sequence of elements within an array.
*/

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int> a;
        for (int i = 0; i < nums.size()-1; ++i) {
            int s = nums[i] + nums[i+1];

            if (a.find(s) != a.end()) return true;
            a.insert(s);
        }

        return false;
    }
};
