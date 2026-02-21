/*
Given two integers left and right, return the count of numbers in the inclusive range [left, right] having a prime number of set bits in their binary representation.

Recall that the number of set bits an integer has is the number of 1's present when written in binary.

    -For example, 21 written in binary is 10101, which has 3 set bits.

*/

const set<int> primeNumbers = {2, 3, 5, 7, 11, 13, 17, 19};

class Solution {
public:
    bool f(const int& n) {
        int count = 0;
        for (int j = n; j > 0;) {
            if ((j & 1) > 0) ++count;
            j >>= 1;
        }

        return primeNumbers.find(count) != primeNumbers.end();
    }

    int countPrimeSetBits(int left, int right) {
        int result = 0;

        for (int i = left; i <= right; i++) {
            if (f(i)) result++;
        }

        return result;
    }
};
