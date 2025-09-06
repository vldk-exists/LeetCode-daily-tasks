/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int minDifference = 26;
        char res = letters[0];

        for (char letter: letters) {
            int difference = letter - target;
            if (letter != target && difference > 0) {
                if (difference < minDifference) {
                    minDifference = difference;
                    res = letter;
                }
            }
        }

        return res;
    }
};
