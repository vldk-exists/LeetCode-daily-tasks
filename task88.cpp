/*
There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.

You are given four non-negative integers numOnes, numZeros, numNegOnes, and k.

The bag initially contains:

    - numOnes items with 1s written on them.
    - numZeroes items with 0s written on them.
    - numNegOnes items with -1s written on them.

We want to pick exactly k items among the available items. Return the maximum possible sum of numbers written on the items.
*/

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int maxSum = 0;

        if (k > numOnes) {
            maxSum += numOnes;
            k -= numOnes;
        } else return k;

        if (k > numZeros) {
            k -= numZeros;
        } else return maxSum;

        return maxSum-k;
    }   
};
