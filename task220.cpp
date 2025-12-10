/*
You are given a positive integer n.

Let even denote the number of even indices in the binary representation of n with value 1.

Let odd denote the number of odd indices in the binary representation of n with value 1.

Note that bits are indexed from right to left in the binary representation of a number.

Return the array [even, odd].
*/

class Solution {
public:
    vector<int> evenOddBit(unsigned int n) {
        unsigned int i = 0, j = 1;
        int odd = 0, even = 0;

        for (; i < 32; i++) {
            if ((n & j) > 0) {
                if (i % 2 == 0) even++;
                else odd++; 
            }
            j *= 2;
        }

        return {even, odd};
    }
};
