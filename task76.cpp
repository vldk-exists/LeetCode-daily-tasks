/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string a = "", b;
        for (char i: s) {
            if (isalpha(i)) a += static_cast<char>(tolower(i));
            else if (isdigit(i)) a += i;
        }

        b = a;
        reverse(b.begin(), b.end());

        if (a == b) return true;
        return false;
    }
};
