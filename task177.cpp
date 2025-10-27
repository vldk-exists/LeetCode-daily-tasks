/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits. 
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int x = n;

        vector<int> digits;
        if (x > 0) {
            while (x > 0) {
                digits.push_back(x % 10);

                x /= 10;
            }
        } else digits = {0};

        int a = 0;
        int b = digits[0];

        for (int i = 0; i < digits.size(); i++) {
            if (i > 0) {
                b *= digits[i];
            }
            a += digits[i];
        }

        return b - a;
    }
};
