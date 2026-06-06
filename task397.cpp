/*
You are given a 0-indexed array nums of length n containing distinct positive integers. Return the minimum number of right shifts required to sort nums and -1 if this is not possible.

A right shift is defined as shifting the element at index i to index (i + 1) % n, for all indices.
*/

class Solution {
public:
    bool check(const vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[i] > nums[i+1]) return false;
        }

        return true;
    }

    int minimumRightShifts(vector<int>& nums) {
        for (int i = 0; i <= nums.size(); ++i) {
            if (check(nums)) return i;

            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }

        return -1;
    }
};
