/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4**x.
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 0;

        while (pow(4, i) != n) {
            if (pow(4, i) > n) return false;
            i++;
        }

        return true;
    }
};
