/*
Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.
*/

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> a;

        for (int i = nums.size()-1; i > 0 && nums[i] > 0; i--) {
            if (nums[i] > 0) {
                if (find(nums.begin(), nums.end(), -nums[i]) != nums.end()) {
                    a.push_back(nums[i]);
                }
            }
        }

        if (a.size() > 0) {
            return *max_element(a.begin(), a.end());
        } return -1;
    }
};
