/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        size_t n = nums.size();

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i <= n; i++) {
            sum1 += i;
        }

        for (int i = 0; i < n; i++) {
            sum2 += nums[i];
        }

        return sum1-sum2;
    }
};
