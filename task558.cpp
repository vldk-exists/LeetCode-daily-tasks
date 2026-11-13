/*
You are given an alphanumeric string s. (Alphanumeric string is a string consisting of lowercase English letters and digits).

You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by another digit. That is, no two adjacent characters have the same type.

Return the reformatted string or return an empty string if it is impossible to reformat the string.
*/

class Solution {
public:
    string reformat(string s) {
        int letters_amount = 0;
        int digits_amount = 0;
        int letters[26] = {0};
        int digits[10] = {0};

        for (const int& i: s) {
            if (isdigit(i)) {
                ++digits_amount;
                ++digits[i-'0'];
            } else {
                ++letters_amount;
                ++letters[i-'a'];
            }
        }

        int diff = letters_amount - digits_amount;

        if (abs(diff) > 1) 
            return "";

        int n = letters_amount + digits_amount;
        string result(n, ' ');

        if (letters_amount > digits_amount) {
            for (int i = 0, j = 0; i < 26;) {
                if (letters[i] > 0) {
                    result[j] = i + 'a';
                    --letters[i];
                    j += 2;
                } else {
                    ++i;
                }
            }

            for (int i = 0, j = 1; i < 10;) {
                if (digits[i] > 0) {
                    result[j] = i + '0';
                    --digits[i];
                    j += 2;
                } else {
                    ++i;
                }
            }
        } else {
            for (int i = 0, j = 0; i < 10;) {
                if (digits[i] > 0) {
                    result[j] = i + '0';
                    --digits[i];
                    j += 2;
                } else {
                    ++i;
                }
            }

            for (int i = 0, j = 1; i < 26;) {
                if (letters[i] > 0) {
                    result[j] = i + 'a';
                    --letters[i];
                    j += 2;
                } else {
                    ++i;
                }
            }
        }

        return result;
    }
};
