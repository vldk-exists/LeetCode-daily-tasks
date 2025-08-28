/*
Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

    - A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
    - s will contain at least one letter that appears twice.
*/

class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> a;

        for (char i: s) {
            if (a.find(i) != a.end()) return i;
            else a.insert(i);
        }

        return s[0];
    }
};
