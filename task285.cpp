/*
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.
*/

class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;

        for (int i = 0; i < s.length()-1; i++) 
        result += abs((int)s[i] - (int)s[i+1]);

        return result;
    }
};
