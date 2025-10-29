/*
You are given a positive number n.

Return the smallest number x greater than or equal to n, such that the binary representation of x contains only set bits
*/

class Solution {
public:
    int smallestNumber(int n) {
        int x = 1;
        while (x < n) x *= 2;

        if (n == x) return x*2 - 1;
        return x-1;
    }
};
