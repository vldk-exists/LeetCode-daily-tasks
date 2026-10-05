/*
Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

    - "()" has score 1.
    - AB has score A + B, where A and B are balanced parentheses strings.
    - (A) has score 2 * A, where A is a balanced parentheses string.

*/

class Solution {
public:
    int scoreOfParentheses(string s) {
        int height = 0;

        int maxHeight = 0;
        int res = 0;

        for (const char& i: s) {
            if (i == '(') {
                ++height;
                maxHeight = height;
            } else {
                if (height == maxHeight) {
                    res += pow(2, height - 1);
                }

                --height;
                if (height == 0) maxHeight = 0;
            }
        }

        return res;
    }
};
