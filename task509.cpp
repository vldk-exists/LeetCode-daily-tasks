/*
You are given an integer array nums.

Return the smallest index i such that the sum of the digits of nums[i] is equal to i.

If no such index exists, return -1.
*/

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0;

            int x = nums[i];
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            if (sum == i) return i;
        }

        return -1;
    }
};
