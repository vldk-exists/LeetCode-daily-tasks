/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int n = digits.size();
        bool a = true;

        for (int i = n-1; i >= 0; i--) {
            if (a) {
                if (digits[i] == 9) {
                    a = true;
                    digits[i] = 0;
                } else {
                    a = false;
                    digits[i]++;
                }
            }
        }

        if (a) digits.insert(digits.begin(), 1);

        return digits;
    }
};
