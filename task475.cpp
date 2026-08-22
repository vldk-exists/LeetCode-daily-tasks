/*
You are given a positive integer n. Determine whether n is divisible by the sum of the following two values:

    - The digit sum of n (the sum of its digits).

    - The digit product of n (the product of its digits).

Return true if n is divisible by this sum; otherwise, return false.
*/

class Solution {
public:
    bool checkDivisibility(int n) {
        int a = 0;
        int b = 1;

        int x = n;
        while (x > 0) {
            a += x % 10;
            b *= x % 10;

            x /= 10;
        }

        return n % (a + b) == 0;
    }
};
