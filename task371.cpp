/*
You are given a string s consisting of lowercase English letters and special characters.

Your task is to perform these in order:

    - Reverse the lowercase letters and place them back into the positions originally occupied by letters.
    - Reverse the special characters and place them back into the positions originally occupied by special characters.

Return the resulting string after performing the reversals.
*/

class Solution {
public:
    void reverseChars(string& s) {
        int i = 0;
        int j = s.length()-1;
        while (i < j) {
            if (isalpha(s[i])) {
                if (isalpha(s[j])) {
                    swap(s[i], s[j]);
                    ++i;
                    --j;
                } else --j;
            } else ++i;
        }
    }

    void reverseSpecs(string& s) {
        int i = 0;
        int j = s.length()-1;
        while (i < j) {
            if (!isalpha(s[i])) {
                if (!isalpha(s[j])) {
                    swap(s[i], s[j]);
                    ++i;
                    --j;
                } else --j;
            } else ++i;
        }
    }

    string reverseByType(string s) {
        reverseChars(s); reverseSpecs(s);

        return s;
    }
};
