/*
You are given a string number representing a positive integer and a character digit.

Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.
*/

class Solution {
public:
    string removeDigit(string number, char digit) {
        const int& n = number.length();
        
        string maxNumber = "";

        for (int i = 0; i < n; i++) {
            if (number[i] == digit) {
                string buffer;
                for (int j = 0; j < n; j++) {
                    if (j != i) buffer += number[j];
                }
                if (buffer > maxNumber) maxNumber = buffer;
            }
        }

        return maxNumber;
    }
};
