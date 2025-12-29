/*
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a = INT_MAX, b = 0;
        
        for (const int& i: nums) {
            a = min(a, i);
            b = max(b, i);
        }

        while (a > 0 && b > 0) {
            if (a > b) a = a - b;
            else b = b - a;
        }

        return max(a, b);
    }
};
