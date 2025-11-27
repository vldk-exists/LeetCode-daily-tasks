/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0) {
            int rem = columnNumber % 26;

            if (rem == 0) {
                result += 'Z';
                columnNumber = columnNumber / 26 - 1;
            } else {
                result += (char)('A'-1+rem);
                columnNumber = columnNumber / 26;
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
