/*
You are given an integer n.

Define its mirror distance as: abs(n - reverse(n)) where reverse(n) is the integer formed by reversing the digits of n.

Return an integer denoting the mirror distance of n.

abs(x) denotes the absolute value of x.
*/

class Solution {
public:
    int reverse(int n) {
        long int m = 1, res = 0;

        while (m*10 <= n) m *= 10;

        while (n > 0) {
            res += (n % 10) * m;
            n /= 10;
            m /= 10;
        }

        return res;
    }

    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};
