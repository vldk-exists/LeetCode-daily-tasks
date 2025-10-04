/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        if (n > 1) {
            sort(nums.begin(), nums.end());

            int a = nums[0];
            int b = 1;

            for (int i = 1; i < n; i++) {
                if (nums[i] != a) {
                    if (b > n / 2) return a;
                    a = nums[i];
                    b = 1;
                } else b++;
            }

            if (b > n / 2) return a;
        }

        return nums[0];
    }
};
