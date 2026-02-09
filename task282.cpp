/*
You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.

Notice that x does not have to be an element in nums.

Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
*/

class Solution {
public:
    int specialArray(vector<int>& nums) {
        const int& n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (nums[i] > 1) {
                int m = n - i;

                for (int j = nums[i]; j > 0; j--) {
                    if (i > 0 && nums[i-1] >= m) continue;
                    if (m == j) return j;
                }
                
            }
        }

        return -1;
    }
};
