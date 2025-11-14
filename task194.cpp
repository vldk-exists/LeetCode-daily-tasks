/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.
*/

class Solution {
public:
    unsigned int arrangeCoins(int n) {
        unsigned int j = 0;
        unsigned int i = 1;
        for (; j < n;) {
            j += i;
            if (j < n) i++;
        }

        if (j == n) return i;
        return i-1;
    }
};
