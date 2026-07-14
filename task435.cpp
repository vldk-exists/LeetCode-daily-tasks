/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (const int& i: nums) {
            for (int j = 10; j <= 100000; j *= 100) {
                if (i / j > 0 && i / j < 10) {
                    ++count;
                    break;
                }
            }
        }

        return count;
    }
};
