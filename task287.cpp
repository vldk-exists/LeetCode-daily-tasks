/*
Given a string s containing only lowercase English letters and the '?' character, convert all the '?' characters into lowercase letters such that the final string does not contain any consecutive repeating characters. You cannot modify the non '?' characters.

It is guaranteed that there are no consecutive repeating characters in the given string except for '?'.

Return the final string after all the conversions (possibly zero) have been made. If there is more than one solution, return any of them. It can be shown that an answer is always possible with the given constraints.
*/

class Solution {
public:
    string modifyString(string s) {
        const int& n = s.length();

        char prev = '?';
        for (int i = 0; i < n-1; i++) {
            if (s[i] == '?') {
                for (char j = 'a'; j <= 'z'; j++) {
                    if (j != prev && j != s[i+1]) {
                        s[i] = j;
                        break;
                    }
                }
            }
            prev = s[i];
        }

        if (s[n-1] == '?') {
            for (char j = 'a'; j <= 'z'; j++) {
                if (j != prev) {
                    s[n-1] = j;
                    break;
                }
            }
        }

        return s;
    }
};
