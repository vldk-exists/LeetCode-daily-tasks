/*
Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
*/

class Solution {
public:
    int maxScore(string s) {
        int right = 0;
        for (const char& i: s) {
            if (i == '1') ++right;
        }

        int score = 0;
        int left = 0;
        for (int i = 0; i < s.length()-1; ++i) {
            if (s[i] == '0') ++left;
            else --right;

            score = max(left+right, score);
        }

        return score;
    }
};
