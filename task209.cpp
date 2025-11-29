/*
You are given an integer array nums and an integer k. You can perform the following operation any number of times:

    - Select an index i and replace nums[i] with nums[i] - 1.

Return the minimum number of operations required to make the sum of the array divisible by k.
*/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;

        int numsSum = 0;
        for (const int& i: nums) numsSum += i;

        int rem = numsSum % k;
        if (rem > 0) {
            for (int& i: nums) {
                if (rem == 0) break;
                if (rem >= i) {
                    count += i;
                    rem -= i;
                } else {
                    count += rem;
                    rem = 0;
                }
            }
        }

        return count;
    }
};
