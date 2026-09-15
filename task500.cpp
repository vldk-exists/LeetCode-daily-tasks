/*

				/500 day anniversary!/
   
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.
*/

class Solution {
public:
    bool checkIfPalindromic(const string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }

            ++i;
            --j;
        }

        return true;
    }

    int countSubstrings(string s) {
        int count = 0;

        for (int i = 0; i < s.length(); ++i) {
            for (int j = i; j < s.length(); ++j) {
                if (checkIfPalindromic(s, i, j)) ++count;
            }
        }

        return count;
    }
};
