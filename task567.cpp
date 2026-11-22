/*
Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
*/

class Solution {
public:
    bool checkString(string s) {
        bool b = false;

        for (const char& i: s) {
            if (!b) {
                b = i == 'b';
            } else {
                if (i == 'a') return false;
            }
        }

        return true;
    }
};
