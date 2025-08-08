/*
Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.

You must write an algorithm that runs in linear time and uses linear extra space.
*/

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() >= 2) {
            sort(nums.begin(), nums.end());
            int i = 0;
            int j = 1;
            int maxDifference = 0;
            for (; j < nums.size(); j++, i++) {
                int difference = nums[j] - nums[i];
                if (difference > maxDifference) maxDifference = difference;
            }
            return maxDifference;
        } return 0;
    }
};
