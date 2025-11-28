/*
You are given two integers n and t. Return the smallest number greater than or equal to n such that the product of its digits is divisible by t.
*/

class Solution {
public:
    bool check(int n, const int& t) {
        int product = 1;
        
        while (n > 0) {
            product *= n % 10;

            n /= 10;
        }

        return product % t == 0;
    }

    int smallestNumber(int n, int t) {
        while (!check(n, t)) {
            n++;
        }

        return n;
    }
};
