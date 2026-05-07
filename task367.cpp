/*
Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.
*/

class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        for (int x = 1; x <= min(a,b); ++x) {
            if (a % x == 0 && b % x == 0)++count;
        }

        return count;
    }
};
