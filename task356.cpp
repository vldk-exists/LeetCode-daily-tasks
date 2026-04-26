/*
Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, or false otherwise. If the array is already strictly increasing, return true.

The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).
*/

class Solution {
public:
    bool check(const vector<int>& nums, int x) {
        int n = nums.size();
        if (x == n-1) --n;

        for (int i = 0; i < n-1; ++i) {
            if (i != x) {
                int j = i+1;
                if (i+1 == x) ++j;
                if (nums[i] >= nums[j]) return false;
            }
        }

        return true;
    }

    bool canBeIncreasing(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (check(nums, i)) return true;
        }

        return false;
    }
};
