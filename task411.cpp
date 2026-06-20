/*
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
*/

class Solution {
public:
    int maxDepth(string s) {
        int a = 0;
        int m = 0;
        for (const char& i: s) {
            if (i == '(') {
                ++a;
                if (a > m) m = a;
            }
            else if (i == ')') --a;
        }

        return m;
    }
};
