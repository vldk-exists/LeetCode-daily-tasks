/*
You are given an integer n. Your task is to compute the GCD (greatest common divisor) of two values:

    - sumOdd: the sum of the smallest n positive odd numbers.

    - sumEven: the sum of the smallest n positive even numbers.

Return the GCD of sumOdd and sumEven.
*/

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a = 0, b = 0;

        for (int i = 2, j = 1; n > 0; --n) {
            a += i;
            b += j;
            i += 2;
            j += 2;
        }

        while (a > 0 && b > 0) {
            if (a > b) a-=b;
            else b-=a;
        }

        if (a == 0) return b;
        return a;
    }
};
