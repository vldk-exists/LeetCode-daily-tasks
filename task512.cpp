/*
Given a positive integer n, find the pivot integer x such that:

    - The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.
*/

class Solution {
public:
    int pivotInteger(int n) {
        for (int i = 0; i <= n; ++i) {
            int a = 0, b = 0;

            for (int j = 1; j <= i; ++j) {
                a += j;
            }

            for (int j = i; j <= n; ++j) {
                b += j;
            }

            if (a == b) return i;
        }

        return -1;
    }
};
