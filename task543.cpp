/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/

class Solution {
public:
    bool checkIfPangram(string s) {
        int a[26] = {0};

        for (const char& i: s) {
            ++a[i-'a'];
        }

        for (int i = 0; i < 26; ++i) {
            if (!a[i]) return false;
        }

        return true;
    }
};
