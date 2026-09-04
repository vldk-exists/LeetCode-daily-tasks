/*
You are given an integer array nums of length n and an integer k.

For each index i, define its instability score as max(nums[0..i]) - min(nums[i..n - 1]).

In other words:

    - max(nums[0..i]) is the largest value among the elements from index 0 to index i.
    - min(nums[i..n - 1]) is the smallest value among the elements from index i to index n - 1.

An index i is called stable if its instability score is less than or equal to k.

Return the smallest stable index. If no such index exists, return -1.
*/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mins(nums.size(), 0);

        int start = 0;
        int minNum = INT_MAX;

        for (int i = nums.size()-1; i >= 0; --i) {
            if (nums[i] < minNum) minNum = nums[i];

            mins[i] = minNum;
        }

        int maxNum = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > maxNum) maxNum = nums[i];

            int instability = maxNum - mins[i];

            if (instability <= k) return i;
        }

        return -1;
    }
};
