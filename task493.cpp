/*
You are given an integer n.

Return the total number of commas used when writing all integers from [1, n] (inclusive) in standard number formatting.

In standard formatting:

    - A comma is inserted after every three digits from the right.
    - Numbers with fewer than 4 digits contain no commas.
*/

class Solution {
public:
    long long countCommas(long long n) {
        long long int a = 0;
        long long int m = 1000;

        while (1) {
            if (n - (m-1) < 0) break;

            a += n - (m-1);
            m *= 1000;
        }

        return a;
    }
};
