/*
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.
*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& a, vector<string>& b) {
        string c, d;

        for (string i: a) c += i;

        for (string j: b) d += j;

        return c == d;
    }
};
