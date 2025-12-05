/*
You are given an integer array nums.

In one move, you may increase the value of any single element nums[i] by 1.

Return the minimum total number of moves required so that all elements in nums become equal.
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxElement = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) maxElement = max(maxElement, nums[i]);

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < maxElement) count += maxElement - nums[i];
        }

        return count;
    }
};
