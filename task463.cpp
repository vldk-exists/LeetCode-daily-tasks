/*
You are given two non-negative integers n and s.

Return the largest integer that has at most n digits and whose sum of digits is s. If no such integer exists, return -1.
*/

class Solution {
public:
    int largestInteger(int n, int s) {
        if (s == 0) return 0;

        int sum = n * 9;
        int m = 1;
        int b = pow(10, n)-1;
        int res = -1;

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= 9; ++j) {
                if (sum == s) res = b;

                --sum;
                b -= m;
            }

            m *= 10;
        }

        return res;
    }
};
