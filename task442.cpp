/*
You are given an integer n and a digit x.

A number is considered valid if:

    - It contains at least one occurrence of digit x, and
    - It does not start with digit x.

Return true if n is valid, otherwise return false.
*/

class Solution {
public:
    bool validDigit(int n, int x) {
        bool hasX = false;
        while (n >= 10) {
            if (n % 10 == x && !hasX) hasX = true;
            n /= 10;
        }

        if (n % 10 == x) return false;
        return hasX;
    }
};
