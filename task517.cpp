/*
You are given an integer array nums.

The digit range of an integer is defined as the difference between its largest digit and smallest digit.

For example, the digit range of 5724 is 7 - 2 = 5.

Return the sum of all integers in nums whose digit range is equal to the maximum digit range among all integers in the array.
*/

class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> ranges(nums.size(), 0);

        int maxRange = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            int mx = 0;
            int mn = 10;
            while (x > 0) {
                int digit = x % 10;

                if (mx < digit)
                    mx = digit;
                if (mn > digit) 
                    mn = digit;

                x /= 10;
            }

            ranges[i] = mx - mn;

            if (ranges[i] > maxRange)
                maxRange = ranges[i];
        }

        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (ranges[i] == maxRange) sum += nums[i];
        }

        return sum;
    }
};
