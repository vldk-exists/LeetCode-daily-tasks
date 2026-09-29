/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = 0;

        for (int& i: nums) {
            s += i;
            i = s;
        }

        return nums;
    }
};
