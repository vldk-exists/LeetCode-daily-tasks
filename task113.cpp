/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

    For example, if s = "abcde", then it will be "bcdea" after one shift.
*/

class Solution {
public:
    void rotateString(string* str) {
        char temp = (*str)[0];

        (*str).erase(0, 1);

        *str += temp;
    }

    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        for (int i = 0; i < s.length(); i++) {
            if (s == goal) return true;
            rotateString(&s);
        }

        return false;
    }
};
