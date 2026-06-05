/*
You are given a 0-indexed integer array nums. An index i is part of a hill in nums if the closest non-equal neighbors of i are smaller than nums[i]. Similarly, an index i is part of a valley in nums if the closest non-equal neighbors of i are larger than nums[i]. Adjacent indices i and j are part of the same hill or valley if nums[i] == nums[j].

Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index.

Return the number of hills and valleys in nums.
*/

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size();) {
            int a = 0;
            int b = 0;

            int j = i-1;
            while (j >= 0) {
                if (nums[i] == nums[j]) --j;
                else {
                    a = nums[j];
                    break;
                }
            }

            int k = i+1;
            while (k < nums.size()) {
                if (nums[i] == nums[k]) ++k;
                else {
                    b = nums[k];
                    break;
                }
            }

            if (a && b) {
                if (a > nums[i] && b > nums[i] ||
                    a < nums[i] && b < nums[i]) ++count;
            }

            if (b) i = k;
            else ++i;
        }

        return count;
    }
};
