/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

    For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

*/

class Solution {
public:
    int mySqrt(int h) {
        int l = 0, r = h;
        while (l <= r) {
            int m = l + (r - l) / 2;
            long long sq = 1LL * m * m;
            long long sqNext = 1LL * (m + 1) * (m + 1);

            if (sq <= h && h < sqNext) {
                return m;
            } else if (sq < h) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return -1;
    }
};
