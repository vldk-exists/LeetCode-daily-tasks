/*
You are given an integer array nums.

You replace each element in nums with the sum of its digits.

Return the minimum element in nums after all replacements.
*/

class Solution {
public:
    int getSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int minSum = INT_MAX;
        for (const int& i: nums) minSum = min(minSum, getSum(i));

        return minSum;
    }
};
