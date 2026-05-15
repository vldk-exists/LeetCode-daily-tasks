/*
You are given a string s consisting of n characters which are either 'X' or 'O'.

A move is defined as selecting three consecutive characters of s and converting them to 'O'. Note that if a move is applied to the character 'O', it will stay the same.

Return the minimum number of moves required so that all the characters of s are converted to 'O'.
*/

class Solution {
public:
    int minimumMoves(string s) {
        int count = 0;
        for (int i = 0; i < s.length()-2; ++i) {
            if (s[i] == 'X') {
                for (int j = 0; j < 3; ++j) s[i+j] = 'O';
                ++count;
            }
        }

        for (int i = s.length()-1; i > 2; --i) {
            if (s[i] == 'X') {
                for (int j = 0; j < 3; ++j) s[i-j] = 'O';
                ++count;
            }
        }

        return count;
    }
};
