/*
You are given an integer n.

Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.

Let sum be the sum of digits in x.

Return an integer representing the value of x * sum.
*/

class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0) return 0;
        int sum = 0;
        long long int x = 0, m = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                sum += digit;

                x += digit*m;
                m *= 10;
            }
            n /= 10;
        }
        return x * sum;
    }
};
