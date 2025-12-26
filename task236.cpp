/*
You are given a 0-indexed string s typed by a user. Changing a key is defined as using a key different from the last used key. For example, s = "ab" has a change of a key while s = "bBBb" does not have any.

Return the number of times the user had to change the key.

Note: Modifiers like shift or caps lock won't be counted in changing the key that is if a user typed the letter 'a' and then the letter 'A' then it will not be considered as a changing of key.
*/

class Solution {
public:
    int countKeyChanges(string s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        char prev = s[0];
        int count = 0;

        for (int i = 1; i < s.length(); i++) {
            if (prev != s[i]) count++;
            prev = s[i];
        }

        return count;
    }
};
