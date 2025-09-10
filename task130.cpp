/*
You are given a 0-indexed array nums of size n consisting of non-negative integers.

You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of nums:

    If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.

After performing all the operations, shift all the 0's to the end of the array.

    For example, the array [1,0,2,0,0,1] after shifting all its 0's to the end, is [1,2,1,0,0,0].

Return the resulting array.

Note that the operations are applied sequentially, not all at once.
*/

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] != 0) {
                if (nums[i] == nums[i+1]) {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }
        }

        int zeros = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zeros++;
        }

        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

        for (int i = 0; i < zeros; i++) nums.push_back(0);

        return nums;
    }
};
