/*
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        int i = 2;
        int j = num;

        while (i <= j) {
            int k = i + (j - i) / 2;

            int l = num / k;
            int m = num % k;

            if (l == k && m == 0) return true;

            if (l > k) {
                i = k + 1;
            } else {
                j = k - 1;
            }
        }

        return false;
    }
};
