/*
Given an integer array nums, return the number of of length 3 such that the sum of the first and third numbers equals exactly half of the second number.
*/

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        int i = 0;
        int j = 1;
        int k = 2;

        while (k < nums.size()) {
            if (nums[i] + nums[k] == nums[j] / 2.0) count++;
            i++;
            j++;
            k++;
        }

        return count;
    }
};
