/*
A self-dividing number is a number that is divisible by every digit it contains.

    For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right] (both inclusive).
*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a, b;
        for (int i = left; i <= right; i++) {
            a.push_back(i);
        }
        
        for (int i: a) {
            int n = 0;
            string k = to_string(i);
            for (char x: k) {
                int j = x - '0';
                if (j == 0) continue;
                else if (i % j == 0) n++;
            }
            if (n == k.length()) b.push_back(i);
        }
        
        return b;
    }
};
