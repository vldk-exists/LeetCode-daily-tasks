/*
A password is said to be strong if it satisfies all the following criteria:

    - It has at least 8 characters.
    - It contains at least one lowercase letter.
    - It contains at least one uppercase letter.
    - It contains at least one digit.
    - It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
    - It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).

Given a string password, return true if it is a strong password. Otherwise, return false.
*/

class Solution {
public:
    int lower = 0;
    int upper = 0;
    int digits = 0;
    int special = 0;

    void check(const char& i) {
        if (isalpha(i)) {
            if (islower(i)) ++lower;
            else ++upper;
        }
        else if (isdigit(i)) ++digits;
        else ++special;
    }

    bool strongPasswordCheckerII(string p) {
        if (p.length() < 8) return false;
        for (int i = 0; i < p.length()-1; ++i) {
            check(p[i]);
            if (p[i] == p[i+1]) return false;
        }

        check(p.back());

        return digits > 0 && special > 0 && upper > 0 && lower > 0;
    }
};
