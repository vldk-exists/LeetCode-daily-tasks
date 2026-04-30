/*
You are given a string s and an integer k.

Determine if there exists a

of length exactly k in s that satisfies the following conditions:

    - The substring consists of only one distinct character (e.g., "aaa" or "bbb").
    - If there is a character immediately before the substring, it must be different from the character in the substring.
    - If there is a character immediately after the substring, it must also be different from the character in the substring.

Return true if such a substring exists. Otherwise, return false.
*/

class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if (s.length() == 1) return true;
        char a = s[0];
        int count = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == a) ++count;
            else {
                if (count == k) return true;
                a = s[i];
                count = 1;
            }
        }

        if (count == k) return true;

        return false;
    }
};
