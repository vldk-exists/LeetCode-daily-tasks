/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == pow(2, x).
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; return pow(2, (int)(log(n) / log(2))) == n;
    }
};
