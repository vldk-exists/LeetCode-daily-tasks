/*
No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [a, b] where:

    - a and b are No-Zero integers.
    - a + b = n
*/

class Solution {
public:
    bool checkNoZero(int num) {
        while (num != 0)
        {
            int digit = num % 10;
            if (digit == 0) return false;
            num = num / 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i <= n; i++) {
            int a = i;
            int b = n-i;

            if (checkNoZero(a) && checkNoZero(b)) return {a, b};
        }

        return {};
    }

};
