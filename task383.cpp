/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.
*/

class Solution {
public:
    bool f(const vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[i] > nums[i+1]) return false;
        }

        return true;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        for (int k = 0; k < n; ++k) {
            int a = nums.back();

            nums.pop_back();

            nums.insert(nums.begin(), a);

            if (f(nums)) return true;
        }   
        return false;
    }
};
