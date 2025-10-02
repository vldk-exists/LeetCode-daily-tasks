/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1) return;

        int i = 0, j = 1;

        while (j < nums.size()) {
            if (nums[i] != 0) {
                i++;
                j++;
            } else {
                if (nums[j] != 0) {
                    swap(nums[i], nums[j]);
                } else j++;
            }
        }
    }
};
