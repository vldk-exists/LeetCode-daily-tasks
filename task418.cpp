/*
You are given a positive integer array nums.

    The element sum is the sum of all the elements in nums.
    The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.

Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s1 = 0, s2 = 0;
        
        for (int i: nums) {
            s1 += i;

            while (i > 0) {
                s2 += i % 10;
                i /= 10;
            }
        }        

        return abs(s1-s2);
    }
};
