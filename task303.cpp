/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        bool overflow = false;
        while (!num1.empty() || !num2.empty()) {
            char a = '0';
            if (!num1.empty()) {
                a = num1.back();
                num1.pop_back();
            }

            char b = '0';
            if (!num2.empty()) {
                b = num2.back();
                num2.pop_back();
            }

            int c = (a-'0') + (b-'0');
            if (overflow) {
                ++c;
                overflow = false;
            }
            if (c >= 10) {
                overflow = true;
                result += '0' + (c-10);
            } else result += '0' + c;
        }

        if (overflow) result += '1';

        reverse(result.begin(), result.end());

        return result;
    }
};
