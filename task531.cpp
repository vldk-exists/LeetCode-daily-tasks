/*
Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it into some number of substrings such that:

    - Each substring is balanced.

Return the maximum number of balanced strings you can obtain.
*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;

        int a = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'R') ++a;
            else --a;

            if (a == 0) ++count; 
        }

        return count;
    }
};
