/*
You are given two positive integers n and k. A factor of an integer n is defined as an integer i where n % i == 0.

Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
*/

class Solution {
public:
    int kthFactor(int n, int k) {
        int m = 1;

        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                if (m == k) return i;

                ++m;
            }
        }

        return -1;
    }
};
