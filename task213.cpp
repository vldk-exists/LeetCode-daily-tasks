/*
You are given a positive integer n.

Return the maximum product of any two digits in n.

Note: You may use the same digit twice if it appears more than once in n.
*/

class Solution {
public:
    int maxProduct(int n) {
        int a = -1, b = -1;

        while (n > 0) {
            int digit = n % 10;

            if (a < digit) {
                b = a;
                a = digit;
            } else if (b < digit) {
                b = digit;
            }

            n /= 10;
        }

        return a*b;
    }
};
