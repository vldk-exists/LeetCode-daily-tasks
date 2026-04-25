/*
Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.
*/

class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxE = INT_MIN, minE = INT_MAX;

        for (const int& i: nums) {
            if (i > maxE) maxE = i;
            if (i < minE) minE = i;
        }

        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > minE && nums[i] < maxE) ++ result; 
        }

        return result;
    }
};
